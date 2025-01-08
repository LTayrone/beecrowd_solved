//
// Created by User on 08/01/2025.
//
#include <iomanip>
#include <iostream>

using namespace std;


int main() {

    int cod_peca1, cod_peca2, quant_peca1, quant_peca2;
    double val_peca1, val_peca2, total_pagar;

    cin >> cod_peca1 >> quant_peca1 >> val_peca1;
    cin >> cod_peca2 >> quant_peca2 >> val_peca2;

    total_pagar = (val_peca1 * quant_peca1) + (val_peca2 * quant_peca2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total_pagar  << "\n";

    return 0;
}