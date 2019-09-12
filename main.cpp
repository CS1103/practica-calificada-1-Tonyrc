#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include "Polynomial.h"
#include <vector>

Polynomial MultiPolinomios(Polynomial p1,Polynomial p2) {
    vector<int> pol1 = p1.getCoeficientes();
    vector<int> pol2 = p2.getCoeficientes();
    vector<int> Coefi3(pol1.size() + pol2.size() + 1);
    for (int pos1=0; pos1<=p1.retornogrado();pos1++){
        for (int pos2=0; pos2<=p2.retornogrado();pos2++){
            Coefi3[pos1+pos2] += pol1[pos1]*pol2[pos2];
        }
    }
    Polynomial p3;
    int a=0;
    for(auto item:Coefi3){
        p3.add(item,a);
        a++;
    }
    return p3;
}
Polynomial PotenciaPolinomio(Polynomial p1,int potencia){
    Polynomial pp;
  //  for(int i=1;i<=potencia;i++){
  //  }
}
int main(){
    Polynomial pol1;
    pol1.add(1,0);
    pol1.add(2,1);
    pol1.retornogrado();
    Polynomial pol3=pol1.xconstante(pol1,2);
    pol3.ImprimePolinomio(pol3);
    Polynomial pol2=MultiPolinomios(pol1,pol3);
    //Polynomial pol4=PotenciaPolinomio(pol1,3);
    return 0;
}