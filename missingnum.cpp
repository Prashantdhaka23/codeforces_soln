#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n-1];
     int  m=0;
     for(int i=0;i<n-1;i++){
          int k;
          cin>>k;
          a[i]=k;
          m=m^k;
     }
     int l=0;
     for(int i=1;i<=n;i++){
      l=l^i;
     }
   cout<<(m^l);
return 0;
}