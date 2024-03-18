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
int n,c=0,d=INT_MIN,e=INT_MAX,fl=1;


cin>>n;
vector<int> v(n,0);
for(int i=0;i<n;i++){
cin>>v[i];
d=min(d,v[i]);
e=max(e,v[i]);
c=c|v[i];


}

cout<<c-(c^e)<<endl;

}



}