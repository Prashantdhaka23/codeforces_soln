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

vector<long long > v(n,0);
for(int i=0;i<n;i++){
cin>>v[i];

}
sort(v.begin(),v.end());
int i=0;
while(v[i]==v[i+1]){
     i++;
}


for(int j=i+1;j<i+1+(n/2);j++){
cout<<v[0]<<" "<<v[i]<<endl;;

}









}



}