#include "sousProgrammes.h"
#include <iostream>
#include "fichierTexte.h"
#include "pile.h"
using namespace std;

void afficherFichierTexte(string nomSysFic)
{
      string chaine;
      bool finFichier;
      UnFichierTexte fic;
      associer(fic, nomSysFic);
      ouvrir(fic, consultation);

      while (true)
      {
            lireLigne(fic, chaine, finFichier);

            if (finFichier)
            {
                  break;
            }

            cout << endl << chaine; 
      }

      fermer(fic);
}


void afficherInverseFichierTexte(string nomSysFic)
{
      unsigned int compteur;
      UnePile pile;
      string chaine;
      bool finFichier;
      UnFichierTexte fic;
      associer(fic, nomSysFic);
      ouvrir(fic, consultation);
      initialiser(pile);
      compteur = 0;
      while (true)
      {
            lireLigne(fic, chaine, finFichier);

            if (finFichier)
            {
                  break;
            }
            compteur+=1;

            empiler(pile, chaine); 
      }
      for (unsigned int i = 0; i < compteur; i++)
      {
            depiler(pile, chaine);
            cout << endl << chaine;
      }
      
      fermer(fic);
}

void etendreFichierTexte (string nomSysFicSource, string nomSysFicCible)
{
      string chaine;
      bool finFichier;
      UnFichierTexte ficSource;
      UnFichierTexte ficCible;
      associer(ficSource, nomSysFicSource);
      ouvrir(ficSource, consultation);
      associer(ficCible, nomSysFicCible);
      ouvrir(ficCible, extension);

      //sauter une ligne dans le fichier cible
      ecrireLigne(ficCible, "");

      while (true)
      {
            lireLigne(ficSource, chaine, finFichier);

            if (finFichier)
            {
                  break;
            }

            ecrireLigne(ficCible, chaine);
            
      }

      fermer(ficSource);
      fermer(ficCible);
}

void viderFichierTexte(string nomSysFic)
{
      UnFichierTexte fic;
      associer(fic,nomSysFic);
      ouvrir(fic, creation);
      fermer(fic);
}