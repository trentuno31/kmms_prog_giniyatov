#include "menu_items.hpp"

// TODO пространство имен для MenuItem
int main() {
    MenuItem *current = TGin::create_menu();

    while (current) {
        current = (*current).func(current);
    }

    return 0;
}