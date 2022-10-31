using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecordIndicator : MonoBehaviour
{

    private GameObject Background;

    // Start is called before the first frame update
    void Start()
    {
        Background = this.gameObject.transform.GetChild(0).gameObject;
        Background.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
    }
}
