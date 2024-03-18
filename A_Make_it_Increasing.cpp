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
int t=1;
// cin>>t;
while(t--){
long long n,c=0,d=INT_MIN,e=INT_MAX,fl=1;
 long long final=LLONG_MAX;
cin>>n;
long long arr[n];
for(long long i=0;i<n;i++){
     cin>>arr[i];
}
for(long long i=0;i<n;i++){
long long ans=0;

long long last=0;

for(long long  j=i-1;j>=0;j--){
     long long res=1;


     
res+=last/arr[j] ;
last=arr[j]*res;
ans+=res;

}
last=0;
for(int j=i+1;j<n;j++){
     long long res=1;

     
res+=last/arr[j] ;

     
last=arr[j]*res;
ans+=res;


     

}


final=min(ans,final);


}


cout<<final<<endl;






}



}