#define PIN_MOTOR_A1 12
#define PIN_MOTOR_A2 13
#define PIN_MOTOR_B1 14
#define PIN_MOTOR_B2 15

void motor_init(void);
void motor_move_left(void);
void motor_move_right(void);
void motor_move_forward(void);
void motor_move_backward(void);
void motor_move_stop(void);