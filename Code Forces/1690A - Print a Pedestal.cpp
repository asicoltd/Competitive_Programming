//https://codeforces.com/problemset/problem/1690/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c;
    cin >> n;
    for( int i = 0 ; i < n ; i++ ){
        int x;
        cin >> x;
        int d = x/3;
        int e = x%3;
        if( e == 2){
            a = d + 2;
            b = d + 1;
            c = d - 1;
        }
        else if( e == 1 ){
            a = d + 2;
            b = d;
            c = d - 1;
        }
        else{
            a = d + 1;
            b = d;
            c = d - 1;
        }
        cout << b <<" "<< a <<" "<< c << endl;
    }
}
