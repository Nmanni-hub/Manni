#include "Character.h"
#include <string> 

class Yoshi : public Character {
public:
    std::string WhatAmI() const override {
        return "Yoshi";
    }

    void Accelerate() {
    if (speed_ < max_speed_) override {
        speed_ += 1.5f;
    }
    }
};
