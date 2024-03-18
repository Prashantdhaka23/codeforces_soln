#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         int k;
         cin>>k;
         a[i]=k;  
     }
  long long int sum=0;
  for(int i=0;i<n-1;i++){
  if(a[i]>a[i+1]){
      sum=sum+(a[i]-a[i+1]);
      a[i+1]=a[i];
     }
   }
    cout<<sum<<endl;
    return 0; 
}