//
//  main.cpp
//  08Functions
//
//  Created by Oliver Brotherhood on 22/10/2018.
//  Copyright © 2018 Oliver Brotherhood. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

//Exercise 01
double addUp(double n1, double n2){
    return n1 + n2;
}

//Exercise 02


int main() {
    
    //Exercise 01
    double number01, number02;
    
    cout << "Enter the first Number ";
    cin >> number01;
    
    cout << "\nEnter the second number ";
    cin >> number02;
    
    cout << "The answer is: " << addUp(number01, number02) << endl;
    
    
    //Exercise 02
    

    return 0;
}
