#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(13,13,25,0,0);

    move_to(3,2);
    
    colorize();
    
    move_up();
    
    repeat(2) {
        move_right();
        colorize();
    } loop;
    
    repeat(2) {
        move_down();
        move_right();
        colorize();
    } loop;
    
    repeat(2) {
        move_up();
        move_right();
        colorize();
    } loop;

    move_right();
    colorize();

    repeat(2) {
        move_down();
        move_right();
        colorize();
    } loop;
        
    repeat(2) {
        move_down();
        colorize();
    } loop;

    repeat(5) {
        move_down();
        move_left();
        colorize();
    } loop;

    repeat(5) {
        move_up();
        move_left();
        colorize();
    } loop;

    repeat(2) {
        move_up();
        colorize();
    } loop;

    display_paper();
    return 0;
}
