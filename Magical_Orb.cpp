#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
long long  k=998244353;
long long  po(long long  a,long long  b){
    if(b==0)
    return 1ll;

   long long  p=po(a,b/2)%k;
    p=(p*p)%k;

    return b%2==0?p:(a*p)%k;
}

int main() {
	long long  n,m;
    cin>>n>>m;

    long long ans=0;
    while(m>0){

long long x=__builtin_popcount(m);

int y=po(2LL,x)-1;
ans+=po(y,n-1);

m--;


    }
    cout<<ans%998244353<<endl;

    return 0;
}