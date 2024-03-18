#include<bits/stdc++.h>
using namespace std;



void solve(){
    int x=0,y=0;
    vector<int> ar;

 

    int n;
    cin >> n;
    cout.flush();

    if(n == 2){
        cout << "!" << " " << 0 << " " << 1 << endl;
        
        return;
    }
    string t;

    for(int i = 1; i < n; i++){
        cout << "?" << " " << x << " " << x << " " << i << " " << i << endl;
        cout.flush();
        cin >> t;
        if(t == "<"){
            x = i;
        }
        cout.flush();
    }

    y = x;
    vector<int> v;
    v.push_back(x);

    for(int i = 0; i < n; i++){
        cout << "?" << " " << x << " " << y << " " << x << " " << i << endl;
        cout<<endl;
        cin >> t;
        if(t == "<" ){
            y = i;
            v.clear();
            v.push_back(i);
        }
        else if(t == "="){
            v.push_back(i);
        }
        cout<<endl;
    }

    y = v[0];

    for(int i = 1; i < v.size(); i++){
        cout << "?" << " " << y << " " << y << " " << v[i] << " " << v[i] << endl;
        cout<<endl;
        cin >> t;
        if(t == ">"){
            y = v[i];
        }

        cout<<endl;
    }

    cout << "!" << " " << x << " " << y << endl;


 cout<<endl;
}

int main(){

    int t = 1;
    cin >> t;

    while(t--){

        solve();

    }
    return 0;
}