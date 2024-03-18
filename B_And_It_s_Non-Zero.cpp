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
vector<int> v(1e5,0);
vector<int> arr(32,0);
void ok(){
for(int i=1;i<=1e5;i++){
int k=i;
int j=0;
while(k>0){
if(k&1){
     arr[j]++;
}
k=k>>1;
j++;
}
v[i]=*max_element(arr.begin(),arr.end());

}

}






 int main(){
int t;
cin>>t;
while(t--){
// int n,c=0,d=INT_MIN,e=INT_MAX,fl=1;
ok();
int l,r;
cin>>l>>r;
cout<<v[r]-v[l-1]<<endl;










}



}