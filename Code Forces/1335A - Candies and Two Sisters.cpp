//https://codeforces.com/problemset/problem/1335/A
#include<iostream>
using namespace std;
int main() {
    int n, y;
    cin >> n;
    for( int i = 0 ; i < n ; i++ ){
    cin >> y;
    if( y % 2 == 0 ){
    y/= 2;
    cout << y-1 << endl;
    }
    else{
    y/= 2;
    cout << y << endl;
    }
    }
}
