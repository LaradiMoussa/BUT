#ifndef "CASEACOCHER_H"
#define "CASEACOCHER_H"

#include "Carre.h"

class CaseACoche : public Carre{

private:

    Carre m_carre;
    bool m_estActif;

public:

    CaseACocher(const CaseACocher&);
    CaseACocher();
    CaseCocher(int, int, int, Couleur = Couleur(0,0,255), char = 'N');
    CaseACocher(Carre, char='N')

    void definirCadre(int, int, int, Couleur = Couleur(0,0,255));
    Carre cadre() const;
    void definirEtat(char);
    char etat() const;
    void afficher(Fenetre&) const;
    void effacer(Fenetre&) const;
};

#endif
