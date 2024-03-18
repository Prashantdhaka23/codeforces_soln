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
long long  n,c=0,d=INT_MAX,e=0,f=INT_MAX;

cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
     cin>>arr[i];
     c+=arr[i];
     if(arr[i]%2!=0){
     int k=arr[i];
     long long g=0;
     while(k%2!=0){
          g++;
          k=k/2;
     }
     if(g!=0)
     d=min(d,g);


     }
     else{
          int k=arr[i];
          long long g=0;
e=0;
          while( k%2==0){
           e++;
           k=k/2;
           }
     if(e!=0)
          d=min(d,e);
     }
}
if(c%2==0)cout<<0<<endl;
else{
     

cout<<d<<endl;





}

}



}