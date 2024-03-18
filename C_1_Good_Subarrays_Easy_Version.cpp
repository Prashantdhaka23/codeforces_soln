#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)

long long fact(int n)    
 {  long long sum=0;
 for(int i=n;i>0;i--){
 sum+=i;

 }
    return sum;
    }  


 int main(){
int t;
cin>>t;
while(t--){
int n,b,c,d,e,fl=1;
cin>>n;

int a[n];
ll sum=0;
fo(i,n){
cin>>a[i];

}
vector<int> v;
int count =1;
for(int i=0;i<n;i++){
if(a[i]<count) {
v.push_back(count-1);
count=1;

}
if(i==n-1){
v.push_back(count);

count=1;

     
}
     count++;


}


for(int i=0;i<v.size();i++){
sum+=fact(v[i]);

}

cout<<sum<<endl;
}



}