
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


#define prashant ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


       
 
#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long
void solve2(vector<int> & vec){
    int b=vec.size();
int l=vec[b-1];
 vec.pop_back();
reverse(vec.begin(),vec.end());
vec.push_back(l);
reverse(vec.begin(),vec.end());
}


void solve(){
    //check for testcase;
int a,b;
cin>>a>>b;


vector<int> vec;
vector<vector<int> > m;

for(int i=0;i<b;i++){
vec.push_back(i);
}
int ans=1;

for(int i=0;i<a;i++){

  m.push_back(vec);

if(i<b-1){
    if(i<b-2){

        solve2(vec);

    }
 ans++;
}
}
if(b==1){
    cout<<0<<endl;
}
else{
cout<<ans<<endl;
}

for(int i=0;i<m.size();i++){

    for(int j=0;j<m[i].size();j++){
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
}















}

int32_t main(){
    prashant;
int t=1;
cin>>t;
while(t--){
solve();

}
return 0;
}
