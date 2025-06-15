//https://codeforces.com/problemset/problem/1651/A
#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    unsigned long long int x;
    for( int i = 0 ; i < n ; i++ ) {
        cin >> x;
        cout  << fixed << setprecision(0)  << pow(2,x)-1 << endl;
    }
}
