//https://codeforces.com/problemset/problem/510/A
#include <iostream>
using namespace std;
int main() {
	int n, m, flag = 1;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) {
		if( i % 2 == 0 ) {
			for(int j = 0 ; j < m ; j++) {
				cout << "#";
			}
			cout << endl;
		}
		else {
			if(flag == 1) {
				for(int j = 0 ; j < m-1 ; j++) {
					cout << ".";
				}
				cout <<"#" <<endl;
				flag = 0;
			}
			else {
					cout <<"#";
					for(int j = 0 ; j < m-1 ; j++) {
						cout << ".";
					}
					cout << endl;
					flag = 1;
			}
		}
	}

	return 0;
}
