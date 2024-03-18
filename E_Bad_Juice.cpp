class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        long long ans=nums[0];
        int cnt=1;
         priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<vector<int,int>> > pq;
        int p=0;
        for(int i=1;i<nums.size();i++){
               if(cnt==k){
                break;
            }
            if(i-p<=dist){
                pq.push({nums[i],i});
            }else{
                cnt++;
                ans+=pq.top().first;
                p=max(p,pq.top().second);
                pq.pop();
                
            }
          
        
        }
        
        while(cnt<k){
            cnt++;
               ans+=pq.top().first;
              pq.pop();
        }
        return ans;
    }
};