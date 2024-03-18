#include <bits/stdc++.h>
#include <string>

using namespace std;
    vector<long long> v;

char find_digit_at_position(long long k) {
    string sequence = "";
    long long c = 1;
    long long s=0;
    // Generate the sequence until its length is greater than or equal to k
    c=lower_bound(v.begin(),v.end(),k)-v.begin();
    
     int d=v[c]-k;
     c++;
    // cout<<d<<" "<<c<<endl;
      string p=to_string(c);

      int l=p.size();
     

      d=d%l;

    return p[l-d-1];
}

int main() {
    int t;
    cin >> t;

    long long c = 1;
    long long s=0;
    // Generate the sequence until its length is greater than or equal to k
    
    while (s < 1e15) {
        string p=to_string(c);
        int l=p.size();
        s+=c*l;
        v.push_back(s);
        if(s>=1e15)break;
        c++;
    }
    // Process each test case
    for (int i = 0; i < t; ++i) {
        long long k;
        cin >> k; // Position in the sequence
        cout << find_digit_at_position(k) << endl;
    }

    return 0;
}
