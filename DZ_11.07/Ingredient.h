#pragma once
#include <iostream>
#include <queue>
#include <string>

class Ingredient {
    std::string name;
    int cookingTime;

public:
    Ingredient(const std::string& name, int cookingTime) : name(name), cookingTime(cookingTime) {}

    const std::string& getName() const {
        return name;
    }

    int getCookingTime() const {
        return cookingTime;
    }

    bool operator<(const Ingredient& other) const {
        return cookingTime < other.cookingTime;
    }
};

