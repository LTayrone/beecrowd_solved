//
// Created by User on 08/01/2025.
//
#include <iomanip>
#include <iostream>

using namespace std;


int main() {

    string name;
    double salario, vendas_efetuadas, total_salario;
    cin >> name >> salario >> vendas_efetuadas;

    total_salario = (vendas_efetuadas * 0.15) + salario;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total_salario << endl;


    return 0;
}