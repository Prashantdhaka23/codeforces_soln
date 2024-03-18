#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int c,d,e,fl=1;
string a,b;
cin>>a>>b;
c=a.size()-1;
d=b.size()-1;

map<char,int> mp;
mp['S']=0;
mp['M']=1;
mp['L']=2;




if(mp[a[c]]<mp[b[d]]  ){
cout<<"<"<<endl;

}else if(mp[a[c]]==mp[b[d]] ){
if(c<d){
if(mp[a[c]]!=0)
     cout<<"<"<<endl;
     else  cout<<">"<<endl;
}else if(c>d){
if(mp[a[c]]!=0)
     cout<<">"<<endl;
     else cout<<"<"<<endl;
}else{
     cout<<"="<<endl;
}

}else{
     cout<<">"<<endl;
}






}



}