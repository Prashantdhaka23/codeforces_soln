#include<bits/stdc++.h>
using namespace std;

void solve(){
    int minSize = 0, alphabetSize = 0, stringSize = 0, count = 0, result = 0;
    cin >> minSize >> alphabetSize >> stringSize;
    string inputString;
    cin >> inputString;
    map<char,int> charCount;
    string tempString = "";
    for(int i = 0; i < stringSize; i++){
        charCount[inputString[i]]++;
        if(charCount.size() == alphabetSize){
            result++;


            
            tempString += inputString[i];
            charCount.clear();
        }
    }

    if(result < minSize){
        cout << "NO" << endl;
        char missingChar = 'a';
        for(int i = 'a'; i <= 'z'; i++){
            if(charCount.find(i) == charCount.end()){
                missingChar = i;
                break;
            }
        }
        for(int i = 0; i < minSize; i++){
            if(i < tempString.size())  
                cout << tempString[i];
            else 
                cout << missingChar;
        }
        cout << endl;
    }
    else{
        cout << "YES" << endl;
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