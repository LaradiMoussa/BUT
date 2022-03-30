/**
 * @file fractions.cpp
 * @author T. Brierre
 * @brief Le corps du module fractions
 * @date 2021-11-17
 * 
 */

#include "fractions.h"
#include <iostream>
using namespace std;


Fraction reduire(Fraction frac)
{
     
}

Fraction additionner(Fraction frac1, Fraction frac2)
{
     Fraction fracSomme;

     if (frac1.den != frac2.den)
     {
          frac1.num = frac1.num * frac2.den;
          frac2.num = frac2.num * frac1.den;
          frac1.den = frac1.den * frac2.den;
     }

     fracSomme.num = frac1.num + frac2.num;
     fracSomme.den = frac1.den;

     return fracSomme;   

}

Fraction saisir()
{
     Fraction fracSaisie;
     cout << "Saisir le numerateur : "; 
     cin >> fracSaisie.num;
     cout << "Saisir le denominateur : "; 
     cin >> fracSaisie.den;
     return fracSaisie;
}

void afficher(const Fraction& frac)  
{
     cout << frac.num << "/" << frac.den << " ";
}