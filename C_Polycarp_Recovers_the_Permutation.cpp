


#include<bits/stdc++.h>
 
 
using namespace std;
 
int main(){
int t=1;
 
cin>>t;
while(t--){
     long long n,k;
     cin>>n;
 
int  mi=INT_MIN;
vector<int> arr,ans;
    for(int i=0;i<n;i++){
        int k; cin>>k;
        arr.push_back(k);
        mi=max(mi,k);
 
    
    }
 
 
if(mi==arr[0] ||  mi==arr[n-1]){
if(arr[0]==mi){
for(int i=n-1;i>=0;i--){
     cout<<arr[i]<<" ";
}

}
else{
for(int i=n-2;i>=0;i--){
 
     cout<<arr[i]<<" ";
}
cout<<arr[n-1]<<" ";
 
 
 
 
}
 
}
 
 
 
else{
     cout<<-1<<" ";
}
 
 
cout<<endl;
 
 
}
 
}
 
