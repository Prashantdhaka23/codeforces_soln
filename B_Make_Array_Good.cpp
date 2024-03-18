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
long long  n,c=0,d=INT_MAX,e=0,f=INT_MAX;

cin>>n;
long long arr[n];
vector<pair<long long ,long long > > v;
for(int i=0;i<n;i++){
     cin>>arr[i];
     pair<long long ,long long > p;
     p=make_pair(arr[i],i);
     v.push_back(p);
}
sort(v.begin(),v.end());
cout<<n<<endl;
cout<<v[0].second+1<<" "<<0<<endl;
for(int i=1;i<v.size();i++){
long long k=v[i].first%v[i-1].first;
k=v[i-1].first-k;
cout<<v[i].second+1<<" "<<k<<endl;
v[i].first+=k;

}




}



}