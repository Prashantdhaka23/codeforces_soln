





#include<bits/stdc++.h>
using namespace std;



 
       
 
#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long

ll pwrl(ll a, ll b) { ll res = 1; while (b > 0) {if (b & 1) res = res * a ; a = a * a ; b >>= 1;} return res;}

double dis(int x1, int y1, int x2, int y2) 
{ 
    // Calculating distance 
    return sqrtl(pwrl(x2 - x1, 2) + pwrl(y2 - y1, 2) * 1.0); 
} 


 








int32_t main(){

int t=1;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int c,d;
cin>>c>>d;
int e,f;
cin>>e>>f;



double d1=dis(a,b,c,d);
double d2=dis(0,0,c,d);
double d3=dis(a,b,e,f);
double d4=dis(e,f,0,0);
double d5=dis(e,f,c,d)/2.0;
double ans=max(d1,d2);
double c1=max(d3,d4);
if(c1<ans){
    ans=c1;
}
c1=max({d5,d1,d4});
if(c1<ans){
    ans=c1;
}
c1=max({d5,d2,d3});
if(c1<ans){
    ans=c1;
}
cout<<fixed<<setprecision(10);
cout<<ans<<endl;

}
return 0;
}

