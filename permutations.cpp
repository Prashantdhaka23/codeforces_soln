#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
if(n>3){
int t=2;
while(t<=n){
     cout<<t<<" ";
     t+=2;
    }
t=1;
while(t<=n){
     cout<<t<<" ";
     t+=2;
    }
}
else if(n==1){
     cout<<1;
}
else{
     cout<<"NO SOLUTION";
}
}