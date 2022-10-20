#include <iostream>
using namespace std;

#define ll long long

ll twoKnights(ll i);

int main(void) {
    ll n;
    cin >> n;
    for (ll i=1; i<=n;i++){
        cout << twoKnights(i) << "\n";
    }
    return 0;
}

ll twoKnights(ll i) {
    ll k1 = i*i;
    ll total = k1 * (k1-1)/2;
    ll attacks = 4*(i-1)*(i-2);
    return total-attacks;
}