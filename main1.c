#include <stdio.h>

int main(){
    const double k = 3.6;
    double x = 0;
    while (scanf("%lf", &x) == 1 && x > 0){
        double y = x*k;
        printf("%lf\n", x*k);
    }
    return 0;
}
//при целочисленном делении у нас два целочисленных типа и ответ целочисленный
//в нем не может быть дроби, не тот тип данных 