#include "menu_items.hpp"
#include "menu_functions.hpp"

MenuItem *TGin::create_menu() {
    static MenuItem mainMenu{
            "Главное меню:",
            "Пойти поиграть в футбол",
            nullptr, {}, nullptr
    };

    static MenuItem subjects{
            "Изучать программирование:",
            "Выйти в главное меню",
            &mainMenu, {}, nullptr
    };


    static MenuItem programming_languages{
            "Изучать языки программирования",
            "Выйти в предыдущее меню",
            &subjects, {}, nullptr
    };

    static MenuItem algorithms{
            "Алгоритмы и СД",
            "Выйти в предыдущее меню",
            &subjects, {}, nullptr
    };

    static MenuItem another_tech{
            "Другие технологии",
            "Выйти в предыдущее меню",
            &subjects, {}, nullptr
    };

    static MenuItem databases{
            "Другие технологии",
            "Выйти в предыдущее меню",
            &another_tech, {}, nullptr,
    };
    static MenuItem async_programming{
            "Многопоточное программирование",
            "",
            &another_tech, {}, nullptr,
    };
    static MenuItem network_tech{
            "Сетевые технологии",
            "",
            &another_tech, {}, nullptr,
    };

    mainMenu.children = {&subjects};
    subjects.children = {&programming_languages, &algorithms, &another_tech};
    another_tech.children = {&databases, &async_programming, &network_tech};

    mainMenu.func = &show_menu;
    subjects.func = &show_menu;
    another_tech.func = &show_menu;

    return &mainMenu;
}