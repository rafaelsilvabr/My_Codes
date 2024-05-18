#include <bits/stdc++.h>
using namespace std;

int somaDosDigitos(int num) {
    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

int encontrarKesimoPerfeito(int k) {
    int contador = 0;
    int num = 0;
    while (contador < k) {
        num++;
        if (somaDosDigitos(num) == 10) {
            contador++;
        }
    }
    return num;
}

int main() {
    int k;
    cin >> k;
    cout << encontrarKesimoPerfeito(k) << endl;
    return 0;
}
