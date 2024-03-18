#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t=1;
// cin>>t;
while(t--){

int n;
cin>>n;
int arr[n];
fo(i,n)cin>>arr[i];
vector<int> even;
vector<int> odd;
for(int i=0;i<n;i++){
     if(arr[i]%2==0)
         even.push_back(arr[i]);
else{
odd.push_back(arr[i]);
          }
     }
     sort(even.begin(),even.end());
     sort(odd.begin(),odd.end());

     if(even.size()>=2 && odd.size()>=2){
          cout<<max(even[even.size()-1]+even[even.size()-2],odd[odd.size()-1]+odd[odd.size()-2]);
     }
else if(even.size()>=2 && odd.size()<2){
      cout<<even[even.size()-1]+even[even.size()-2];
}else if(even.size()<2 && odd.size()>=2){
     cout<<odd[odd.size()-1]+odd[odd.size()-2];
}else{
     cout<<-1<<endl;
}

}




}



