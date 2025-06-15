// https://codeforces.com/contest/1167/problem/A
#include <stdio.h>
#include <math.h>
int main() {

    int n;
    scanf("%d", &n);
    for( int i = 0 ; i < n ; i++ ) {
        int m;
        char s[100];
        scanf("%d ",&m);
        gets(s);
        int flag = 0;
        if(m >= 11) {
            for( int j = 0 ; j < m-10 ; j++ ) {
                if( s[j] == '8' ) {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
            }
        }
        if( m < 11 || flag == 0) printf("NO\n");

    }

return 0;
}
