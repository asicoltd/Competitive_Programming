//https://codeforces.com/problemset/problem/136/A
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x[n], y;
    for( int i = 0 ; i < n ; i++ ){
    cin >> y;
    x[y-1] = i+1;
    }
    for( int i = 0 ; i < n ; i++ ){
    cout << x[i] << " ";
    }
}
