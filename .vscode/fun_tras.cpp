//
// Created by joedu on 25/2/2024.
//


// CPP Program to demonstrate Boost Multiprecision float


#include "fun_tras.h"

cpp_dec_float_50 fun_tras::eps = 2.2204 * 0.0000000000000001;
cpp_dec_float_50 fun_tras::tolerancia = 10*0.00000001;
cpp_dec_float_50 fun_tras::pi_t=3.14159265358979323846;
int fun_tras::max_interacion = 2500;
double fun_tras::fact_20;
double fun_tras::fact_40;
double fun_tras::fact_60;
double fun_tras::fact_80;
double fun_tras::fact_100;

fun_tras::fun_tras() { //constructor

    // aqui se calcularon los valores del factorial
    // de este modo no es necesarios calcularlos cada vez que se utiliza divi_t
    fact_20 = boost::math::factorial<double>(20);
    fact_40 = boost::math::factorial<double>(40);
    fact_60 = boost::math::factorial<double>(60);
    fact_80 = boost::math::factorial<double>(80);
    fact_100 = boost::math::factorial<double>(100);
}

fun_tras::~fun_tras() { //destrcutor
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

    for(int i =1;i<max_interacion;++i){

      xk=xk_anterior*(2-a*xk_anterior);

      if(abs(xk-xk_anterior)<abs(tolerancia*xk_anterior)){
          break;
      }

      xk_anterior=xk;

    }
    return xk;
}

cpp_dec_float_50 fun_tras::sin_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total=0;
    cpp_dec_float_50 sk=0;
    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador= factor_t(2*i+1);
        total += (i % 2==0 ? 1:-1)*pow(a,2*i+1)* divi_t(denominador);

        if (abs(total-sk)<tolerancia){
            return total;
        }

        sk=total;
        // NOTA:(i % 2==0 ? 1:-1); consulta si i es par o impar
    }
    return total;
}

cpp_dec_float_50 fun_tras::get_pi() {
    return pi_t;
}

cpp_dec_float_50 fun_tras::factor_t(double a) {
    cpp_dec_float_50 fact = 1;
    for (int i = a; i > 1; --i)
        fact *= i;
    return fact;
}









