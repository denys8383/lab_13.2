#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h> 
#include "Macros.h" 
#include < conio.h >

void main()
{
    puts("Lab 13.2. Using macros and preprocessing directive");

    int x, y, z, XX; // Оголошення змінних x, y, z типу int.
    int max, min, xy, xz, yz; // Оголошення змінних для розрахунків типу int.
    char ch;

    do
    {
#if 1 <= N && N < 10 // Умовна компіляція: якщо умова істинна (1 <= N && N < 10), виконується ця частина коду.
        puts("Input 3 integer numbers");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        scanf("%d", &z);
        PRINTI(z);
        xy = SQR(x + y);
        PRINTI(xy);
        xz = SQR(x + z);
        PRINTI(xz);

        puts("Result:"); printf("MAX""=%f\n", (float)MAX(x, y, z));

#else 
        {
            puts("Input 3 integer numbers");
            scanf("%d", &x);
            PRINTI(x);
            scanf("%d", &y);
            PRINTI(y);
            scanf("%d", &z);
            PRINTI(z);
            XX = SQR(x);
            PRINTI(XX);
            yz = (5 * ABS(y - z));
            PRINTI(yz);

            puts("Result:"); printf("MIN"" = % f\n", (float)MIN(x, y, z));
        }
#endif // Завершення блоку умовної компіляції.

        puts("Repeat? y /n ");
        ch = _getch(); // Зчитування одного символу з консолі без виведення його на екран.
    } while (ch == 'y'); // Повторення циклу, якщо введений символ - 'y'.
}
