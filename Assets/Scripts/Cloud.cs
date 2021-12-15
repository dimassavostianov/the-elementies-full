using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Cloud : MonoBehaviour
{
    [SerializeField] private Image _image;
    [SerializeField] private Sprite[] _cloudVariant;
    [SerializeField] private Camera _camera;
    [SerializeField] private float _speed;
    [SerializeField] private float _minScale;
    [SerializeField] private float _maxScale;

    private void Start()
    {
        int ran = new System.Random().Next(2);
        _image.sprite = _cloudVariant[ran];
        transform.localScale = new Vector3(Random.Range(_minScale, _maxScale), Random.Range(_minScale, _maxScale), 1f);
    }

    private void Update()
    {
        Vector3 positionInViewport = _camera.WorldToViewportPoint(transform.position);

        if (positionInViewport.x > 1.1f) Destroy(gameObject);

        transform.Translate(Vector3.right * _speed * Time.deltaTime);
    }

    public void SetCamera(Camera camera)
    {
        _camera = camera;
    }
}
