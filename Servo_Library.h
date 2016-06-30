/******************************************************************************/
/* Servo_Library.h						name : Toru Ueno					  */
/* vol.6								date : 2016/6/20					  */
/******************************************************************************/
#ifndef Servo_Library

/* define��` --------------------------------------------------------------- */
#define Servo_Library

#define S_right 1
#define S_left  0

/* �ϐ��錾 ----------------------------------------------------------------- */
const int S_cycle = 20000;						/* PWM���� (20ms)			 */
const int S_center = 1500;						/* ��]�p �^��			  */
const int S_left90 = 2350;						/* ��]�p ��90��			  */
const int S_right90 = 650;						/* ��]�p �E90��			  */

/* �\���̐錾 --------------------------------------------------------------- */
struct Srvo {
	volatile uint8_t* Dreg;						/* �|�[�g�������W�X�^		  */
	volatile uint8_t* Preg;						/* �|�[�g�o�̓��W�X�^		  */
	unsigned char     Port;						/* �|�[�g					  */
};

/* �v���g�^�C�v�錾 --------------------------------------------------------- */
void Servo_Init(Srvo*);
void Servo_StartPos(Srvo*, int);
void Servo_Move(Srvo*, int, int);
void delay_ms(int);
void delay_us(int);

#endif

