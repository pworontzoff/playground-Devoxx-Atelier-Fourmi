#include "paper.h"

int main() {
    init_paper(7, 7, 25, 0.5, 0);
    move_to(3,3);
    
    colorize();
    erase();
    display_paper();
}
