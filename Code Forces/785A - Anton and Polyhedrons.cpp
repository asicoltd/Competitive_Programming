//https://codeforces.com/problemset/problem/785/A
#include<iostream>
using namespace std;
int main() {
    int n, cash = 0;
    cin >> n;
    string s[n];
    for( int i = 0 ; i < n ; i++ ){
    cin >> s[i];
    if( s[i] == "Tetrahedron"){
    cash += 4;
    }
    else if( s[i] == "Cube"){
    cash += 6;
    }
    else if( s[i] == "Octahedron"){
    cash += 8;
    }
    else if( s[i] == "Dodecahedron"){
    cash += 12;
    }
    else if( s[i] == "Icosahedron"){
    cash += 20;
    }
    }
    cout << cash << endl;
}
