//
// Created by joedu on 25/2/2024.
//


// CPP Program to demonstrate Boost Multiprecision float


#include "fun_tras.h"
using namespace std;

cpp_dec_float_50 fun_tras::eps = 2.2204 * 0.0000000000000001;
cpp_dec_float_50 fun_tras::tolerancia = 10 * 0.00000001;
cpp_dec_float_50 fun_tras::pi_t = 3.14159265358979323846;
int fun_tras::max_interacion = 2500;
double fun_tras::fact_20;
double fun_tras::fact_40;
double fun_tras::fact_60;
double fun_tras::fact_80;
cpp_dec_float_50 fun_tras::fact_100;

fun_tras::fun_tras() { //constructor

    // aqui se calcularon los valores del factorial
    // de este modo no es necesarios calcularlos cada vez que se utiliza divi_t
    fact_20 = boost::math::factorial<double>(20);
    fact_40 = boost::math::factorial<double>(40);
    fact_60 = boost::math::factorial<double>(60);
    fact_80 = boost::math::factorial<double>(80);
    fact_100 = factor_t(100);
}

fun_tras::~fun_tras() { //destrcutor
}

cpp_dec_float_50 fun_tras::factor_t(long a) { // al implementarse por iteracion calcula numeros más grandes
    cpp_dec_float_50 fact = 1;
    for (int i = a; i > 1; --i)
        fact *= i;
    return fact;
}


cpp_dec_float_50 fun_tras::divi_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 x0 = 0;
    cpp_dec_float_50 a_entero = abs(a);

    // PENDIENTE DE ANALIZAR EL CASO DE LOS NEGATIVOS


    // se define los posibles valores de x0 segun el valor de a(la entrada)
    if (0 < a_entero && a_entero <= fact_20) {
        x0 = pow(eps, 2);
    }
    else if (a_entero <= fact_40) {
        x0 = pow(eps, 4);
    }
    else if (a_entero <= fact_60) {
        x0 = pow(eps, 8);
    }
    else if (a_entero <= fact_80) {
        x0 = pow(eps, 11);
    }
    else if (a_entero <= fact_100) {
        x0 = pow(eps, 15);
    }
    else {
        return 0;
    }

    cpp_dec_float_50 xk;
    cpp_dec_float_50 xk_anterior = x0; // el primer valor de xk es x0
    for (int i = 1; i < max_interacion; ++i) {

        xk = xk_anterior * (2 - abs(a) * xk_anterior); //polinomio para aproximar
        // se usa a en absoluto en caso de que a sea negativo
        // si a es negativo el resultado tiende a infinito

        if (abs(xk - xk_anterior) < abs(tolerancia * xk_anterior)) { // condicion de parada
            break;
        }

        xk_anterior = xk;

    }
    // si a es negativo, el resultado final sera negativo
    if (a > 0) {
        return xk;
    }
    else
        return -xk;
}

cpp_dec_float_50 fun_tras::sin_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total = 0;
    cpp_dec_float_50 sk = 0;

    while (a > 2 * pi_t)
    {
        a = a - 2 * pi_t;

    }


    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador = factor_t(2 * i + 1); // calculo (2n+1)! antes, este numero se usa como denominador
        total += (i % 2 == 0 ? 1 : -1) * pow(a, 2 * i + 1) * divi_t(denominador);  // NOTA:(i % 2==0 ? 1:-1); consulta si i es par o impar

        if (abs(total - sk) < tolerancia) { // condicion de parada
            break;
        }

        sk = total; // guardar el valor de sk para la condicion de parada

    }
    return total; // si se gasta la cantidad maxima de iteraciones
}



cpp_dec_float_50 fun_tras::get_pi() {
    return pi_t;
}

cpp_dec_float_50 fun_tras::cos_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total = 0;
    cpp_dec_float_50 sk = 0;

    while (a > 2 * pi_t)
    {
        a = a - 2 * pi_t;

    }


    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador = factor_t(2 * i); // se calcula previamente el denominador
        total += (i % 2 == 0 ? 1 : -1) * pow(a, 2 * i) * divi_t(denominador); //polinomio para aproximacion

        if (abs(total - sk) < tolerancia) { // condicion de parada
            break;
        }

        sk = total;
    }
    return total;

}

cpp_dec_float_50 fun_tras::tan_t(boost::multiprecision::cpp_dec_float_50 a) { // si se usa un k*pi/2, esto tiende a infinito
 
    return sin_t(a) * sec_t(a);
}

cpp_dec_float_50 fun_tras::ln_t(float a) {
    cpp_dec_float_50 parte_constante = 2 * (a - 1) * divi_t(a + 1);
    cpp_dec_float_50 total = 0;
    cpp_dec_float_50 sk = 0;

    if (a <= 0) {
        return 0;
    }

    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador = divi_t(a + 1);
        total += divi_t(2 * i + 1) * pow((a - 1) * denominador, 2 * i);

        if (abs(parte_constante * total - sk) < tolerancia) {
            break;
        }

        sk = total * parte_constante;
    }
    return parte_constante * total;


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

cpp_dec_float_50 fun_tras::log_t(float x, float y) {

    return ln_t(x) / ln_t(y);
}

cpp_dec_float_50 fun_tras::cosh_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total = 0;
    cpp_dec_float_50 sk = 0;

    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador = factor_t(2 * i); // se calcula previamente el denominador
        total += pow(a, 2 * i) * divi_t(denominador); //polinomio para aproximacion

        if (abs(total - sk) < tolerancia) { // condicion de parada
            break;
        }

        sk = total;
    }
    return total;
}

cpp_dec_float_50 fun_tras::sinh_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total = 0;
    cpp_dec_float_50 sk = 0;

    for (int i = 0; i < max_interacion; ++i) {
        cpp_dec_float_50 denominador = factor_t(2 * i + 1); // se calcula previamente el denominador
        total += pow(a, 2 * i + 1) * divi_t(denominador); //polinomio para aproximacion

        if (abs(total - sk) < tolerancia) { // condicion de parada
            break;
        }

        sk = total;
    }
    return total;

}

cpp_dec_float_50 fun_tras::exp_t(cpp_dec_float_50 a) {
    return cosh_t(a) + sinh_t(a);
}

cpp_dec_float_50 fun_tras::tanh_t(cpp_dec_float_50 a) {
    return sinh_t(a) * divi_t(cosh(a));
}

cpp_dec_float_50 fun_tras::asin_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total = 0;
    cpp_dec_float_50 sk = 0;

    for (int i = 0; i < max_interacion; ++i) {
        //cpp_dec_float_50 factor = factor_t(i);
        cpp_dec_float_50 denominador = divi_t(pow(4,i)*factor_t(i)*factor_t(i) * (2 * i + 1));
        cpp_dec_float_50 pow_ = pow(a,2*i+1);
        total += pow_*factor_t(2 * i) * denominador;


        if (abs(total - sk) < tolerancia) { // condicion de parada
            break;
        }


        sk = total;
    }
    return total;
}

cpp_dec_float_50 fun_tras::acos_t(cpp_dec_float_50 a) {
    return pi_t * divi_t(2) - asin_t(a);
}

cpp_dec_float_50 fun_tras::power_t(float a, float b) {
    cpp_dec_float_50 ln = ln_t(a);
    //cout<<a<<endl;
    //cout<<ln<<endl;
    return exp_t(b * ln); //x^b=e^b*ln(x)
}

cpp_dec_float_50 fun_tras::atan_t(cpp_dec_float_50 a) {
    cpp_dec_float_50 total = 0;
    cpp_dec_float_50 sk = 0;
    cpp_dec_float_50 denominador = 0;
    if (-1 <= a && a <= 1) {
        for (int i = 0; i < max_interacion; ++i) {
            total += (i % 2 == 0 ? 1 : -1) * pow(a, 2 * i + 1) * divi_t(2 * i + 1);
            if (abs(total - sk) < tolerancia) { // condicion de parada
                //return total;
                break;
            }
            sk = total;
        }
        return total;

    }
    else {
        for (int i = 0; i < max_interacion; ++i) {
            denominador = (2 * i + 1) * pow(a, 2 * i + 1);
            total += (i % 2 == 0 ? 1 : -1) * divi_t(denominador);

            if (abs(total - sk) < tolerancia) { // condicion de parada
                break;
            }
            sk = total;
        }

        if (a > 1) {
            return pi_t * divi_t(2) - total;
        }
        else {
            return -1 * pi_t * divi_t(2) - total;
        }
    }
}

cpp_dec_float_50 fun_tras::sqrt_t(float a) {
    if (a > 0) {
        return power_t(move(a), 0.5);
    }
    else {
        cout << "ERROR MATEMATICO" << endl;
        return -1;
    }
}

cpp_dec_float_50 fun_tras::root_t(float x, float y) {
    if (y != static_cast<int>(y) || static_cast<int>(y) % 2 != 0) {
        //cout << "aqui" << endl;
        return power_t(x, 1 / y);
    }
    else {
        cpp_dec_float_50 xk_1 = 0;
        cpp_dec_float_50 xk = x * divi_t(2);

        for (int i = 0; i < max_interacion; ++i) {
            cpp_dec_float_50 denominador = y * pow(xk, y - 1);
            xk_1 = xk - (pow(xk, y) - x) * divi_t(denominador);
            if (abs(xk_1 - xk) < abs(tolerancia * xk)) { // condicion de parada
                break;
            }

            xk = xk_1;
        }
        return xk_1;
    }
}