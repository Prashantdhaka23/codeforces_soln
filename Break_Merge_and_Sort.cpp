
/*

****************************************************************************************
*                                Jai Bajrangbali                                       *
*                             codechef-prashantdhaka                                   *
*                             cf-dhakaprashant666                                      *
*                         email-:dhakaprashant666@gmail.com                            *
****************************************************************************************                                                                         



*/




#include<bits/stdc++.h>
using namespace std;

void solve(int n,vector<int>&v,int x){

    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
        vec.push_back({v[i],i});
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    int j=0;
    set<int> st;
    vector<int> ans(n,-1);
    st.insert(n+1);
    st.insert(n+2);

    for(int i=0;i<vec.size();i++){
        while(vec[i].first+x<=vec[j].first){
            st.insert(vec[j].second);
            j++;
        }
        
        auto it =st.upper_bound(vec[i].second);
        auto it2=st.upper_bound(*it);
        
        if(*it2<n && *it2>=0){
            ans[vec[i].second]=v[*it2];
        }else{
            ans[vec[i].second]=-1;

        }

    }
    for(int i=0;i<n;i++){

        cout<<ans[i]<<" ";
    }
    cout<<endl;


}

int32_t main(){

 int n;
 cin>>n;
  int x;
 cin>>x;
 vector<int> v(n,0);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }  

 solve(n,v,x); 

return 0;

}

