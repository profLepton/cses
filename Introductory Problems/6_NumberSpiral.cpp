#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

ll get_grid_value(ll x, ll y);

int main(void) {
    ll n;
    cin >> n;

    ll x, y;

    while(n--) {
        cin >> x >> y;
        cout << get_grid_value(x, y) << "\n";
    }
       
    

    return 0;
}

ll get_grid_value(ll x, ll y) {
    ll mx = max(x, y);
    ll mx2 = mx * mx;
    if (mx%2) {
        
        return mx2 - abs(x - 1) - abs(mx - y);
    }
    else {
        return mx2 - abs(mx - x) - abs(y -1);
    }
}

