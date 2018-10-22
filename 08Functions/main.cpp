//
//  main.cpp
//  08Functions
//
//  Created by Oliver Brotherhood on 22/10/2018.
//  Copyright © 2018 Oliver Brotherhood. All rights reserved.
//

#include <iostream>
#include <vector>
#include <array>

using namespace std;

//Exercise 01
double addUp(double n1, double n2){
    return n1 + n2;
}

//Exercise 06
int addUpArray(int a[]){
    
    int total = 0;
    
    for (int i = 0; i < sizeof(a); i++){
        total += a[i];
    }
    
    return total;
    
}


int main() {
    
    //Exercise 01
    double number01, number02;
    
    cout << "Enter the first Number ";
    cin >> number01;
    
    cout << "\nEnter the second number ";
    cin >> number02;
    
    cout << "The answer is: " << addUp(number01, number02) << endl;
    
    
    //Exercise 06
    int array01[] = {1, 23, 32, 43, 54, 234};
    
    cout << "Total array value: " << addUpArray(array01) << endl;

    return 0;
}
