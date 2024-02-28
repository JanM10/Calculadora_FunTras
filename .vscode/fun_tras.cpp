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

cpp_dec_float_50 fun_tras::factor_t(double a) { // al implementarse por iteracion calcula numeros más grandes
    cpp_dec_float_50 fact = 1;
    for (int i = a; i > 1; --i)
        fact *= i;
    return fact;
}


cpp_dec_float_50 fun_tras::divi_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 x0=0;
    int a_entero = abs(static_cast<int>(a));

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
    cpp_dec_float_50 xk_anterior=x0; // el primer valor de xk es x0
    for(int i =1;i<max_interacion;++i){

      xk=xk_anterior*(2-abs(a)*xk_anterior); //polinomio para aproximar
      // se usa a en absoluto en caso de que a sea negativo
      // si a es negativo el resultado tiende a infinito

      if(abs(xk-xk_anterior)<abs(tolerancia*xk_anterior)){ // condicion de parada
          break;
      }

      xk_anterior=xk;

    }
    // si a es negativo, el resultado final sera negativo
    if(a>0){
        return xk;
    } else
    return -xk;
}

cpp_dec_float_50 fun_tras::sin_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total=0;
    cpp_dec_float_50 sk=0;
    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador= factor_t(2*i+1); // calculo (2n+1)! antes, este numero se usa como denominador
        total += (i % 2==0 ? 1:-1)*pow(a,2*i+1)* divi_t(denominador);  // NOTA:(i % 2==0 ? 1:-1); consulta si i es par o impar

        if (abs(total-sk)<tolerancia){ // condicion de parada
            break;
        }

        sk=total; // guardar el valor de sk para la condicion de parada

    }
    return total; // si se gasta la cantidad maxima de iteraciones
}



cpp_dec_float_50 fun_tras::get_pi() {
    return pi_t;
}

cpp_dec_float_50 fun_tras::cos_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total=0;
    cpp_dec_float_50 sk=0;

    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador= factor_t(2*i); // se calcula previamente el denominador
        total += (i % 2==0 ? 1:-1)*pow(a,2*i)* divi_t(denominador); //polinomio para aproximacion

        if (abs(total-sk)<tolerancia){ // condicion de parada
            break;
        }

        sk=total;
    }
    return total;

}

cpp_dec_float_50 fun_tras::tan_t(boost::multiprecision::cpp_dec_float_50 a) { // si se usa un k*pi/2, esto tiende a infinito
    return sin_t(a)* divi_t(cos_t(a));
}

cpp_dec_float_50 fun_tras::ln_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 parte_constante = 2*(a-1)* divi_t(a+1);
    cpp_dec_float_50 total=0;
    cpp_dec_float_50 sk=sk;

    if(a<=0){
        return 0;
    }

    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador = divi_t(a+1);

        total += divi_t(2*i+1)*pow((a-1)*denominador,2*i);

        if(abs(parte_constante*total-sk)<tolerancia){
            break;
        }

        sk=parte_constante*total;
    }
    return parte_constante*total;

}

cpp_dec_float_50 fun_tras::csc_t(cpp_dec_float_50 a) {
    return divi_t(sin_t(a));
}

cpp_dec_float_50 fun_tras::sec_t(cpp_dec_float_50 a) {
    return divi_t(cos_t(a));
}

cpp_dec_float_50 fun_tras::cot_t(cpp_dec_float_50 a) {
    return divi_t(tan_t(a));
}












