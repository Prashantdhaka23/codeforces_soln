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
int n,c,d,e,fl=1;

cin>>n;

int a[n];
int b[n];
ll sum=0;
fo(i,n){
cin>>a[i];

if(i==0){
b[0]=a[0];
b[1]=a[0];}
else{
     b[i+1]=a[i];
}
}
for(int i=0;i<n;i++){
if(gcd(b[i],b[i+1])!=a[i]){
cout<<"NO"<<endl;
fl=0;
break;
}

}

if(fl)cout<<"YES"<<endl;



}



}