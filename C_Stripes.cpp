#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d,e,fl=0;
char arr[8][8];
for(int i=0;i<8;i++){
     
d=0;
     for(int j=0;j<8;j++){
          cin>>arr[i][j];
          if(arr[i][j]=='R')d++;

     }
     if(d==8) fl=1;
   

}
for(int j=0;j<8;j++){
d=0;
for(int i=0;i<8;i++){

     if(arr[i][j]=='B')d++;
}
if(d==8){fl=2;
break;}
}

if(fl==1)cout<<"R"<<endl;
if(fl==2)cout<<"B"<<endl;




}



}