#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

bool f(int h, int m){
    int a = h/10;
    int b = h%10;
    int c = m/10;
    int d = m%10;
    if(a*10+c < 24 && b*10+d < 60) return true;
    else return false;    
}

int main() {
    int h, m;
    cin >> h >> m;

    if(f(h,m)){
        cout << h << ' ' << m;
        return 0;
    }else{
        while(!f(h,m)){
            if(m != 59) m++;
            else{
                if(h != 23){
                    h++;
                    m = 0;
                }else{
                    h = 0;
                    m = 0;
                }
            }
        }
    }
    cout << h << ' ' << m;
    return 0;
}
