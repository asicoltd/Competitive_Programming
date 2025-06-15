https://codeforces.com/problemset/problem/996/A
#include<iostream>
using namespace std;
int main() {
    int n, cash = 0;
    cin >> n;
    if( n >= 100 ){
    cash = n/100;
    n%=100;
    }

    if( n >= 20 ){
    cash += n/20;
    n%=20;
    }
    if( n >= 10 ){
    cash += n/10;
    n%=10;
    }
    if( n >= 5 ){
    cash += n/5;
    n%=5;
    }
    if( n >= 1 ){
    cash += n/1;
    n%=1;
    }
    cout << cash;
}
