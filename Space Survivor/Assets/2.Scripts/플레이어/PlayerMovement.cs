using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private FixedTouchField fixedTouchField;
    [SerializeField] private FixedJoystick joystick;
    [SerializeField] private PlayerStat playerStat;
    [SerializeField] private Transform playerBody;
    [Space]
    [SerializeField] private Transform virtualTarget;
    private Vector2 virtualDir = Vector2.zero;

    private Vector2 moveDir;
    private float angle;
    private bool isMoving = false;

    [SerializeField] private new Rigidbody2D rigidbody;

    private void Start()
    {
        StartCoroutine(ChangeVirtualDir());

        IEnumerator ChangeVirtualDir()
        {
            while (true)
            {
                virtualDir = new Vector2(Random.Range(-1f, 1f), Random.Range(-1f, 1f));

                yield return new WaitForSeconds(Random.Range(5, 20));
            }
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (playerStat.GetPlayerDie())
            return;

        if (GameManager.instance.inMainMenu)
        {
            virtualTarget.RotateAround(transform.position, Vector3.back, Time.deltaTime * 10);

            Vector2 dirToVirtualTarget = Utility.GetDirection(transform.position, virtualTarget.position);

            // rigidbody.velocity += virtualDir.normalized * Time.deltaTime * playerStat.GetMoveSpeed();
            rigidbody.velocity = playerBody.transform.up * Time.deltaTime * playerStat.GetMoveSpeed() * 10f;


            if (Mathf.Abs(virtualDir.normalized.x) > 0 || Mathf.Abs(virtualDir.normalized.y) > 0)
            {
                angle = Mathf.Atan2((virtualDir.normalized.y + playerBody.transform.position.y) - playerBody.transform.position.y,
                (virtualDir.normalized.x + playerBody.transform.position.x) - playerBody.transform.position.x) * Mathf.Rad2Deg;

                isMoving = true;
            }

            if (playerBody != null)
                playerBody.transform.rotation = Quaternion.Lerp(playerBody.transform.rotation, Quaternion.AngleAxis(angle - 90, Vector3.forward), playerStat.GetRotationSpeed() * Time.deltaTime * 0.3f);
        }
        else if(fixedTouchField.Pressed)
        {
            rigidbody.velocity += new Vector2(playerBody.transform.up.x, playerBody.transform.up.y) * Time.deltaTime * playerStat.GetMoveSpeed();
            // rigidbody.velocity = playerBody.transform.up * Time.deltaTime * playerStat.GetMoveSpeed() * 10f;

            if (Mathf.Abs(fixedTouchField.joystickDir.normalized.x) > 0 || Mathf.Abs(fixedTouchField.joystickDir.normalized.y) > 0)
            {
                angle = Mathf.Atan2((fixedTouchField.joystickDir.normalized.y + playerBody.transform.position.y) - playerBody.transform.position.y,
                (fixedTouchField.joystickDir.normalized.x + playerBody.transform.position.x) - playerBody.transform.position.x) * Mathf.Rad2Deg;

                isMoving = true;
            }

            if (playerBody != null)
                playerBody.transform.rotation = Quaternion.Lerp(playerBody.transform.rotation, Quaternion.AngleAxis(angle - 90, Vector3.forward), playerStat.GetRotationSpeed() * Time.deltaTime);
        }




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
