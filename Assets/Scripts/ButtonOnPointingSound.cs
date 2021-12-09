using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public abstract class ButtonOnPointingSound : MonoBehaviour, IPointerEnterHandler
{
    [SerializeField] private AudioSource _soundPrefab;
    [SerializeField] private AudioClip _clip;

    public abstract void OnPointerEnter(PointerEventData eventData);

    protected void PlaySound()
    {
        var obj = Instantiate(_soundPrefab.gameObject);
        obj.GetComponent<AudioSource>().PlayOneShot(_clip);
    }
}