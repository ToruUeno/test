/******************************************************************************/
/* Servo_Library.h						name : Toru Ueno					  */
/* vol.6								date : 2016/6/20					  */
/******************************************************************************/
#ifndef Servo_Library

/* define定義 --------------------------------------------------------------- */
#define Servo_Library

#define S_right 1
#define S_left  0

/* 変数宣言 ----------------------------------------------------------------- */
const int S_cycle = 20000;						/* PWM周期 (20ms)			 */
const int S_center = 1500;						/* 回転角 真ん中			  */
const int S_left90 = 2350;						/* 回転角 左90°			  */
const int S_right90 = 650;						/* 回転角 右90°			  */

/* 構造体宣言 --------------------------------------------------------------- */
struct Srvo {
	volatile uint8_t* Dreg;						/* ポート方向レジスタ		  */
	volatile uint8_t* Preg;						/* ポート出力レジスタ		  */
	unsigned char     Port;						/* ポート					  */
};

/* プロトタイプ宣言 --------------------------------------------------------- */
void Servo_Init(Srvo*);
void Servo_StartPos(Srvo*, int);
void Servo_Move(Srvo*, int, int);
void delay_ms(int);
void delay_us(int);

#endif

