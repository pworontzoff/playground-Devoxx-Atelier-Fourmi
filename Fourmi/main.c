#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(75,75,10,0.0025,0);
    move_to(37,37);
    repeat(11000) {
        if (!is_colored()) {
            colorize();
            ant_turns_right_then_move();
        } else {
            erase();
            ant_turns_left_then_move();
        }
    } loop;
    display_paper();    
    return 0;
}
