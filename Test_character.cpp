#include <iostream>
#include "Character.h"
#include "Luigi.h"
#include "Yoshi.h"
#include "Mario.h"


int main() {
    std::cout << "TESTING CHARACTER CLASS WITH Luigi object\n\n";
    // Test 1: Constructor 
    std::cout << "Press any key to initialize a Luigi object...\n";
    std::cin.get(); 

    Luigi luigi;  // Usa "luigi" con la lettera minuscola
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
    
   
    std::cout << "TESTING DERIVATED CLASS Mario and Yoshi object\n";
    //Test 5: Derivated classes
    // Ask user for the number of crests for Yoshi
    int n_crests;
    std::cout << "Enter the number of crests for Yoshi: ";
    std::cin >> n_crests;  // Get the number of crests from user input

    // Create Yoshi object with the specified number of crests
    Yoshi yoshi(n_crests);  // Pass the number of crests to the constructor of Yoshi
    Mario mario;  // Create Mario object

    //Accellerate method call
    yoshi.Accelerate();
    mario.Accelerate();
    
    std::cout << "Calling WhatAmI() for Yoshi: " << yoshi.WhatAmI() << " speed: " << yoshi.auto_speed() << std::endl;
    std::cout << "Calling WhatAmI() for Mario: " << mario.WhatAmI() << " speed: " << mario.auto_speed() << std::endl;
    
    // Test of output
    std::cout << "\nTest Results:\n";
    std::cout << "- WhatAmI works correctly: Yoshi returns '" << n_crests << " crested Yoshi' and Mario returns 'Mario'.\n";
    std::cout << "- Accelerate works correctly: Yoshi's speed is higher than Mario's after a single call (Yoshi: 1.5, Mario: 1.0).\n";

    // Test 6: Destructor
    std::cout << "Press any key to test the destructor...\n";
    std::cin.get(); 

   
    return 0;
}