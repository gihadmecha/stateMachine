#ifndef STATES
#define STATES

typedef enum {
    IDLE_STATE2,
    LEFT_STATE2,
    RIGHT_STATE2,
    WAITING_STATE2
}state_type2;

static state_type2 currentState2 = IDLE_STATE2;
static state_type2 previousState2 = IDLE_STATE2;

void idle1 ();
void left1 ();
void right1 ();
void wait1 ();

void idle2 ();
void left2 ();
void right2 ();
void wait2 ();



#endif