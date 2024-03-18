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

vector<long long > v(n,0);
for(int i=0;i<n;i++){
cin>>v[i];

}
sort(v.begin(),v.end());
long long  ans=v[0];
long long  sum=v[0];
for(int i=1;i<n;i++){
     v[i]=v[i]-sum;
     ans=max(ans,v[i]);
     sum+=v[i];


}


cout<<ans<<endl;









}



}