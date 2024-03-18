
/*

****************************************************************************************
*                                Jai Bajrangbali                                       *
*                             codechef-prashantdhaka                                   *
*                             cf-dhakaprashant666                                      *
*                         email-:dhakaprashant666@gmail.com                            *
****************************************************************************************                                                                         



*/




#include<bits/stdc++.h>
using namespace std;


void fun(vector<int> & v){
     cout<<v.size()<<endl;
     for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
     }
     cout<<endl;
}
void fun2(string & s,int ok ,string & t ,vector<int> & v){
    for(int i=0;i<s.size();i++){
        t+=s[i];
        if(i==ok){
        ok=-1;
        v.push_back(i+1);
        t+='0';
        t+='1';
    }
   }

   s=t;
}


int main(){

int t=1;
cin>>t;
while(t--){
int n;cin>>n;string s;cin>>s;
vector<int> v;
int f=1;
while(1){



   int i=0,j=s.size()-1;
   int ok=-5;
   while(i<=j){

    
    if(s[i]==s[j]){
        if(s[i]=='0')
           ok=j;
      else ok=i-1;
      break;
    }
    i++;j--;
   }
   if(ok==-5){
      fun(v);
     f=0 ;
     break;
   }

   string t="";
   if(ok==-1){
    t+="01";
    v.push_back(0);
   }

   fun2(s,ok,t,v);

if(v.size()>300){
    break;
}

}
if(f)
cout<<-1<<endl;



}
return 0;
}

