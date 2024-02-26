//
// Created by joedu on 25/2/2024.
//


// CPP Program to demonstrate Boost Multiprecision float

#include <boost/multiprecision/cpp_dec_float.hpp>
#include "fun_tras.h"


fun_tras::fun_tras() {
}

fun_tras::~fun_tras() {
}



cpp_int fun_tras::fact_t(int a) {
    cpp_int fact = 1;
    for (int i = a; i > 1; --i)
        fact *= i;
    return fact;
}

cpp_dec_float_50 fun_tras::divi_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 x0=0;
    if (1<= a <= fact_t(20)){

    }




}

void fun_tras::fact_list() {
    fact_20= fact_t(20);

}







