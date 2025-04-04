#include "paper.h"

int main() {
    init_paper(7, 7, 25, 0.5, 0);
    move_to(3,3);

    repeat (8) {
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
