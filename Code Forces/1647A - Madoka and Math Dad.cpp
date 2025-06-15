//https://codeforces.com/problemset/problem/1647/A
#include<iostream>
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        int key = 0, size = 1;
        for( int i = 0 ; i < x-1 ; i++ ){
            if( key == 0 ){
                key++;
            }
            else if( key == 1 ){
                size++;
                key++;
            }
            else if( key == 2 ){
                size++;
                key = 0;
            }
        }
        int flag = 1, sum = 1;
        if( x % 3 == 2 ){
                flag = 2;
                sum = 2;
        }
        int ans[size];
        ans[size - 1 ] = flag;
        for( int i = 0 ; i < size ; i++ ){
            if( ans[size-i-1] == 1 ){
                ans[size-i-2] = 2;
            }
            else ans[size-i-2] = 1;
        }
        for( int i = 0 ; i < size ; i++ )
        cout << ans[i];
        cout << endl;
    }
}
