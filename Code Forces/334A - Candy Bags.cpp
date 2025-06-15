// /https://codeforces.com/problemset/problem/334/A
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x[n][n], y = 1;
    for( int i = 0 ; i < n ; i++ ) {
        if( i % 2 == 0 ) {
            for( int j = 0 ; j < n ; j++ ) {
                x[i][j] = y;
               // cout <<" "<<i<<" "<<j<<" "<< y << endl;
                y++;
            }
        } else {
            for( int j = n-1 ; j >= 0 ; j-- ) {
                x[i][j] = y;
               // cout <<" "<<i<<" "<<j<<" "<< y << endl;
                y++;
            }
        }

    }
    for( int i = 0 ; i < n ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
           cout << x[j][i] << " ";
        }
        cout << endl;
    }
}
