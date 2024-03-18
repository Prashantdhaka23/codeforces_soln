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
// int n,c=0,d=INT_MIN,e=INT_MAX,fl=1;



   long long x,y;
    cin>>x>>y;
long long  ans=0;
long long cnt=1;
while(x-1>0){
if(cnt<y){
x=x-cnt;
cnt=cnt*2LL;
ans++;

}else{
break;
}


}
ans+=ceil(double(x-1)/double(y));
    

cout<<ans<<endl;




}
 }