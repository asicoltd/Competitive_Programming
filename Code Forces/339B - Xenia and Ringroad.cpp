//https://codeforces.com/problemset/problem/339/B
#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int x[n];
    long long int sum = 0;
    for( int i = 0 ; i < n ; i++ ){
        cin >> x[i];
        sum = x[0]-1;
    }
    for( int i = 0 ; i < n-1 ; i++ ){
        if( x[i] <= x[i+1] ){
            sum += x[i+1]-x[i];
        }
        else{
            sum += m-x[i]+x[i+1];
        }
    }
    cout << sum << endl;
}

