#include<bits/stdc++.h> 
using namespace std;
int GetNumber(long int Number)
{
    return --Number;
}
float GetNumber(int Number)
{
    return ++Number;
}
int main()
{
    int x = 21;
    int y = 30;
    cout<< GetNumber(x) << " ";
//     cout<< GetNumber(y) ;
    return 0; 
}