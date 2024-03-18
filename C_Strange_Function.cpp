#include <bits/stdc++.h>
using namespace std;

#define ll                                  long long
const ll mod = 1e6+7 ;
ll inv(ll i) {
	if(i==29)return 29;
	if (i == 1) return 1;
	 return (mod - ((mod / i) * inv(mod % i)) % mod)
	  % mod;}
 

int lis(vector<ll>& nums) {
        vector<ll> v;
        for(int i=0;i<nums.size();i++){
            if(v.size()==0 || v.back()<nums[i]){
                v.push_back(nums[i]);
            }
            else{
              int x=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
              v[x]=nums[i];
            }
        }
        return v.size();
}

int main() {
   
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int result = lis(arr);
    
    

    for(int i=1;i<=1e4;i++){
		cout<<inv(i)<<endl;
	}
   
    return 0;
}