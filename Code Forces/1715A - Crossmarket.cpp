//https://codeforces.com/problemset/problem/1715/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for( int i = 0 ; i < n ; i++ ){
        int n, m, sum  = 0;
        cin >> n >> m;
        if( n > m ){
            sum = 2*(m-1);
            sum += n-1;
        }
        else{
            sum = 2*(n-1);
            sum += m-1;
        }
        if( m > 1 || n > 1)sum++;
        cout << sum << endl;
    }

}
