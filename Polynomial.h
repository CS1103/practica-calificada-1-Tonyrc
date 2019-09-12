//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Polynomial {
 private:
    vector<int> Coeficientes;
    vector<int> Grados;
    int gradomayor;
 public:
    Polynomial();
    Polynomial(const Polynomial& p);
    vector<int> getCoeficientes();
    void add(int coe,int grado);
    int retornogrado();
    Polynomial xconstante(Polynomial p,int x);
    std::string ImprimePolinomio(Polynomial p);
};


#endif //POLINOMIO_POLINOMIO_H
