#ifndef MY_MACROS_H
#define MY_MACROS_H

#define N -12

#define ABS(x) ((x < 0) ? -(x) : (x)) // макрос для знаходження абсолютного значення

#define SQR(x) ((x)*(x)) // макрос з параметром - квадрат числа
#define MAX(x, y, z) (((SQR((x) + (y))) > (SQR((x) + (z)))) ? (SQR((x) + (y))) : (SQR((x) + (z))))
//#define MAX(x, y, z) ((SQR((x) + (y))),(SQR((x) + (z))))
#define MIN(x, y, z) (((SQR(x)) < (5 * ABS((y) - (z)))) ? (SQR(x)) : (5 * ABS((y) - (z))))
//#define MIN(x, y, z) ((SQR(x)),(5 * ABS(y - z)))

#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)

#define PRINTR(w) puts("Result:"); \
                       printf(#w"=%f\n", (float)w)

#define POWER(x, n) pow(x, n) // макрос для обчислення ступеня

#define ROOT(x) sqrt(x) // макрос для знаходження квадратного кореня

#endif // MY_MACROS_H
#pragma once
