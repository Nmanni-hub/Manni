#include <iostream>
#include "Character.h"
#include "Yoshi.h"
#include "Mario.h"
#include <vector>
#include <iomanip>

int main() {

    //Creation of partecipant 
    Yoshi yoshi;
    Mario mario;
    
    std::cout << "\nThis is a 5-second race.\n";
    
    // Print the names of the participants
    std::cout << "The participants are:\n";
    std::cout << "1. " << mario.WhatAmI() << std::endl;
    std::cout << "2. " << yoshi.WhatAmI() << std::endl;
    
    std::cout << "\nLET THE RACE BEGIN!\n";

    //Define a container
    std::vector<Character*> participants;

    //Populate the container
    participants.push_back(&mario);
    participants.push_back(&yoshi);

     // Variable to track the total distance covered by each participant
    std::vector<double> distances(participants.size(), 0.0);

    // Simulate the race for 5 seconds
    for (int second = 1; second <= 5; ++second) {
        std::cout << second << " sec:\n";

        // Iterate through participants using iterators
        auto it = participants.begin();
        for (size_t i = 0; it != participants.end(); ++it, ++i) {
            (*it)->Accelerate(); // Increment the speed for each participant

            // Calculate the distance covered in this second
            double current_speed = (*it)->auto_speed();
            distances[i] += current_speed;

            // Print the participant's details
            std::cout << (*it)->WhatAmI() << " - Speed: " << current_speed 
                      << " m/s, Distance: " << distances[i] << " m\n";
        }

        std::cout << std::endl;
    }

    // Race ends: print the winner
    std::cout << "Race finished!\n";
    if (distances[0] > distances[1]) {
        std::cout << mario.WhatAmI() << " wins with " << distances[0] << " meters!\n";
    } else if (distances[1] > distances[0]) {
        std::cout << yoshi.WhatAmI() << " wins with " << distances[1] << " meters!\n";
    } else {
        std::cout << "It's a tie! Both covered " << distances[0] << " meters.\n";
    }


    return 0;
}