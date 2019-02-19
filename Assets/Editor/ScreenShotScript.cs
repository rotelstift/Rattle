using System;
using UnityEngine;
using UnityEditor;
using System.IO;

public class CaptureDevelopmentScreenShotWindow : EditorWindow
{
    [UnityEditor.MenuItem("Edit/Capture Screenshot Window")]
    static void OpenWindow()
    {
        GetWindow<CaptureDevelopmentScreenShotWindow>(true, "ゲーム画面 キャプチャ");
    }

    string path = "~/";

    void OnGUI()
    {
        GUILayout.Label("保存先:");
        path = GUILayout.TextField(path);
        if (GUILayout.Button("Save ScreenShot"))
        {
            Capture();
        }
    }

    void Capture()
    {
        var filePath = string.Format(Path.Combine(path, "MyProjectCapture{0}.png"), DateTime.Now.ToString("yyyyMMddHHmmss"));
        Debug.Log(string.Format("Save a screenshot at {0}", filePath));
        ScreenCapture.CaptureScreenshot(string.Format(filePath));
    }
}