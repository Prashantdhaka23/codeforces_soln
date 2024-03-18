




#include<bits/stdc++.h>
using namespace std;

#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long
#define umap                                unordered_map
#define uset                                unordered_set
#define lb                                  lower_bound
#define ub                                  upper_bound
#define fo(i,a,b)                           for(i=a;i<=b;i++)
#define all(v)                              (v).begin(),(v).end()
#define all1(v)                             (v).begin()+1,(v).end()
#define allr(v)                             (v).rbegin(),(v).rend()
#define allr1(v)                            (v).rbegin()+1,(v).rend()
#define sort0(v)                            sort(all(v))




int32_t main(){

int tc=1;
cin>>tc;
while(tc--){

int n,m;
cin>>n>>m;

string a,b;
cin>>a>>b;
int ans=0;
int ok=1;

while(ans<20){
if(a.find(b)!=string :: npos){
 cout<<ans<<endl;
ok=0 ;
break;
}
a+=a;
ans++;

if(a.size()>66*b.size()){
    break;
}

}
if(ok)
cout<<-1<<endl;

}
return 0;
}

