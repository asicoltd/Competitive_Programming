//https://codeforces.com/problemset/problem/1692/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for( int i = 0 ; i < n ; i++ ){
        char x[8][8];
        int y, z;
        for( int j = 0 ; j < 8 ; j++ ){
            for( int k = 0 ; k < 8 ; k++ ){
                cin >> x[j][k];
            }
        }
        int flag = 0;
        for( int j = 0 ; j < 8 ; j++ ){
                int hash = 0;
            for( int k = 0 ; k < 8 ; k++ ){
                if( x[j][k] == '#'){
                    y = j;
                    z = k;
                    hash++;
                }
            }
            if( hash == 2 )flag = 1;
            if( flag == 1 && hash == 1 ){
                    cout << y+1 << " " << z+1 << endl;
                    break;
            }
        }

    }
}
