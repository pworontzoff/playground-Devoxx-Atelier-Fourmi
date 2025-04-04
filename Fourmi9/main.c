#include "paper.h"

int main() {
    init_paper(15, 15, 20, 0.025, 0);
    move_to(7,7);

    repeat (472) {
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
