
#ifndef STATEMACHINE
#define STATEMACHINE

#include "states.h"


typedef enum {
    IDLE_STATE,
    LEFT_STATE,
    RIGHT_STATE,
    WAITING_STATE
}state_type;

typedef enum {
    LEFT_BUTTON, 
    RIGHT_BUTTON,
    WAITING_BUTTON
}transition_type;

transition_type getTransition (void);

void stateMachine1 ();
void stateMachine2 ();

#endif