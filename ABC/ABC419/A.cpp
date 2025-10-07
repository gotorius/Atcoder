#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;
    if(s == "red") cout << "SSS" << endl;
    else if(s == "blue") cout << "FFF" << endl;
    else if(s == "green") cout << "MMM" << endl;
    else cout << "Unknown" << endl;
    return 0; 

}