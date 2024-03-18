#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, W, k,K;
    cin >> H >> W >> k;
K=k;
    vector<string> S(H);
    for(int i = 0; i < H; i++)
        cin >> S[i];


  
int x=-2;

int ans=INF;
    for(int i = 0; i < H; i++) {
        vector<int> cnt(W+2, 0);
        x=-2;
        for(int j = 0; j < W; j++) {


            if(S[i][j] == 'o') {

            }else if(S[i][j] == 'x') {
                    x=max(x,j+1);        
            }else {
                cnt[j+1]+=1;
            }
            cnt[j+1] += cnt[j];
            if(j>=k-1) {
              if(x<=(j-k+1)) ans=min(ans,cnt[j+1]-cnt[j-K+1]);
            }  
    }
    }

     for(int j = 0; j < W; j++) {
        vector<int> cnt(H+2, 0);
        x=-2;
        for(int i = 0; i < H; i++) {


            if(S[i][j] == 'o') {

            }else if(S[i][j] == 'x') {
                    x=max(x,i+1);        
            }else {
                cnt[i+1]+=1;
            }
            cnt[i+1] += cnt[i];
            if(i>=k-1) {
              if(x<=(i-k+1)) ans=min(ans,cnt[i+1]-cnt[i-K+1]);
            }  
    }
    }

    


    if(ans == INF)
        cout << -1 << "\n";
    else
        cout << ans << "\n";

    return 0;
}