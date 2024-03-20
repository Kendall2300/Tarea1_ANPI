#ifndef FUNTRAS_H
#define FUNTRAS_H

#include "math.h"
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>

using namespace boost::multiprecision;

#define max_iter 2500
#define tol 0.00000001


namespace funtras{
    cpp_dec_float_50 pi_t=cpp_dec_float_50("3.14159265358979323846");

    /**
     * @brief Función factorial de x
     * @param x número al que calcular el factorial
     * @return factorial de x
     */
    cpp_dec_float_50 fact_t(int x) {

        if (x<0){
            throw std::domain_error("x debe ser mayor o igual a 0");
        }

        if(x==0){
            return 1;
        }
        if (x != 1) {
            return fact_t(x - 1) * x;
        } else {
            return 1;
        }

    }

    // Instanciación de power_t
    cpp_dec_float_50 power_t(cpp_dec_float_50 x, cpp_dec_float_50 y);

    /**
      * @brief Función valor inicial de power
      * @param a valor de entrada
      * @return resultado de la división inicial
      */
    cpp_dec_float_50 divi_t_inital_value(cpp_dec_float_50 a) {
        cpp_dec_float_50  eps = 2.2204*pow(10,-16);
        if(a>=fact_t(100)){
            return 0;
        }else if(a>fact_t(80) && a<fact_t(100)){
            return power_t(eps,15);
        }else if(a>fact_t(60) && a<=fact_t(80)){
            return power_t(eps,11);
        }else if(a>fact_t(40) && a<=fact_t(60)){
            return power_t(eps,8);
        }else if(a>fact_t(20) && a<=fact_t(40)){
            return power_t(eps,4);
        }else{
            return power_t(eps,2);
        }
    }

    /**
    * @brief Función división 1/x
    * @param x número al que calcular el inverso
    * @return inverso de x: x_k
    */
    cpp_dec_float_50 divi_t(cpp_dec_float_50 x) {
        cpp_dec_float_50 x_k = divi_t_inital_value(abs(x));
        cpp_dec_float_50 x_k1 = 0;
        for(int iter=0;iter<max_iter;iter++){
            x_k1.assign(x_k*(2-x*x_k));
            if(abs(x_k1-x_k)<tol*abs(x_k1)){
                return x_k1;
            }
            x_k.assign(x_k1);
            if(iter==max_iter-1){
                return x_k;
            }
        }
        return x_k;
    }



    boost::multiprecision::cpp_dec_float_50 root_t(boost::multiprecision::cpp_dec_float_50 x, boost::multiprecision::cpp_dec_float_50 y);

    /**
     * @brief Función potencia x^y
     * @param x base de la potencia
     * @param y exponente de la potencia
     * @return resultado de la potencia x^y
     */
    cpp_dec_float_50 power_t(cpp_dec_float_50 x, cpp_dec_float_50 y) {

        cpp_dec_float_50 result = 1;
        cpp_dec_float_50 tempy=0;
        cpp_dec_float_50 sign = 1.0;

        if(y==0 && x != 0){
            return 1;
        }
        else if(x==0){
            return 0;
        }
        else if(y ==1){
            return x;
        }
        else if(y>0){
            while(y!=0){
                result*=x;
                y--;
            }
        }
        else if(y<0){
            tempy = -1*y;
            while(tempy!=0){
                result*=x;
                tempy--;
            }
            result = copysign(sign,result)* divi_t(abs(result));
        }



        return result;
    }



    /**
     * @brief Función seno de x: sen(x)
     * @param x valor del ángulo
     * @return aproximación del resultado de seno(x): S_k1
     */
    boost::multiprecision::cpp_dec_float_50 sin_t(boost::multiprecision::cpp_dec_float_50 x) {
        x = fmod(x, 2 * funtras::pi_t); // Ajustar el ángulo dentro del rango 0 a 2pi
        if (x < 0) x += 2 * funtras::pi_t; // Ajustar para manejar ángulos negativos

        cpp_dec_float_50 S_k = cpp_dec_float_50(x);
        cpp_dec_float_50 S_k1 = cpp_dec_float_50("0");
        S_k.assign(x);

        for (int iter = 0; iter < max_iter; iter++) {

            S_k1.assign(
                    S_k + power_t(-1, iter + 1) * power_t(x, 2 * (iter + 1) + 1) * divi_t(fact_t(2 * (iter + 1) + 1)));

            if (abs(S_k1 - S_k) < tol) {
                return S_k1;
            }
            S_k.assign(S_k1);
        }
        return S_k1;
    }

    /**
     * @brief Funcion seno hiperbolico de a: senh(a)
     * @param a el valor del angulo
     * @return aproximacion del resultado de senh(a): S_k1
     */
    cpp_dec_float_50 sinh_t(cpp_dec_float_50 a) {
        cpp_dec_float_50 S_k = a;
        cpp_dec_float_50 S_k1 = 0;
        for(int iter=1;iter<max_iter;iter++){
            S_k1.assign(S_k+ power_t(a,2*iter+1)* divi_t(fact_t(2*iter+1)));
            if(abs(S_k1-S_k)<tol){
                return S_k1;
            }
            S_k.assign(S_k1);
        }
        return S_k1;
    }

    /**
      * @brief Funcion coseno de x: cos(x)
      * @param x el valor del angulo
      * @return aproximacion de la funcion cos(x): S_k1
        */
    boost::multiprecision::cpp_dec_float_50 cos_t(boost::multiprecision::cpp_dec_float_50 x) {
        x = fmod(x, 2 * funtras::pi_t); // Ajustar el ángulo dentro del rango 0 a 2pi
        if (x < 0) x += 2 * funtras::pi_t; // Ajustar para manejar ángulos negativos

        cpp_dec_float_50 S_k = cpp_dec_float_50("0");
        cpp_dec_float_50 S_k1 = cpp_dec_float_50("0");
        S_k.assign(1);

        for (int iter = 0; iter < max_iter; iter++) {
            S_k1.assign(S_k + power_t(-1, iter + 1) * power_t(x, 2 * (iter + 1)) * divi_t(fact_t(2 * (iter + 1))));
            if (abs(S_k1 - S_k) < tol) {
                return S_k1;
            }
            S_k.assign(S_k1);
        }
        return S_k1;
    }


    /**
     * @brief Funcion cosecante hiperbolica de a: cosh(a)
     * @param a el valor del angulo
     * @return aproximacion de la funcion cosh(a): S_k1
     */
    cpp_dec_float_50 cosh_t(cpp_dec_float_50 a) {
        cpp_dec_float_50 S_k = 1;
        cpp_dec_float_50 S_k1 = 0;
        for(int iter=1;iter<max_iter;iter++){
            S_k1.assign(S_k+ power_t(a,2*iter)* divi_t(fact_t(2*iter)));
            if(abs(S_k1-S_k)<tol){
                return S_k1;
            }
            S_k.assign(S_k1);
        }
        return S_k1;
    }

    /***
    * @brief Funcion tangente hiperbolica de x : tanh(x)
    * @param x el valor del angulo
    * @return aproximacion de la funcion tanh(x)
    */
    boost::multiprecision::cpp_dec_float_50 tanh_t(boost::multiprecision::cpp_dec_float_50 x) {
        return sinh_t(x) * power_t(cosh(x),-1); // tanh(x) = sinh(x)/cosh(x)
    }

    /***
     * @brief Funcion secante de a : sec(a)
     * @param x el valor del angulo
     * @return aproximacion de la funcion sec(a)
     */
    cpp_dec_float_50 sec_t(cpp_dec_float_50 a) {
        cpp_dec_float_50 cos_a = cos_t(a);

        // Verifica si el coseno es cero o muy cercano a cero
        if (abs(cos_a) < tol) {
            throw std::domain_error("El ángulo produce una secante indefinida, considere otro valor de x");
        }

        // Calcula el recíproco del coseno
        return 1 / cos_a;
    }


    // Instanciación de tan_t
    cpp_dec_float_50 tan_t(cpp_dec_float_50 a);

    /**
     * @brief Funcion cotangente de a : cot(a)
     * @param x el valor del angulo
     * @return aproximacion de la funcion cot(a)
     */
    cpp_dec_float_50 cot_t(cpp_dec_float_50 a) {
        return power_t(tan_t(a),-1);
    }

    /**
     * @brief Funcion tangente de x : tan(x)
     * @param: x el valor del angulo del que se obtendra la tangente
     * @return: la tangente de x
     */
    cpp_dec_float_50 tan_t(cpp_dec_float_50 x) {
        x = fmod(x, 2 * funtras::pi_t); // Ajustar el ángulo dentro del rango 0 a 2pi
        if (x < 0) x += 2 * funtras::pi_t; // Ajustar para manejar ángulos negativos
        cpp_dec_float_50 cos_x = cos_t(x);

        // Verifica si el coseno es cero o muy cercano a cero
        if (abs(cos_x) < tol) {
            throw std::domain_error("El ángulo produce una tangente indefinida.");
        }

        // Calcula la tangente
        return sin_t(x) * divi_t(cos_t(x));
    }



    /**
     * @brief Funcion logaritmo natural de x : ln(x)
     * @param x valor del que se obtendra el logaritmo
     * @return logaritmo natural de x
     * @throw std::domain_error para x mayor o igual a cero
     */
    cpp_dec_float_50 ln_t(boost::multiprecision::cpp_dec_float_50 x) {
        if (x <= 0) {
            throw std::domain_error(" x debe ser mayor a 0");
        }
        boost::multiprecision::cpp_dec_float_50 S_c = 2 * (x - 1) * divi_t(x + 1);
        boost::multiprecision::cpp_dec_float_50 S_k = 1;
        boost::multiprecision::cpp_dec_float_50 S_k1 = S_k + (divi_t(3) * power_t((x - 1) * divi_t(x + 1), 2));
        for (int i = 2; i < max_iter; ++i) {
            if (abs(S_k1 - S_k) < tol) {
                return S_c * S_k1;
            }
            S_k.assign(S_k1);
            S_k1.assign(S_k + (divi_t(2 * i + 1) * power_t(((x - 1) * divi_t(x + 1)), 2 * i)));
        }
        return S_k1;
    }

    /**
     * @brief Funcion raiz y-esima : x^(1/y)
     * @param x el valor al que se le calculara la raiz
     * @param y el grado de la raiz
     * @throw std::domain_error para x menor a cero
     * @throw std::domain_error para y pares con x negativo
     */
    boost::multiprecision::cpp_dec_float_50
    root_t(boost::multiprecision::cpp_dec_float_50 x, boost::multiprecision::cpp_dec_float_50 y) {
        if (x < 0) {
            throw std::domain_error(" x debe ser mayor o igual a 0");
        }
        if (y < 0) {
            return power_t(x, y);
        }
        if (floor(y) == y) {
            //Es entero
            if (y < 2) {
                return x;
            }
            if (y.convert_to<int>() % 2 == 0 && x < 0) {
                throw std::domain_error("No cumple: x debe ser mayor a cero o igual a cero");
            }
            boost::multiprecision::cpp_dec_float_50 S_k = x * 0.5;
            boost::multiprecision::cpp_dec_float_50 S_k1 =
                    S_k - (power_t(S_k, y) - x) * divi_t(y * power_t(S_k, y - 1));
            for (int i = 2; i < max_iter; ++i) {
                if (abs(S_k1 - S_k) < tol * abs(S_k1)) {
                    return S_k1;
                }
                S_k.assign(S_k1);
                S_k1.assign(S_k - (power_t(S_k, y) - x) * divi_t(y * power_t(S_k, y - 1)));
            }
            return S_k1;
        } else {
            return funtras::power_t(x, y);
        }
    }

    /**
     * @brief Funcion raiz cuadrada de x : x^(1/2)
     * @param x
     * @return aproximacion de la sqrt(x)
     */

    boost::multiprecision::cpp_dec_float_50 sqrt_t(boost::multiprecision::cpp_dec_float_50 x) {
        return root_t(x, 2); // se invoca a una funcion existente con indice 2
    }


    /**
     * @brief Funcion arcoseno de x : arcsen(x)
     * @param x valor del angulo del que se le calculara el arcoseno
     * @return aproximacion del arcoseno de x (un angulo)
     * @throw std::domain_error para valores x iguales o menores que 0
     */
    cpp_dec_float_50 asin_t(boost::multiprecision::cpp_dec_float_50 x) {
        // Ajustar el valor de x si está fuera del rango [-1, 1]
        if (x <= -1) return -funtras::pi_t * divi_t(2); // Si x <= -1, devuelve -pi/2
        else if (x >= 1) return funtras::pi_t * divi_t(2); // Si x >= 1, devuelve pi/2

        cpp_dec_float_50 s_k = x;
        cpp_dec_float_50 s_k1 = s_k + (divi_t(6)* power_t(x,3));
        for (int i = 2; i < max_iter; ++i) {
            if(abs(s_k1-s_k)<tol){
                return s_k1;
            }
            s_k.assign(s_k1);
            s_k1.assign(s_k + fact_t(2 * i) * divi_t(power_t(4,i) * power_t(fact_t(i),2)
                            * (2*i+1)) * power_t(x,2*i+1));
        }
        return s_k1;
    }


    /**
     * @brief Funcion exponencial e^a
     * @param a exponente para e
     * @return aproximacion de la funcion exponencial
     */
    cpp_dec_float_50 exp_t(cpp_dec_float_50 a){
        cpp_dec_float_50 S_k = 1;
        cpp_dec_float_50 S_k1 = 0;
        for(int iter=1;iter<max_iter;iter++){
            S_k1.assign(S_k+power_t(a,iter)* divi_t(fact_t(iter)));
            if(abs(S_k1-S_k)<tol){
                return S_k1;
            }
            S_k.assign(S_k1);
        }
        return 0;
    }

    /**
     * @brief Funcion arcotangente de x : arctan(x)
     * @param x valor por calcularle el atan_t
     * @return aproximacion del angulo que devolveria la funcion arctan
     */
    cpp_dec_float_50 atan_t(boost::multiprecision::cpp_dec_float_50 x){
        cpp_dec_float_50 S_k = x;
        cpp_dec_float_50 S_k1 = 0;

        if(x>=-1 && x<=1){
            for(int n = 0; n <= max_iter;n++){
                S_k1.assign(power_t(-1,n) * (power_t(x,2*n+1) * divi_t(2*n+1)));
                S_k.assign(S_k1);
                if(abs(S_k1 - S_k) < tol){
                    return S_k1;
                }


            }
            return S_k1;
        }
        else if(x>1){
            for(int n = 0; n <= max_iter;n++){
                S_k1.assign(pi_t*divi_t(2)-(power_t(-1,n)*divi_t((2*n+1)*power_t(x,2*n+1))));
                S_k.assign(S_k1);
                if(abs(S_k1 - S_k)<tol){
                    return S_k1;
                }
            }
            return S_k1;
        }else{ //x<1
            for(int n =0; n<=max_iter;n++){
                S_k1.assign(-(pi_t*divi_t(2))-(power_t(-1,n)*divi_t((2*n+1)*power_t(x,2*n+1))));
                if(abs(S_k1-S_k)<tol){
                    return S_k1;
                }
                S_k.assign(S_k1);
            }
            return S_k1;

        }
    }



    /**
     * @brief Funcion logaritmo en cualquier base de x
     * @param x
     * @param y
     * @return aproximacion del logaritmo
     */
    cpp_dec_float_50 log_t(boost::multiprecision::cpp_dec_float_50 x, boost::multiprecision::cpp_dec_float_50 y){
        if(y==1)
            std::cout<<"Error";
        else if(x==1)
            return 0;
        else if(x==y)
            return 1;
        else
            return ln_t(x)* power_t(ln_t(y),-1);

        return 0;

    }

    /**
     * @brief Funcion cosecante de x : csc(x)
     * @param x angulo para la funcion
     * @return aproximacion del resultado de la funcion
     */
    cpp_dec_float_50 csc_t(boost::multiprecision::cpp_dec_float_50 x){
        return power_t(sin_t(x),-1);
    }

    /**
     * @brief Funcion arcocoseno de x : arccos(x)
     * @param x valor al cual calcularle el angulo
     * @return angulo correspondiente al valor real x
     */
    cpp_dec_float_50 acos_t(boost::multiprecision::cpp_dec_float_50 x){
        if (x <= -1) return funtras::pi_t; // Si x <= -1, devuelve pi
        else if (x >= 1) return 0; // Si x >= 1, devuelve 0
        return (pi_t* divi_t(2)) - asin_t(x);
    }

}

#endif // FUNTRAS_H
