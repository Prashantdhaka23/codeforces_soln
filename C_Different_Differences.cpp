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
long long  n,k,c,d,e,fl=1;


// cin>>n;
// vector<int> v(n,0);
cin>>k>>n;
c=n-k;
int j=1;
int m=1;
for(int i=0;i<k;i++){
     cout<<j<<" ";
     if(c>=m){

m++;
c=c-m+1;
     }
     else{
       m=1;   
     }
     j+=m;


}

cout<<endl;



}



}