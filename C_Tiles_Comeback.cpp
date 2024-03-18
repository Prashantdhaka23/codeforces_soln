#include <iostream>
#include <vector>

using namespace std;

bool can_construct_path(vector<int>& colors, int n, int k, int p) {
    for (int i = 0; i + p <= n; i++) {
        bool valid_path = true;
        int color_at_n = colors[n - 1];

        for (int j = 0; j < p; j++) {
            if (colors[i + j] != color_at_n || (j % k == 0 && colors[i + j] != colors[i])) {
                valid_path = false;
                break;
            }
        }

        if (valid_path) {
            return true;
        }
    }

    return false;
}

string can_construct_path_of_length_k(vector<int>& colors, int n, int k) {
     int x=colors[0];
     int a=0,b=0;
     int a1=colors.size()+5,b1=-1;
     for(int i=0;i<colors.size();i++){
        if(x==colors[i]){
            a++;
            if(a==k){
                a1=i;
                break;
            }
        }
     }
     x=colors[colors.size()-1];
     for(int i=colors.size()-1;i>=0;i--){
        if(x==colors[i]){
            b++;
            if(b==k){
                b1=i;
                break;
            }
        }
     }

     if(b1>a1)return "YES";
     if(x==colors[0] && b1>=0)return "YES";

    return "NO";
}

int main() {

    int t;
    cin>>t;
    while(t--){
    int n, k;
    cin >> n >> k;

    vector<int> colors(n);
    for (int i = 0; i < n; i++) {
        cin >> colors[i];
    }

    string result = can_construct_path_of_length_k(colors, n, k);
    cout << result << endl;

    }

    return 0;
}
