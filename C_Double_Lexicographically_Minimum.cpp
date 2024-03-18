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

ll t=1;
cin>>t;

while(t--){
string s;
cin>>s;
// map<char,int> mp;
string x="";
string y="";
vector<int> v(26,0);
int c=0;
int a=-1;
int b=-1;

for(int i=0;i<s.size();i++){
v[s[i]-'a']++;
}


for(int i=0;i<26;i++){
     int j=i;

while( j<26 && v[j]>1 ){

     x+=char('a'+j);
 y=char('a'+j)+y;
 v[j]-=2;
 

}

if(v[j]==1){
y=char('a'+j)+y;
v[j]=0;
break;

}




}




// cout<<a<<" "<<b<<endl;


string z="";
// cout<<x<<" "<<y<<" "<<endl;


for(int i=0;i<26;i++){
     int j=i;

while(  v[j]>0 ){
     z+=char('a'+j);
 
 v[j]--;
 

}

}

x+=(z);
x+=y;
sort(s.begin(),s.end());
reverse(s.begin(),s.end());
char l=s[s.size()-1];
s.pop_back();
s=l+s;
string p=s;
reverse(p.begin(),p.end());

s=max(s,p);

if(s>x){
     cout<<s<<endl;
}

else{
cout<<x<<endl;
}


}




return 0;
}







     










