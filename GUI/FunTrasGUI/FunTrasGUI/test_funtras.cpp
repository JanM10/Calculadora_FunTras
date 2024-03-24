
#include "fun_tras.h"
#include <boost/math/special_functions/factorials.hpp>

int main() {

    fun_tras funTras;
    cpp_dec_float_50 pi = funTras.get_pi();
    //std::cout<<funTras.fact_t(20)<<std::endl;
    cpp_dec_float_50 raiz = funTras.cos_t(3 * funTras.divi_t(7)) + funTras.ln_t(2);
    float num_float = raiz.convert_to<float>();

    cpp_dec_float_50 resultado = funTras.root_t(num_float, 3)*funTras.divi_t(funTras.sinh_t(funTras.sqrt_t(2)))
        + funTras.atan_t(funTras.exp_t(-1));




    std::cout << resultado << std::endl;
}