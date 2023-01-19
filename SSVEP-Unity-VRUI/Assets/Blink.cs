using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Blink : MonoBehaviour
{

    public float frequency = 1;

    private GameObject Label;
    private GameObject Background;

    private float period;
    private float timer;
    private bool active = true;

    void Start()
    {   
        Label = this.gameObject.transform.GetChild(0).gameObject;
        Background = this.gameObject.transform.GetChild(1).gameObject;
        // Label.GetComponent<TextMesh>().text = frequency + "Hz";
        Background.SetActive(active);
        period = 1.0f / frequency;
        timer = 0.0f;
    }

    void Update()
    {
        // Simple oscillation: 1 for 1/2 period, 0 for 1/2 period
        if (timer >= (period / 2)) {
            timer = 0.0f;
            active = !active;
            Background.SetActive(active);
        } else timer += Time.deltaTime;
    }

    // Coroutines are slow and inaccurate for small times, thus blink is done in the Update loop.

}
