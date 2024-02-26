//
// Created by joedu on 25/2/2024.
//


// CPP Program to demonstrate Boost Multiprecision float

#include <boost/multiprecision/cpp_dec_float.hpp>
#include "fun_tras.h"

cpp_dec_float_50 fun_tras::eps = 2.2204 * 0.0000000000000001;
cpp_dec_float_50 fun_tras::tolerancia = 10*0.00000001;
int fun_tras::max_interacion = 2500;
cpp_int fun_tras::fact_20;
cpp_int fun_tras::fact_40;
cpp_int fun_tras::fact_60;
cpp_int fun_tras::fact_80;
cpp_int fun_tras::fact_100;

fun_tras::fun_tras() { //constructor
    fact_20 = fact_t(20);
    fact_40 = fact_t(40);
    fact_60 = fact_t(60);
    fact_80 = fact_t(80);
    fact_100 = fact_t(100);
}

fun_tras::~fun_tras() { //destrcutor
}



cpp_int fun_tras::fact_t(int a) {
    cpp_int fact = 1;
    for (int i = a; i > 1; --i)
        fact *= i;
    return fact;
}

cpp_dec_float_50 fun_tras::divi_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 x0=0;
    int a_entero = static_cast<int>(a);

    // PENDIENTE DE ANALIZAR EL CASO DE LOS NEGATIVOS


    // se define los posibles valores de x0 segun el valor de a(la entrada)
    if(0 < a_entero <= fact_20){
        x0=pow(eps,2);
    }else if(a_entero <= fact_40){
        x0=pow(eps,4);
    }else if(a_entero <= fact_60){
        x0=pow(eps,8);
    }
    else if(a_entero <= fact_80){
        x0=pow(eps,11);
    }
    else if(a_entero <= fact_100){
        x0=pow(eps,15);
    }
    else{
        return 0;
    }

    cpp_dec_float_50 xk;
    cpp_dec_float_50 xk_anterior=x0;

    for(int i =1;i<max_interacion;i++){

      xk=xk_anterior*(2-a*xk_anterior);

      if(abs(xk-xk_anterior)<abs(tolerancia*xk_anterior)){
          break;
      }

      xk_anterior=xk;

    }
    return xk;
}









