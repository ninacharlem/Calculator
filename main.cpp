//
//  main.cpp
//  Basic Calculator
//
//  Created by Nina Robichaud on 5/4/20.
//  Copyright © 2020 Nina Robichaud. All rights reserved.
//

#include <iostream>

int main()
{
    int a;
    int b;
    int sum;
    
    std::cout << "Enter a number, please \n";
    std::cin >> a;
    
    std::cout << "Enter another number \n";
    std::cin >> b;
    
    sum = a + b;
    std::cout << "The sum of those numbers is " << sum <<std::endl;
    
    return 0;
}
