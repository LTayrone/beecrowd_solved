//
// Created by User on 07/01/2025.
//
#include <iomanip>
#include <iostream>

using namespace std;


int main() {

    double A, B, C, media;
    cin >> A >> B >> C;
    media = ((A * 2) + (B * 3) + (C * 5))/ 10;

    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;

    return 0;
}