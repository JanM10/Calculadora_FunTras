//
// Created by joedu on 25/2/2024.
//


#include "fun_tras.h"
#include <boost/math/special_functions/factorials.hpp>

int main(){

    fun_tras funTras;
    cpp_dec_float_50 pi=funTras.get_pi();
    //std::cout<<funTras.fact_t(20)<<std::endl;
    std::cout<<setprecision(numeric_limits<cpp_dec_float_50>::digits10)
           << funTras.cos_t(pi/6)<<std::endl;
}
