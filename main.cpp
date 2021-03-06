#include <ncurses.h>
#include <iostream>
#include <string>
#include <cstring>
#include "constants.h"

int main(int argc, char **argv)
{
    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);
    std::string info_string { construct_information_string() };
    int row{ 0 };
    int col{ 0 };
    getmaxyx(stdscr, row, col);
    attron(A_REVERSE);
    mvprintw(0, (col-strlen(info_string.c_str()))/2, "%s", info_string.c_str());
    attroff(A_REVERSE);
    move(2, 0);
    refresh();
    while (true) {
        int character { 0 };
        character = getch();
        if (character == KEY_F(1)) {
            break;
        } else {
            addch(character);
            refresh();
        }
    }
    endwin();
}
