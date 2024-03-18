




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


int a,b,c;
cin>>a>>b>>c;
 
int g=__gcd(a,b);
 g=__gcd(g,c);



int d=(a/g)+(b/g)+(c/g);

if(d<=6){
   cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



}
return 0;
}

