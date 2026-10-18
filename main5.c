#include <stdio.h>

double hr_to_min(double hr){
    const float k = 60;
    return k*hr;
}

int main(){
    double a=0;
    while(scanf("%lf", &a) == 1){
        printf("%.2lf\n", hr_to_min(a));
    }    

    return 0;
}
//double чтобы было меньше ошибок округления