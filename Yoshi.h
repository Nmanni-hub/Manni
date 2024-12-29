#pragma once
#include "Character.h"
#include <string> 

class Yoshi : public Character {
public:
    std::string WhatAmI() const override {
        return "Yoshi";
    }

    void Accelerate()  override {
    if (speed_ < max_speed_) {
        speed_ += 1.5f;
    }
    }

    //destructor
    ~Yoshi() override { 
        std::cout << "Destructor called for Yoshi\n";
    }

};
