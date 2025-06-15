//https://codeforces.com/problemset/problem/96/A
#include <stdio.h>
#include <math.h>
int main() {
    char x[1000];
    gets(x);
    int count = 0, max = 0;
    for( int i = 0 ; i < strlen(x) ; i++ ){
        int x1 = 1, j = i+1;
            for( j = i+1 ; x[j] == x[i] ; j++ ){
                x1++;
            }
        i = j-1;
        if( max < x1 ){
            max = x1;
        }
        x1 = 0;
    }
    if( max >= 7 )printf("YES\n");
    else printf("NO\n");
    return 0;
}
