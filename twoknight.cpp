#include<iostream>
using namespace std;
int main(){
  long long int n;
  cin>>n;
 for(long long int i=1;i<=n;i++){
 long long t=(i*i)*(i*i-1)/2;
 long long m=4*(i-1)*(i-2);
        cout<<t-m<<endl;
   }
}