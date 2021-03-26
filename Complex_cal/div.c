#include "complex.h"

complex_t div(complex_t num1, complex_t num2){
    complex_t num3;
    if(num2.real==0 && num2.imaginary==0)
    {
        num3.real=0;
        num3.imaginary=0;
        return num3;
    }
    num3.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / ( num2.real * num2.real + num2.imaginary * num2.imaginary);
    num3.imaginary = (num1.imaginary* num2.real - num1.real * num2.imaginary) / (num2.real * num2.real + num2.imaginary * num2.imaginary);
    return num3;
}