//https://codeforces.com/problemset/problem/1692/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for( int i = 0 ; i < n ; i++){
      int a, b, c, d, tot = 0;
      cin >> a >> b >> c >> d;
      if ( a < b ) tot++;
      if ( a < c ) tot++;
      if ( a < d ) tot++;
      cout << tot << endl;
    }
}
