#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int> & v1,pair<int,int> & v2){
     if(v1.first!=v2.first){
        return v1.first>v2.first;
     }else{
        return v1.second<v2.second;
     }
}
bool cmp2(pair<int,int> & v1,pair<int,int> & v2){
     if(v1.first!=v2.first){
        return v1.first<v2.first;
     }else{
        return v1.second<v2.second;
     }
}

int main() {
    int m, n, d;
    std::cin >> m >> n >> d;

    std::vector<int> maverickAvailability(m);
    std::vector<int> gooseAvailability(n);
    vector< pair<int,int> > v,v2;

    for (int i = 0; i < m; ++i) {
        std::cin >> maverickAvailability[i];
        v.push_back({maverickAvailability[i],i});

    }

    for (int i = 0; i < n; ++i) {
        std::cin >> gooseAvailability[i];
        v.push_back({gooseAvailability[i],i});

    }
    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<d;i++){
       v2.push_back({v[i].second,v[i].first});
    }
    sort(v2.begin(),v2.end(),cmp2);
     for(int i=0;i<d;i++){
    cout<<v2[i].second<<" ";
    }
    cout<<endl;




    

    return 0;
}
