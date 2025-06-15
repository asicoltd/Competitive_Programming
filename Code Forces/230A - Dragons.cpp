//https://codeforces.com/problemset/problem/230/A
#include<iostream>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  int x[m][2];
  for(int i = 0; i < m ; i++){
    cin >> x[i][0]>>x[i][1];
  }
  int temp,temp1;
  for( int i = 0 ; i < m ; i++ ){
    for( int j = i+1 ; j < m ; j++ ){
      if( x[i][0] > x[j][0] ){
        temp = x[i][0];
        x[i][0]=x[j][0];
        x[j][0]=temp;
        temp1 = x[i][1];
        x[i][1]=x[j][1];
        x[j][1]=temp1;
      }
  }
  }
  temp =0;
  for(int i =0 ; i < m ;i++){
    if(x[i][0] < n){
      n+=x[i][1];
    }
    else{
      cout<< "NO";
      temp = 1;
      break;
    }
  }
  if(temp==0)cout<< "YES";
  }