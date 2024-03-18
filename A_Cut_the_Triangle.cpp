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
long long  n,c,d,e,fl=1;

long long  x1,x2,x3,x4,x5,x6;
cin>>x1>>x2>>x3>>x4>>x5>>x6;
set<long long> s;
set<long long> p;

s.insert(x1);
s.insert(x3);
s.insert(x5);
p.insert(x2);
p.insert(x4);
p.insert(x6);

if(s.size()>=3 || p.size()>=3)cout<<"YES"<<endl;
else cout<<"NO"<<endl;



}



}
