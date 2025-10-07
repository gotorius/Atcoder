#include <iostream>
#include <numeric>
using namespace std;
typedef long long ll;
 
int main() {
	ll k;
	cin >> k;
	for (ll i = 1; i <= 2000000; i++) {
		k /= gcd(k, i);
		if (k == 1) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << k << '\n';
}
