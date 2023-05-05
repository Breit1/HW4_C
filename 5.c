#include <stdio.h>

int main(){
	int x, cg = 0, a, b = 0;
    double sredar;
    scanf("%d", &x);
    while (x!=0){
    scanf("%d", &x);
    a = x;
    b = b + a;
    cg = cg + 1;
    }
    sredar = (double)b / (double)(cg-1);
    printf("%f", sredar);

}
