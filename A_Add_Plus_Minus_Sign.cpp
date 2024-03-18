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
string s;
cin>>s;
int sum=s[0]-'0';
string ans;
for(int i=1;i<n;i++){
if(sum==0){ans+='+';
if(s[i]=='1')sum++;
}
else {ans+='-';
if(s[i]=='1')sum--;}



}


cout<<ans<<endl;


}



}