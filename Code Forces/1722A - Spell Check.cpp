//https://codeforces.com/problemset/problem/1722/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for( int i = 0 ; i < n ; i++)
    {
        int flag = 0, x;
        string s1;
        cin >> x >> s1;
        if( x == 5 ){
            string s3 = "Timur";
            int count = 0;
            for( int j = 0 ; j < 5 ; j++ ){
                for( int k = 0 ; k < 5 ; k++ ){
                    if( s1[j] == s3[k]){
                        s3[k] = '!';
                        count++;
                    }
                }
            }
            if( count != 5 )flag = 1;
        }
        else flag = 1;
        if( flag == 1)cout << "NO" << endl;
        else cout << "YES" << endl;
    }

}
