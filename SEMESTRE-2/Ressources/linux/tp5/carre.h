#ifndef "CARRE_H"
#define "CARRE_H"

#include "Fenetre.h"
#include "Couleur.h"

class Carre{
protected:
    int m_x, m_y, m_cote;
    Couleur m_coul;

public:
    Carre(const Carre&);
    Carre();
    Carre(int, int, int, Couleur = Couleur(0,0,255));

    void placer(int, int);
    int coordX() const;
    int coordY() const;
    void dimensionner(int);
    int cote() const;
    void definirCouleur (int, int, int);
    void definirCouleur(Couleur);
    Couleur Couleur() const;
    void afficher(Fenetre&) const;
    void effacer(Fenetre&) const;
    bool touche(int, int) const;

};

#endif
