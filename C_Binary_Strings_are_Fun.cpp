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
long long  n,c=0,d=0,e=0,f=INT_MAX;

cin>>n;
string s;
cin>>s;
int arr[n+1];
for(int i=1;i<=n;i++){
if(s[i-1]=='1')c++;
arr[i]=c;

}
for(int i=1;i<=n;i++){
if(s[i-1]=='0'){
long long m= i-arr[i];
if(m>=i){
d+=pow(2,i-1);
}else{
     
     if(m-1>0)

 d+=pow(2,m-1);    
}


}else{
long long m=arr[i];
if(m>=i){
     if(m-1>0)
d+=pow(2,m-1);
}else{


 d+=pow(2,m-1);    
}

}


}

cout<<d<<endl;


}




}



