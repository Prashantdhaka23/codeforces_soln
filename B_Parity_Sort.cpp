#include <bits/stdc++.h>
#include <vector>

using namespace std;

string can_sort_array(vector<int>& arr) {
    int odd_count = 0;
    int even_count = 0;
    vector<int> v1,v2;

    for (int num : arr) {
        if (num % 2 == 0)
            v1.push_back(num);
        else
            v2.push_back(num);
           
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

   int i=0,j=0;
   int x=0;
    for (int num : arr) {
        if (num % 2 == 0){
             arr[x]=v1[i],i++;
        }
        else{
             arr[x]=v2[j],j++;
        }
        x++;
          
    }

    for(int i=1;i<arr.size();i++){
if(arr[i]<arr[i-1])return "NO";

    }


    return  "YES" ;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string result = can_sort_array(arr);
        cout << result << endl;
    }

    return 0;
}
