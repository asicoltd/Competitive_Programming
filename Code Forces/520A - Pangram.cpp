//https://codeforces.com/problemset/problem/520/A
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x[26];
    char y;
    for( int i = 0 ; i < 26 ; i++ )x[i] = 0;
    for( int i = 0 ; i < n ; i++ ){
        cin >> y;
        if( y < 97 ){
        x[ y - 65 ] = 1;
        }
        else{
        x[ y - 97 ] = 1;
        }
    }
    int flag = 0;
    for( int i = 0 ; i < 26 ; i++ ){
    if( x[i] == 0 ){
    cout << "NO" << endl;
    flag = 1;
    break;
    }
    }
    if( flag == 0)cout << "YES" << endl;
}
