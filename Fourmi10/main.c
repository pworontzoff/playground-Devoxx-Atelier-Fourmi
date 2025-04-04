#include "paper.h"

int main() {
    init_paper(35, 35, 15, 0.003, 0);
    move_to(17,17);

    repeat (2000 ) {
        if (is_colored()) {
            erase();
            ant_turns_left_then_move();
        } else {
            colorize();
            ant_turns_right_then_move();
        }
    } loop;

    display_paper();   
}
