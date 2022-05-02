// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April, 29, 2022
// In this program we display RGB colors using nested loop.


#include <iostream>

main() {
    // variables
    int counter1;
    int counter2;
    int counter3;


    // use nested loops to display the colors code
    for (counter1 = 200; counter1 < 255; counter1++) {
        for (counter2 = 200; counter2 < 255; counter2++) {
            for (counter3 = 200; counter3 < 255; counter3++) {
                std::cout << "RGB = " << " R = " << counter1
                << " G = " << counter2 << " B = " << counter3 << std::endl;

        }
        }
    }
   
}
