#include <stdio.h>

int main(){
    double a1,b1;
    scanf("%lf%lf",&a1,&b1);
    long a = a1*1000000, b = b1*1000000;
    if (a<b){long t = a; a=b;b=t;}

    while (b){
        long t = b;
        b = a%b; a = t;
    }
    printf("%.6lf\n", (double)a/1000000);
    return 0;
}