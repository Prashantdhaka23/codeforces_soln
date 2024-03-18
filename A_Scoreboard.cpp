#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sumTakahashi = 0, sumAoki = 0;
    for(int i = 0; i < N; i++) {
        int Xi, Yi;
        cin >> Xi >> Yi;
        sumTakahashi += Xi;
        sumAoki += Yi;
    }
    if(sumTakahashi > sumAoki) {
        cout << "Takahashi";
    } else if(sumTakahashi < sumAoki) {
        cout << "Aoki";
    } else {
        cout << "Draw";
    }
    return 0;
}