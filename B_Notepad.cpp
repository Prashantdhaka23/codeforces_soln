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
map<string ,int> mp;
for(int i=0;i<n-1;i++){
string p="";
p+=s[i];
p+=s[i+1];
if(i>1 && s[i]== s[i-1] && s[i]==s[i+1] &&  s[i]!=s[i-2] || i==1 && s[i]== s[i-1] && s[i]==s[i+1]){

}


else{
     mp[p]++;
     if(mp[p]>1){
          fl=0;
          break;
     }
}


}

if(fl)cout<<"NO"<<endl;
else cout<<"YES"<<endl;


}



}