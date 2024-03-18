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
long long t;
cin>>t;
while(t--){
long long m,k, n,c,e,fl=1;
long long d=INT_MIN;

cin>>n>>m>>k;

for(int i=0;i<m;i++)
{cin>>c;
d=max(d,c);
}

  if(((n)/k) < d)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}



}