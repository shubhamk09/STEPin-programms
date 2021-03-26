/**
 * @file complex.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __COMPLEX_H__
#define __COMPLEX_H__


#include<stdio.h>
#include<conio.h>


/**
 * @brief 
 * 
 */
typedef struct complex_t {

float real;

float imaginary;

} complex_t;

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t sum(complex_t num1, complex_t num2);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t diff(complex_t num1, complex_t num2);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t product(complex_t num1, complex_t num2);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t div(complex_t num1, complex_t num2);


#endif