#pragma once
#include "Character.h"
#include <string> 

class Mario : public Character {
public:
    std::string WhatAmI() const override {
        return "Mario";
    }

    //destructor
    ~Mario() override { 
        std::cout << "Destructor called for Mario\n";
    }



};
