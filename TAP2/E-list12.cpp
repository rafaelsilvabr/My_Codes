#include <bits/stdc++.h>
using namespace std;

long long contarSubstrings(const string& s, const unordered_set<char>& caracteresDisponiveis) {
    long long contador = 0;
    long long sequenciaAtual = 0;

    for (char c : s) {
        if (caracteresDisponiveis.find(c) != caracteresDisponiveis.end()) {
            sequenciaAtual++;
        } else {
            contador += (sequenciaAtual * (sequenciaAtual + 1)) / 2;
            sequenciaAtual = 0;
        }
    }

    contador += (sequenciaAtual * (sequenciaAtual + 1)) / 2;

    return contador;
}

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_set<char> caracteresDisponiveis;
    for (int i = 0; i < k; ++i) {
        char ch;
        cin >> ch;
        caracteresDisponiveis.insert(ch);
    }

    cout << contarSubstrings(s, caracteresDisponiveis) << endl;

    return 0;
}
