#include <stdio.h>
int main(){
int X[6];
/* n is an array of 6 integers */
int i, j;
/* initialize elements of array n to 0 */
for(i = 0; i < 6; i++){
X[i] = i + 100;
}
/* output each array element's value */
for(j = 0; j < 6; j++){
printf("X[%d] = %d\n", j, X[j]);
}
return 0;
}
