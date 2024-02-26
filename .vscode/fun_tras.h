//
// Created by joedu on 25/2/2024.
//

#ifndef CALCULADORA_FUNTRAS_FUN_TRAS_H
#define CALCULADORA_FUNTRAS_FUN_TRAS_H

#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>


using namespace boost::multiprecision;
using namespace std;


class fun_tras {
public:
    fun_tras(); //constructor de la clase
    ~fun_tras(); //destructor de la clase
    static cpp_dec_float_50 divi_t(cpp_dec_float_50 a); // metodo para dividir
    static cpp_int fact_t(int a); // metodo para calcular el factorial

private:

    // VARIABLES
    cpp_dec_float_50 pi_t = 3.14159265358979323846; // valor de pi
    cpp_dec_float_50 eps = 2.2204e-16; //valor de la constante eps
    // definen los diferentes factoriales para utilizarlos como constantes
    static cpp_int fact_20;
    static cpp_int fact_40;
    static cpp_int fact_60;
    static cpp_int fact_80;
    static cpp_int fact_100;

    //FUNCIONES
    static void fact_list(); // funcion necesaria para calcular los factoriales constantes
};


#endif //CALCULADORA_FUNTRAS_FUN_TRAS_H
