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
int n,c=0,d=INT_MIN,e=INT_MAX,fl=1;


cin>>n;
string s;
cin>>s;
vector<int> ch;

vector<int> zh;


     for(int i=0;i<n;i++){
if(s[i]=='1'){

      ch.push_back(i);
}
  
     
    }
int m=ch.size();
for(int i=n-1;m>0  && i>=0;i--){
if(s[i]=='0'){
     zh.push_back(i);
}
m--;


}
sort(ch.begin(),ch.end());
m=zh.size();
for(int i=0;m>0 && i<n;i++){
     zh.push_back(ch[i]);
     m--;
}

sort(zh.begin(),zh.end());
if(zh.size()>0){
     cout<<1<<endl;
}
cout<<zh.size()<<" ";

for(int i=0;i<zh.size();i++){
cout<<zh[i]+1<<" ";
}

cout<<endl;


}



}