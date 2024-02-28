//
// Created by joedu on 25/2/2024.
//

#ifndef CALCULADORA_FUNTRAS_FUN_TRAS_H
#define CALCULADORA_FUNTRAS_FUN_TRAS_H

#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/math/special_functions/factorials.hpp>
#include <iostream>


using namespace boost::multiprecision;
using namespace std;



class fun_tras {
public:
    fun_tras(); //constructor de la clase
    ~fun_tras(); //destructor de la clase
    static cpp_dec_float_50 divi_t(cpp_dec_float_50 a); // metodo para dividir
    static cpp_dec_float_50 sin_t(cpp_dec_float_50 a); //metodo para calcular sin
    static cpp_dec_float_50 factor_t(double a); //al realizar el proceso con iteracion se soporta el factorial de 2500
    static cpp_dec_float_50 get_pi();//metodo para obetener el valor de pi
    static cpp_dec_float_50 cos_t(cpp_dec_float_50 a);
    static cpp_dec_float_50 tan_t(cpp_dec_float_50 a);
    static cpp_dec_float_50 csc_t(cpp_dec_float_50 a);
    static cpp_dec_float_50 sec_t(cpp_dec_float_50 a);
    static cpp_dec_float_50 cot_t(cpp_dec_float_50 a);
    static cpp_dec_float_50 log_t(float x,double y);
    static cpp_dec_float_50 ln_t(float a);

private:

    // VARIABLES
    static cpp_dec_float_50 pi_t; // valor de pi
    static cpp_dec_float_50 eps;  //valor de la constante eps
    static cpp_dec_float_50 tolerancia; // valor de la tolerancia
    static int max_interacion; // numero maximo de iteraciones
    // definen los diferentes factoriales para utilizarlos como constantes
    static double fact_20;
    static double fact_40;
    static double fact_60;
    static double fact_80;
    static double fact_100;
};


#endif //CALCULADORA_FUNTRAS_FUN_TRAS_H
