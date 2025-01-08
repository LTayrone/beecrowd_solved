//
// Created by User on 07/01/2025.
//
#include <iostream>
#include <iomanip> // Inclua esta biblioteca para usar std::setprecision
#include <math.h>
#include <stdio.h>
#include <valarray>

int main() {
    double area, n = 3.14159, raio;
    std::cin >> raio;
    area = pow(raio, 2.00) * n;

    // Use std::fixed e std::setprecision para formatar a saída
    std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

    return 0;
}