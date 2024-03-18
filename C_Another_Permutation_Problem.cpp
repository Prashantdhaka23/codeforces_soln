#include <bits/stdc++.h>
using nampesapce std;
#include <string>
#include <vector>
#include <algorithm>

int minOperationsToEqualStrings(const std::string& a, const std::string& b) {
    int m = a.length();
    int n = b.length();
    std::vector<std::vector<int>> dp(m, std::vector<int>(n, 0));
int j=0;
int cnt=0;
    for (int i = 0; i < m && j<n; ++i) {
        if(j<n && a[i]==b[j]){
            j++;
        }else{
            cnt++;
        }
    }

    return n-j+cnt;
}

int main() {

    int j=2;
    string b;
    cin>>b;
    int ans=1e9;

    while(j<=1e5+5){
    std::string a="";
     a+=to_string(j);



    int result = minOperationsToEqualStrings(a, b);
ans=min(ans,result);
    j=j*2;

    }
   cout<<ans<<endl;

    return 0;
}
