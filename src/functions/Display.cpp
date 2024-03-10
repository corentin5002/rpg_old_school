// I want a function named 'read sprite' taht read a sprite from a file and display it in the terminal line by line

#include <iostream>
#include <ncurses.h>
#include <fstream>
#include <string>
#include <vector>
#include "Personnage.h"


struct MenuOption {
    std::string text;
    int line, col;
};


int CombatMenu(Personnage *joueur) {
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();


    box(stdscr, 0, 0);


    int height, width, start_y, start_x;
    int padding = 2;

    height = 12;
    width = 60;
    start_y = 40;
    start_x = 2;

    WINDOW *win = newwin(height, width, start_y, start_x);
    refresh();

    box(win, 0, 0);
    mvwprintw(win, 1, 1, "Menu");
    wrefresh(win);


    int numLine, numCol;
    numLine = 2;
    numCol = 2;
    std::vector<MenuOption> options = {
            {"Attaquer", 0, 0},
            {"Défendre", 0, 1},
            {"Inventaire", 1, 0},
            {"Fuir", 1, 1},
    };
//region Menu

    int ch = 0;
    MenuOption selected_option = options[0];

    while (ch != 10) {
        for (int i = 0; i < options.size(); i++) {
            bool selected = (selected_option.line == options[i].line && selected_option.col == options[i].col);

//            mvwprintw(stdscr, 39, 2, "[debug] Selected option: %d %d     : %d", selected_option.line, selected_option.col, ch);

            if (selected) {
                wattron(win, A_STANDOUT);
            } else {
                wattroff(win, A_STANDOUT);
            }
            mvwprintw(win, options[i].line + padding, options[i].col * 24 + 1 + padding, options[i].text.c_str());
        }
        wrefresh(win);
        ch = getch();

        switch (ch) {
            case KEY_UP:
                selected_option.line = (selected_option.line + 1) % numLine;
                break;
            case KEY_DOWN:
                selected_option.line = (selected_option.line - 1 + numLine) % numLine;
                break;
            case KEY_RIGHT:
                selected_option.col = (selected_option.col + 1) % numCol;
                break;
            case KEY_LEFT:
                selected_option.col = (selected_option.col - 1 + numCol) % numCol;
                break;
            default:
                break;
        }

    }

    endwin();
    return 0;
}


void readSprite(const std::string &filename) {
    std::ifstream file(filename);
    if (file) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    } else {
        std::cerr << "Impossible d'ouvrir le fichier " << filename << std::endl;
    }
}