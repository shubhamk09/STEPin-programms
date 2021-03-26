#include "complex.h"

int main(){
    complex_t num1, num2, num3;
    num1.real=4;
    num1.imaginary=-1;

    num2.real=6;
    num2.imaginary=-2;

    num3=sum(num1, num2);
    printf("sum is: %f %f \n", num3.real, num3.imaginary);

    num3=diff(num1, num2);
    printf("difference is: %f %f \n", num3.real, num3.imaginary);

    num3=product(num1, num2);
    printf("product is: %f %f \n", num3.real, num3.imaginary);

    num3=div(num1, num2);
    printf("Division is: %f %f \n", num3.real, num3.imaginary);

    return 0;

}