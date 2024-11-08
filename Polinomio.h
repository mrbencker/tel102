#ifndef Polinomio_h
#define Polinomio_h
#include <symengine/symbol.h>
#include <symengine/pow.h>
#include <symengine/derivative.h>
#include <symengine/add.h>
#include <symengine/mul.h>
#include <iostream>
#include <vector>

using namespace SymEngine;
class Polinomio{
protected:
    RCP<const Symbol> variable; // Puntero de clase symbol que almacena la variable simbolica en este caso "x".
    RCP<const Basic> polinomio; // Puntero de clase Basic que es una plantilla para cualquier tipo de expresion matematica basica.
    std::vector<float> coeficientes; // Vector para almacenar los coeficientes.
public:
    Polinomio(std::string variable, int grado); //Constructor que va a recibir el puntero variable
    virtual RCP<const Basic> derivar();
    virtual double evaluar(double valor);      
    virtual void Polinomioescrito() = 0;
};
class Polinomiogrado2: public Polinomio{
public:
    Polinomiogrado2(std::string variable, int coefA, int coefB, int coefC);
    void Polinomioescrito();
private:
    float a;
    float b;
    float c;
};
class Polinomiogrado3: public Polinomio{
public:
    Polinomiogrado3(std::string variable, float coefA, float coefB, float coefC, float coefD);
    void Polinomioescrito();
private:
    float a;
    float b;
    float c;
    float d;
};
#endif
