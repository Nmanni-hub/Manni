#include "Character.h"
#include <iostream>

float Character::max_speed_ = 10;

Character::Character() {
    speed_ = 0;
}

void Character::Accelerate() {
    if (speed_ < max_speed_) {
        speed_ += 1.0f;
    }
}

void Character::Break() {
    if (speed_ > 0) {
        speed_ -= 1.0f;
    }
}

float Character::auto_speed() const {  
    return speed_;
}

// Destructor
Character::~Character() {
    std::cout << "Destructor called" << std::endl;
}