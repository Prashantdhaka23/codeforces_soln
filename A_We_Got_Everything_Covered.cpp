#include<bits/stdc++.h>
using namespace std;

void solve(){
    int repeatTimes = 0, alphabetSize = 0;
    cin >> repeatTimes >> alphabetSize;

    string result = "";

    for(int i = 0; i < repeatTimes; i++){
        for(int j = 0; j < alphabetSize; j++){
            char currentChar = 'a' + j;
            result += currentChar;
        }
    }
    cout << result << endl;
}

int main(){
    int testCases = 1;
    cin >> testCases;
    while(testCases--){
        solve();
    }
    return 0;
}