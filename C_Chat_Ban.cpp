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
long long n,c=0,d=INT_MIN,e=INT_MAX,fl=1;


cin>>n>>c;

long long  low=1;
long long  high=2*n-1;
long long  temp=0;
long long mid;

while(high>low){
mid=(low+high)/2;

if(mid<=n){
temp=mid*(mid+1)/2;
}
else {

temp= n*(n+1)/2 +(n)*(n-1)/2 -((2LL*(n)-mid)*(2LL*(n)-mid-1))/2LL;

}

if(temp>=c){
     high=mid;
}else{
     low=mid+1;
}


}

cout<<high<<endl;








}



}
