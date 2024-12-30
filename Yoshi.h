#pragma once
#include "Character.h"
#include <string> 

class Yoshi : public Character {
private:
int* crests;  // A pointer to store the number of crests

public:
    //costructor 
    Yoshi(int n_crests) : Character() {  
    crests = new int(n_crests); 
    std::cout << "Yoshi created with " << *crests << " crests.\n";
    }
  

    std::string WhatAmI() const override {
        return std::to_string(*crests) + " crested Yoshi";
    }

    void Accelerate()  override {
    if (speed_ < max_speed_) {
        speed_ += 1.5f;
    }
    }

    //destructor
    ~Yoshi() override {
        std::cout << "Destructor called for Yoshi\n";
        delete crests;  // Deallocate the memory for crests to avoid memory leak
    }

};
