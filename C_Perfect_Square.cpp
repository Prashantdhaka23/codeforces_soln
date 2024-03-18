




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
int n;
cin>>n;
vector<string> v;

for(int i=0;i<n;i++){
string s;
cin>>s;
v.push_back(s);
}
int ans=0;

for(int i=0;i<n/2;i++){
 
 for(int j=0;j<n/2;j++){
   
   vector<char> c;

   int a=i;
   int b=j;
   c.push_back(v[a][b]);
     a=n-a-1;
   c.push_back(v[b][a]);
     b=n-b-1;
   c.push_back(v[a][b]);
     a=i;
   c.push_back(v[b][a]);
   sort(all(c));
   
   for(int k=0;k<3;k++){
     ans+=abs(c[k]-c[3]);
   }


 }

}
cout<<ans<<endl;


}
return 0;
}

