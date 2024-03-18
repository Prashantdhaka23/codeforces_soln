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


cin>>n;
vector<long long> v(n,0);
priority_queue<long long, vector<long long>,greater<long long> > pq;
for(int i=0;i<n;i++){
     cin>>v[i];
    if(i!=0) pq.push(v[i]);
}
long long ans=v[0];
while(pq.size()>0){
long long k=pq.top();
if(k>ans){
     ans=(ans+k+1)/2;
}
pq.pop();


}

cout<<ans<<endl;

}



}