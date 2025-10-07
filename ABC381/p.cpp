#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int = 0; i < n; i++){
        
        cin >> a[i];
    
        if(a[i] % 400 == 0){
            cout << n << "is a leap year" << endl;
            return 0;
        }
        
        if(a[i] % 4 == 0){
            cout << n << "is a leap year" << endl;
            return 0;
        }
        
        if(a[i] % 100 != 0){
            cout << n << "is not a leap year" << endl;
            return 0;
        }
    }
    
}

/*西暦が4で割り切れる年は閏年。
ただし、100で割り切れる年は閏年ではない。
ただし、400で割り切れる年は閏年
