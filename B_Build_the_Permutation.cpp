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

int a,b;
cin>>n>>a>>b;

vector<long long > v(n,0);
for(int i=0;i<n;i++){
v[i]=i+1;
}
int k=min(a,b);
int h=0,l=0;

for(int i=0;i<k+1;i+=2){

swap(v[i],v[i+1]);

}


 l=a-b+1;f

for(int i=n-1;i>l;i--){

if( i>=k+1 && (i+1)%3==0 && l){
swap(v[i+1],v[i]);
l--;

}





f



 h=b-a;

for(int i=n-1;i>h;i--){

if( i>=k+1 && (i+1)%3==0 && h){
swap(v[i],v[i-1]);
h--;

}



}



if(l || h)cout<<-1<<endl;
else{
for(int i=0;i<n;i++){

     cout<<v[i]<<" ";
}

cout<<endl;
}





}












}



}