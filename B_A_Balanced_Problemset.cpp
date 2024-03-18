#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, remainder, quotient;
    cin >> x >> y;

    remainder = x % y;
    quotient = x / y;

    while(true){
        if(remainder % quotient == 0){
            cout << quotient << endl;
            return;
        }

        quotient -= 1;
        if(quotient <= 1){
            cout << 1 << endl;
            return;
        }
        remainder += y;
    }
}

int main(){
    int testCases = 1;
    cin >> testCases;
    while(testCases--){
        solve();
    }
    return 0;
}