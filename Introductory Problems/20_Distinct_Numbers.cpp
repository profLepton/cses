#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long 

int main() {
    ll n;
    cin >> n;
    ll c;
    vector<int> arr ;
    for(int i=0; i<n;i++){
        cin >> c;
        if (find(arr.begin(), arr.end(), c) == arr.end()) {
            arr.push_back(c);
        }
        
    }

    cout << arr.size() ;
}

//Write a function to return the number of distinct elements in a set.

