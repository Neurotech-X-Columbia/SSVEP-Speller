using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using WebSocketSharp;

public class SocketClient : MonoBehaviour
{
    Transitions script;
    WebSocket ws;

    int choice = 0;
    bool updateNeeded = false;

    // Start is called before the first frame update
    void Start()
    {   
        script = GameObject.FindGameObjectWithTag("Container").GetComponent<Transitions>();
        ws = new WebSocket("ws://localhost:8000");
        Debug.Log("Socket Client Started");
        ws.Connect();
        ws.Send("Initializing Connection");
        ws.OnMessage += (sender, e) =>
        {
            ReceiveMessage(e.Data);
        };
    }

    void SendMessage(string message) {
        Debug.Log("Message Sent");
        ws.Send(message);
    }

    void ReceiveMessage(string message) {
        choice = int.Parse(message) - 1;

        if (choice == -1) {
            Debug.Log("Recording period started.");
            updateNeeded = true;
        }
        else if (choice == -2) {
            Debug.Log("Recording period ended.");
            updateNeeded = true;
        }
        else {
            Debug.Log("Message received: " + choice);
            updateNeeded = true;
        }

        
    }

    // Update is called once per frame
    void Update()
    {
        if(ws == null) {
            ws = new WebSocket("ws://ce07-129-236-174-83.ngrok.io");
            ws.Connect();
            return;
        }
        if (updateNeeded) {
            script.MakeTransition(choice);
            SendMessage("Updated");
            updateNeeded = false;
        }
            
    }
}
