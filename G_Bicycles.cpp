#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main()
{
   int t;
   cin>>t;
// t=1;
map<string , set<int>>mpp;
for(int i=1;i<= 5*1e5;i++){
   
    int x=i*i;
    string s1=to_string(x);
    sort(s1.begin(),s1.end());
    
    mpp[s1].insert(x);
    
}
map<int,set<int>>mp1;

for (auto it : mpp) {
    set<int> v1 = it.second;
    if (mp1[it.first.size()].size() < v1.size()) {
        mp1[it.first.size()] = v1;
    }
}
   while(t--){
    int n;
    cin>>n;
    int fl=0;
    for (auto it : mp1) {
        if (((n - (it.first)) % 2 == 0) && (it.second.size() >= n)) {
            set<int> st = it.second;

            int x1 = n;
            fl = 1;
            for (auto it1 : st) {
                if (x1 == 0) {
                    break;
                }
                string s1 = to_string(it1);
                int x = n - s1.size();
               
                x1--;
                while (x--) {
                    s1 += '0';
                }
                cout << s1 << endl;
            }
        }
        if (fl) {
            break;
        }
    }

   }
}