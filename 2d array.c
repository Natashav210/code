#include <stdio.h>
int main(){
    /* an array with 5 rows and 2 columns*/
int X[5][2] = { {6,4}, {8,9}, {2,4}, {3,6},{4,8}};
int i, j;

for ( i = 0; i < 5; i++ ) {
for ( j = 0; j < 2; j++ ) {
printf("X[%d][%d] = %d\n", i,j, X[i][j] );
}
}
return 0;
}