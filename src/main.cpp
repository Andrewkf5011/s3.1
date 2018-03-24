#include <mbed.h>
#include "components.h"

int main()
{
    AssignmentBoard board;

    Potentiometer  left(board.SHIELD_LEFT_POTENTIOMETER);
    Potentiometer right(board.SHIELD_RIGHT_POTENTIOMETER);

    while(1)
    {
        printf("Left dial %f \n",  left.read() );
        printf("Right dial %f \n", right.read() );

        wait( 1.0 );
    }
}
