//
// Created by User on 07/01/2025.
//
#include <iomanip>
#include <iostream>

using namespace std;


int main() {

    double A, B, media;
    cin >> A >> B;
    media = ((A *3.5) + (B * 7.5)) / 11;

    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;

    return 0;
}