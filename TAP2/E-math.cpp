#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    // Coeficientes da equação quadrática
    double a = 12.0;
    double b = -4.0 * (A + B);
    double c = A * B;

    // Calculando o discriminante
    double discriminante = sqrt(b * b - 4 * a * c);

    // Encontrando o valor positivo de x
    double x = (-b + discriminante) / (2 * a);

    // Calculando o volume máximo
    double Vmax = x * (A - 2 * x) * (B - 2 * x);

    cout << fixed << setprecision(9) << x << " " << Vmax << endl;

    return 0;
}
