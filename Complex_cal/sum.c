#include "complex.h"

complex_t sum(complex_t num1, complex_t num2){

    complex_t num3;

    num3.real=num1.real+num2.real;
    num3.imaginary=num1.imaginary+num2.imaginary;
    return num3;
    
} 