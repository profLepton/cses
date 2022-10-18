#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    int m, curr;
    m =1;
    curr = 0;
    char d = 'A';
    for(auto c : input){
        if ( c == d ) {
            curr++;
            m = max(m, curr);
        }    
        else {
            d = c;
            curr = 1;
        }
    }
    cout << m;
    
    return 0;
}
