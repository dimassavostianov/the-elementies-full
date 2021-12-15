using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudsSpawner : MonoBehaviour
{
    [SerializeField] private Cloud _cloud;
    [SerializeField] private Camera _camera;
    [SerializeField] private float _minDelay;
    [SerializeField] private float _maxDelay;

    private float _currentDelay;

    private void OnEnable()
    {
        _currentDelay = 0f;
    }

    private void Update()
    {
        _currentDelay -= Time.deltaTime;

        if (_currentDelay <= 0)
        {
            var cloud = Instantiate(_cloud.gameObject, gameObject.transform);
            Vector2 vieportPositionForCloud = new Vector2(-0.1f, Random.Range(0.6f, 1f));
            Vector2 pos = _camera.ViewportToWorldPoint(vieportPositionForCloud);
            Vector3 positionForCloud = new Vector3(pos.x, pos.y, 0);
            cloud.transform.position = positionForCloud;
            cloud.GetComponent<Cloud>().SetCamera(_camera);
            _currentDelay = Random.Range(_minDelay, _maxDelay);
        }
    }
}
