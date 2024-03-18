#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)

 int main(){
long long n,k;
cin>>n>>k;

int m=log10(n)+1;

if(k>m){
     cout<<0<<endl;
}else{
ll t=n;
int l=k;
while(k--){

     if(t%10>=5){
      t=t/10;
      t++;}
      else{
          t=t/10;
      }



}
ll m=t*pow(10,l);
cout<<m<<endl;


}












}