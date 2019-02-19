using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanesScripts : MonoBehaviour {

    GameObject wall_Left;
    GameObject wall_Right;
    GameObject wall_Bottom;
    GameObject wall_Top;

    private Camera _mainCamera;

    Vector3 LeftPos;
    Vector3 RightPos;
    Vector3 BottomPos;
    Vector3 TopPos;


	// Use this for initialization
	void Start () {
        _mainCamera = GameObject.Find("Main Camera").GetComponent<Camera>();
        wall_Left = GameObject.Find("PlaneLeft");
        wall_Right = GameObject.Find("PlaneRight");
        wall_Bottom = GameObject.Find("PlaneBottom");
        wall_Top = GameObject.Find("PlaneTop");

        LeftPos.x = getScreenTopLeft().x;
        RightPos.x = getScreenBottomRight().x;
        BottomPos.y = getScreenBottomRight().y;
        TopPos.y = getScreenTopLeft().y;

        wall_Left.transform.position = LeftPos;
        wall_Right.transform.position = RightPos;
        wall_Top.transform.position = TopPos;
        wall_Bottom.transform.position = BottomPos;

		
	}

    private Vector3 getScreenTopLeft()
    {
        // 画面の左上を取得
        Vector3 topLeft = _mainCamera.ScreenToWorldPoint(Vector3.zero);

        // 上下反転させる
        topLeft.Scale(new Vector3(1f, -1f, 1f));

        return topLeft;
    }

    private Vector3 getScreenBottomRight()
    {
        // 画面の右下を取得
        Vector3 bottomRight = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, 0.0f));

        // 上下反転させる
        bottomRight.Scale(new Vector3(1f, -1f, 1f));

        return bottomRight;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
