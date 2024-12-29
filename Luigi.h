#pragma once
#include "Character.h"
#include <string> 

class Luigi : public Character {
public:
    std::string WhatAmI() const override {
        return "Luigi";
    }

    //destructor
    ~Luigi() override { 
        std::cout << "Destructor called for Luigi\n";
    }

};