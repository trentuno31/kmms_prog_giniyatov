#include "menu_functions.hpp"
#include "menu.hpp"

#include <iostream>


MenuItem *show_menu(MenuItem *current) {
    std::cout << "\n" << (*current).title << "\n";

    for (int i = 0; i < current->children.size(); ++i) {
        std::cout << i + 1 << " - "
                  << current->children[i]->title << '\n';
    }

    std::cout << "0 - " << current->exit_label << '\n';
    std::cout << "Ваш выбор: ";

    int choice;
    std::cin >> choice;

    if (choice == 0) {
        return current->parent;
    }

    return current->children[choice - 1];

}