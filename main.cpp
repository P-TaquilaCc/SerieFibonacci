#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, x, y, z;

    x = 0;
    y = 1;

    printf("Digite el numero de elementos: ");
    scanf("%i", &num);

    printf("0, 1, ");

    num = num - 2;
    for(int i = 0; i < num; i++){
        z = x + y;
        x = y;
        y = z;

        printf("%i, ", z);
    }
    return 0;
}
