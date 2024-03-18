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

string s;
// cin>>n;
// vector<int> v(n,0);
cin>>s;
cout<<s[0]-'0'+s[2]-'0'<<endl;




}



}