#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    vector<int> v;
    int a=0;

    while (cin >> a) {
      v.push_back(a);
    }
    int w;
    w=v.back();
    v.pop_back();
    vector<int> v1;
    for (int weight : v) {
        if (weight != 0) {
            v1.push_back(weight);
        }
    }
    sort(v1.begin(),v1.end());
    n=v1.size();
    int i=0; int j=n-1;
    int ans=0;
    while(i<=j){
      
      if(i==j){
      ans++;
      i++;
      j--;
      }else if(v1[i]+v1[j]<=w){
      ans++;
      i++;
      j--;
      }else{
        ans++;
        j--;
      }

    }
  


    cout<<ans;

}