//https://codeforces.com/problemset/problem/1722/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for( int i = 0 ; i < n ; i++ )
    {
        int x, count = 0;
        cin >> x;
        string s1, s2;
        cin >> s1 >> s2;
        for( int j = 0 ; j < x ; j++ )
        {
            if( s1[j] == s2[j] || (s1[j] == 'G' && s2[j] == 'B') || (s1[j] == 'B' && s2[j] == 'G'))
            {
                count++;

            }
        }
        if( count != x )cout << "NO" << endl;
        else cout << "YES" << endl;
    }

}
