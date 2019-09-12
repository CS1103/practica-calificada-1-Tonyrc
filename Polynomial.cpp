//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include <vector>
#include "Polynomial.h"

Polynomial::Polynomial(){
    gradomayor=0;
}

Polynomial::Polynomial(const Polynomial& p){}

void Polynomial::add(int coeficiente,int grado){
    Coeficientes.push_back(coeficiente);
    Grados.push_back(grado);
    gradomayor++;
}

int Polynomial::retornogrado(){
    return gradomayor;
}

Polynomial Polynomial::xconstante(Polynomial p,int constante){
     Polynomial pp;
     int a=0;
     for(auto item:Coeficientes){
         item=item*constante;
         pp.add(item,a);
         a++;
     }
     return pp;
}

std::string Polynomial::ImprimePolinomio(Polynomial p){
    int size=Coeficientes.size();
    for(int i=0;i<=size;i++){
        if(i==0)
            cout<<Coeficientes[i]<<"+";
        else
            if(i<size){
                cout<<Coeficientes[i]<<"x^"<<i<<"+";
            }
            else
                cout<<Coeficientes[i]<<"x^"<<i;
    }
    cout<<"\n";
}

vector<int> Polynomial::getCoeficientes(){
    return Coeficientes;
};


