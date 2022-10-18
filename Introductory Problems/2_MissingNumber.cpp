#include <iostream>
using namespace std;

#define ll long long

int main(void) {
    ll n;
    cin >> n;
    ll s = n * (n + 1) / 2;
    for(int i=0; i<n-1; i++){
        ll c;
        cin >> c;
        s -= c;
    }
    cout << s;
}