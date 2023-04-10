
#include "stateMachine.h"

static state_type currentState = IDLE_STATE;
static state_type previousState = IDLE_STATE;
static transition_type transition;

static void (*array[4][3])(void) = { {left2, right2, wait2},
                                     {left2, idle2, wait2},
                                     {idle2, right2, wait2},
                                     {wait2, wait2, wait2}  };


transition_type getTransition (void)
{

}


void stateMachine1 ()
{
    transition = getTransition ();

    switch (currentState)
    {
        case IDLE_STATE:
            switch (transition)
            {
                case LEFT_BUTTON:
                currentState = LEFT_STATE;
                left1 ();
                break;

                case RIGHT_BUTTON:
                currentState = RIGHT_STATE;
                right1 ();
                break;

                case WAITING_BUTTON:
                previousState = IDLE_STATE;
                currentState = WAITING_STATE;
                wait1 ();
                break;
            }
        break;

        case LEFT_STATE:
            switch (transition)
            {
                case LEFT_BUTTON:
                currentState = LEFT_STATE;
                left1 ();
                break;

                case RIGHT_BUTTON:
                currentState = IDLE_STATE;
                idle1 ();
                break;

                case WAITING_BUTTON:
                previousState = LEFT_STATE;
                currentState = WAITING_STATE;
                wait1 ();
                break;
            }
        break;

        case RIGHT_STATE:
            switch (transition)
            {
                case LEFT_BUTTON:
                currentState = IDLE_STATE;
                idle1 ();
                break;

                case RIGHT_BUTTON:
                currentState = RIGHT_STATE;
                right1 ();
                break;

                case WAITING_BUTTON:
                previousState = RIGHT_STATE;
                currentState = WAITING_STATE;
                wait1 ();
                break;
            }
        break;

        case WAITING_STATE:
            switch (transition)
            {
                case LEFT_BUTTON:
                previousState = LEFT_STATE;
                currentState = WAITING_STATE;
                wait1 ();
                break;

                case RIGHT_BUTTON:
                previousState = RIGHT_STATE;
                currentState = WAITING_STATE;
                wait1 ();
                break;

                case WAITING_BUTTON:
                    switch (previousState)
                    {
                        case IDLE_STATE:
                        currentState = IDLE_STATE;
                        idle1 ();
                        break;

                        case LEFT_STATE:
                        currentState = LEFT_STATE;
                        left1 ();
                        break;

                        case RIGHT_STATE:
                        currentState = RIGHT_STATE;
                        right1 ();
                        break;
                    }
                break;
            }
        break;
    }
}

void stateMachine2 ()
{
    transition = getTransition ();
    array[currentState][transition]();
}

