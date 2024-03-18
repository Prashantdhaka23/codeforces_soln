#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}


 int main(){
int t;
cin>>t;
while(t--){
long long a,b ,n,c,d,e,fl=1;

// string s;
// cin>>n;
// vector<int> v(n,0);
cin>>a>>b>>c>>d;

int k=min(a,b);
int k2=min(c,d);
int k3=min(k,k2);
int x=max(a,b);
int x2=max(c,d);
int x3=max(x,x2);
if(k3==a && x3==d)cout<<"YES"<<endl;
else if(k3==b && x3==c)cout<<"YES"<<endl;
else if(k3==c && x3==b)cout<<"YES"<<endl;
else if(k3==d && x3==a)cout<<"YES"<<endl;
else cout<<"NO"<<endl;







}



}