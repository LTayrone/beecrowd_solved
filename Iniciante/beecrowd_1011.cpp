//
// Created by User on 08/01/2025.
//
#include <iomanip>
#include <iostream>
#include <math.h>
#include <valarray>

using namespace std;


int main() {
    const double pi = 3.14159;
    double raio, volume;
    cin >> raio ;

    volume = (4/3.00) * pi * pow(raio, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;


    return 0;
}