#include <iostream>
#include "Character.h"


int main() {
/* // Test 1: Constructor 
    std::cout << "Press any key to initialize a Luigi object...\n";
    std::cin.get(); 

    Character luigi;  // Usa "luigi" con la lettera minuscola
    std::cout << "Speed after initialization: " << luigi.auto_speed() << "\n";
    std::cout << "Expected: 0.0 (speed should be 0 after initialization)\n\n";
    
    // Test 2: Test of accelerate function
    std::cout << "Press any key to test the Accelerate function...\n";
    std::cin.get(); 
    
    std::cout << "Accelerating Luigi...\n";
    for (int i = 1; i <= 11; i++) {  
        luigi.Accelerate();
        std::cout << "Call " << i << ": Speed: " << luigi.auto_speed() << "\n";
        if (i == 11) {
            std::cout << "Expected: Speed should reach 10 (max speed). The speed has reached the maximum value and cannot go higher.\n";
        }
    }
    std::cout << "\n";
    
    // Test 3: Test of Break function 
    std::cout << "Press any key to test the Break function...\n";
    std::cin.get();  
    
    std::cout << "Braking Luigi...\n";
    for (int i = 1; i <= 11; i++) { 
        luigi.Break();
        std::cout << "Call " << i << ": Speed: " << luigi.auto_speed() << "\n";
        if (i==11) {
            std::cout << "Expected: Speed should reach 0 (brake should stop at 0). The speed is now 0.\n";
        }
    }
    std::cout << "\n";

    
    // Test 4: Test of auto_speed (getter)
    std::cout << "Press any key to test the auto_speed function...\n";
    std::cin.get();  // Pausa per l'input dell'utente
    
    std::cout << "Getting Luigi's speed...\n";
    std::cout << "Luigi's current speed is: " << luigi.auto_speed() << "\n";
    std::cout << "Expected: 0 (because speed was just set to 0 by the Break function).\n\n";
    
    // Test 5: Destructor
    std::cout << "Press any key to test the destructor...\n";
    std::cin.get();  */

    //Test 6: Derivated classes 
    std::cout << "Test: Creating two derived classes (Mario and Yoshi) and testing the virtual functions WhatAmI and Accelerate.\n";
    Character yoshi;
    Character mario;
    return 0;
}