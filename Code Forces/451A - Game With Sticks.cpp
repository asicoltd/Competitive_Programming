//https://codeforces.com/problemset/problem/451/A
#include<iostream>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  int x = min(m,n);
  if(x%2!=0){
    cout << "Akshat" <<endl;
  }
  else cout << "Malvika" << endl;
}