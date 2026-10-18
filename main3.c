#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t i = 0;
    uint64_t p = 1;
    int tmp=0;
    scanf("%d", &tmp);
    if (tmp<0){
        printf("Некорректный ввод\n");
        return 1;
    }
    if (tmp>64){
        printf("Код выведет только первые 64 элемента последоавтельности\n");tmp=64;
    }

    while (i<tmp){
        printf("%lu ", p);
        p = p<<1;
        i++;
    }
    printf("\n");
    return 0;
}

//разница: b = ++n (b = n+1, n = n+1); b = n++ (b = n, n = n+1)
