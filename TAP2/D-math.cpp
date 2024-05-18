#include<bits/stdc++.h>

using namespace std;

int main() {
    double h, c, l;
    cin >> h >> c >> l;

   double caminho1 = sqrt((c+h) * (c+h) + (h + l) * (h + l));
   double caminho2 = sqrt((h+h+l) * (h+h+l) + (c) * (c));
   double caminho3 = sqrt((c+h+h) * (c+h+h) + (l) * (l));

//    double menorCaminho = fmin(caminho1, caminho2);
//    menorCaminho = fmin(menorCaminho, caminho3);

    if(caminho1<=caminho2 && caminho1<=caminho3) cout << fixed << setprecision(4) << caminho1 << endl;
    else if(caminho2<=caminho1 && caminho2<=caminho3) cout << fixed << setprecision(4) << caminho2 << endl;
    else if(caminho3<=caminho2 && caminho3<=caminho1) cout << fixed << setprecision(4) << caminho3 << endl;

    return 0;
}



