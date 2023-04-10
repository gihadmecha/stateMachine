
#include "stateMachine.h"



int main ()
{
    state_type currentState = IDLE_STATE;
    state_type previousState = IDLE_STATE;
    transition_type transition;

    while (1)
    {
        //stateMachine1 ();
        stateMachine2 ();
    }
}