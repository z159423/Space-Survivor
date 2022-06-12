using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private FixedTouchField fixedTouchField;
    [SerializeField] private FixedJoystick joystick;
    [SerializeField] private PlayerStat playerStat;
    [SerializeField] private Transform playerBody;

    private Vector2 moveDir;
    private float angle;
    private bool isMoving = false;

    [SerializeField] private new Rigidbody2D rigidbody;

    // Update is called once per frame
    void Update()
    {
        if (playerStat.GetPlayerDie())
            return;

        rigidbody.velocity += joystick.Direction * Time.deltaTime * playerStat.GetMoveSpeed();

        if(Mathf.Abs(joystick.Direction.x) > 0 || Mathf.Abs(joystick.Direction.y) > 0)
        {
            angle = Mathf.Atan2((joystick.Direction.y + playerBody.transform.position.y) - playerBody.transform.position.y,
            (joystick.Direction.x + playerBody.transform.position.x) - playerBody.transform.position.x) * Mathf.Rad2Deg;

            isMoving = true;
        }

        if(playerBody != null)
            playerBody.transform.rotation = Quaternion.Lerp(playerBody.transform.rotation, Quaternion.AngleAxis(angle - 90, Vector3.forward), playerStat.GetRotationSpeed() * Time.deltaTime);

    }

    public bool getIsMoving()
    {
        return isMoving;
    }

    public void SetPlayerBody(Transform body)
    {
        playerBody = body;
    }
}
