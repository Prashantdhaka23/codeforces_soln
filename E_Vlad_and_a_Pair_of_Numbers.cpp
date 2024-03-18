#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"Yes"<<endl;
# define pn cout<<"No"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }




    

 int main(){

ll t;
cin>>t;
while(t--){
int k;
cin>>k;

if(k%2!=0)cout<<-1<<endl;
else{
     vector<int> v(32,0);
     int a=0;
     int b=0;
     int j=0;
     while(k){

      if(k%2==0){
          

      }
      else{
       a+=pow(2,j-1);
       a+=pow(2,j);
       b+=pow(2,j-1);



      }

      
          k=k/2;

j++;
     }
     
    if((a^b)!=(a+b)/2)cout<<-1<<endl;
    else{
     cout<<a<<" "<<b<<endl;
    }
}




}
return 0;

}





     









