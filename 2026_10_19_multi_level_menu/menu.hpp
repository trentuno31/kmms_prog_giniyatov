#pragma once

#include <string>
#include <vector>

struct MenuItem {
    // TODO string -> const char *const
    std::string title;
    std::string exit_label;
    MenuItem *parent = nullptr;
    // TODO vector -> const MenuItem*.
    std::vector<MenuItem *> children;

    MenuItem *(*func)(MenuItem *) = nullptr;

};




