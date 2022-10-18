#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main(void) {
    ll n;
    cin >> n;
    ll ans = 0;
    ll mx = 0;
    ll k;
    while (n--) {
        cin >> k;
        ans += -k + max(mx, k);
        mx = max(mx, k);
    }
    cout << ans;
    return 0;
}