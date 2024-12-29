#pragma once
#include <string> 

class Character {
protected:
float speed_;

public:
static float max_speed_;

//Default constructor
Character();

virtual void Accelerate();

void Break();

float auto_speed() const;

//Destructor
virtual ~Character() ;

//Virtual function purely abstract
virtual std::string WhatAmI() const = 0;

};