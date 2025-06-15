//https://codeforces.com/problemset/problem/25/A
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x[n], y, flag = 0, flag1 = 0;
    for( int i = 0 ; i < n ; i++ ) {
        cin >> x[i];
        if( x[i] % 2 == 0 ) {
            flag++;
        } else {
            flag1++;
        }
    }
    if( flag > flag1 ) {
        for( int i = 0 ; i < n ; i++ ) {
            if( x[i] % 2 != 0 ) {
                y = i+1;
            }
        }
    } else {
        for( int i = 0 ; i < n ; i++ ) {
            if( x[i] % 2 == 0 ) {
                y = i+1;
            }
        }
    }
    cout << y;
}
