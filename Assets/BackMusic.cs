using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackMusic : MonoBehaviour
{
    [SerializeField] private AudioClip _battleMusic;
    [SerializeField] private AudioClip _peaceMusic;
    [SerializeField] private AudioSource audio;

    public void PlayBattleMusic()
    {
        if (audio.clip != _battleMusic)
        {
            audio.clip = _battleMusic;
            audio.Play();
        }
    }

    public void PlayPeaceMusic()
    {
        if (audio.clip != _peaceMusic)
        {
            audio.clip = _peaceMusic;
            audio.Play();
        }
    }
}
