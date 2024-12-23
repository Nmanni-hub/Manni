#include <iostream>
#include "Character.h"

int main() {
    std::cout << "TESTING CHARACTER CLASS\n";
    
    // Test 1: Constructor 
    std::cout << "Press any key to initialize a Mario object...\n";
    std::cin.get(); 

    Character mario;  // Usa "mario" con la lettera minuscola
    std::cout << "Speed after initialization: " << mario.auto_speed() << "\n";
    std::cout << "Expected: 0.0 (speed should be 0 after initialization)\n\n";
    
    // Test 2: Test of accelerate function
    std::cout << "Press any key to test the Accelerate function...\n";
    std::cin.get(); 
    
    std::cout << "Accelerating Mario...\n";
    for (int i = 1; i <= 11; i++) {  
        mario.Accelerate();
        std::cout << "Call " << i << ": Speed: " << mario.auto_speed() << "\n";
        if (i == 11) {
            std::cout << "Expected: Speed should reach 10 (max speed). The speed has reached the maximum value and cannot go higher.\n";
        }
    }
    std::cout << "\n";
    
    // Test 3: Test of Break function 
    std::cout << "Press any key to test the Break function...\n";
    std::cin.get();  
    
    std::cout << "Braking Mario...\n";
    for (int i = 1; i <= 11; i++) { 
        mario.Break();
        std::cout << "Call " << i << ": Speed: " << mario.auto_speed() << "\n";
        if (i==11) {
            std::cout << "Expected: Speed should reach 0 (brake should stop at 0). The speed is now 0.\n";
        }
    }
    std::cout << "\n";

    
    // Test 4: Test of auto_speed (getter)
    std::cout << "Press any key to test the auto_speed function...\n";
    std::cin.get();  // Pausa per l'input dell'utente
    
    std::cout << "Getting Mario's speed...\n";
    std::cout << "Mario's current speed is: " << mario.auto_speed() << "\n";
    std::cout << "Expected: 0 (because speed was just set to 0 by the Break function).\n\n";
    
    // Test 5: Destructor
    std::cout << "Press any key to test the destructor...\n";
    std::cin.get(); 
    
    return 0;
}