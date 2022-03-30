/*
 Programme : Hanoi - itératif - avec Tableau de piles et sous-programmes 
 But :  Résolution des tours de Hanoi - version itérative - pour 3 à 9 disques
 Date de dernière modification : 10-12-2021
 Auteur : Pantxika Dagorret, Titouan Brierre
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - TD n°4
*/
#include <iostream>
#include "pile.h"
using namespace std;


const unsigned int NB_TOURS = 3;     // CONSTANTE dite 'GLOBALE' : 
                                            // portée = tous les Sous-programmes
                                            // présents dans ce fichier

/* ---------- Observateurs
   ------------------------------------------------------------------*/

bool estDeplacable(const UnePile& tourOrigine, const UnePile& tourDestination);

bool sontVides(const UnePile &tourA, const UnePile &tourB);
// But : retourne vrai si les deux tours tourA et tourB sont vides, faux sinon

unsigned short int tourSuivante(unsigned short int indiceTour, unsigned short int nbTours);
// But : Considerant une tour par son indiceTour retourne l'indice de la tour suivante selon 
//      t1 -> t2 -> t3 -> t1...

void DetrminerToursDepartArrivee(UnePile lesTours[], unsigned int posTourAvecPlusPetitDisque, unsigned int nbTours);
// But : Détermine la tour de départ et la tour d'arrivée d'un autre disque suivant la posTourAvecPlusPetitDisque

void determinerToursCandidates(UnePile lesTours[], unsigned int posTourAvecPlusPetitDisque, unsigned int nbTours);
// But : Détermine les tours qui ne contiennent pas le plus petit disque


/* ---------- Primitives modifiant 1 tour
   ------------------------------------------------------------------*/

void remplirTour(unsigned int nbDisques, UnePile lesTours[]);
// But remplit la tourARemplir avec nbDisques, du plus grand (en bas) au plus 
// petit (au sommet) de la tour

/* ---------- Primitives modifiant plusieurs tours
   ------------------------------------------------------------------*/

void initialiserTours(unsigned int nbDisques, unsigned int nbTour);
// But : initialise les NB_TOURS tours du tableau lesTours

void deplacerDisque(UnePile& tourOrigine, UnePile& tourDestination);
// But : déplace un disque d'une tour à une autre
// pré-condition : estDeplacable(tourOrigine, tourDestination) est VRAI
//                 c'est à dire :
//
//                 estVide(tourOrigine)  = FAUX
//                 et  (
//                        (estVide(tourDestination) = VRAI ) 
//                         OU 
//                        ( estVide(tourDestination)  = FAUX
//                          et
//                          sommet(tourOrigine) < sommet(tourDestination)
//                         )
//                     )

void deplacerPetit(UnePile tours[], unsigned int posTourAvecPlusPetitDisque, unsigned int nbTours);

/* ---------- Affichages
   ------------------------------------------------------------------*/

void afficherTour(UnePile tour);
// Affiche le contenu de la tour passée en paramètre

void afficherTours(const UnePile lesTours[], unsigned int nbTours);
// Affiche le contenu des tours passées en paramètre 


/* ---------- Algorithmes de résolution du problème des tours de Hanoi
   --------------------------------------------------------------------*/

void resoudreToursHanoiManuel(unsigned int nbDisques); 
// Buts : 1- faire résoudre les tours de Hanoi avec nbDisques au joueur
//        2-pour tester les primitives 
//        - initialiserTours()
//        - remplirTour()
//        - afficherTour()
//        - afficherTours()
//        - deplacerDisque()

void resoudreToursHanoiAutomatique(unsigned int nbDisques);
// But : résoudre automatiquement les tours de Hanoi avec nbDisques disques



/* ---------- Boîte à outils pour resolutionToursHanoiManuel ()
   -------------------------------------------------------------------*/

   void saisieVerifDeplacementDemande(bool& reponseOk, unsigned int& origine, unsigned int& destination, const UnePile lesTours[]);
   // saisie du choix des tours prenant part au déplacement d'un disque :
   // 12 pour deplacement d'un disque de la tour 1 vers la tour 2
   // 13 pour deplacement d'un disque de la tour 1 vers la tour 3
   // 31 pour deplacement d'un disque de la tour 3 vers la tour 1
   // ...
   // 0 si aucun deplacement demandé

   int carToChiffre (char car);
   // convertit un caractère en chiffre



/* ---------- Boîte à outils pour resolutionToursHanoiAutomatique ()
   -------------------------------------------------------------------*/


// ======================================================================
int main()
{
    const unsigned int NB_MINIMUM_DISQUES = 3;   // nbre minimum autoris� de disques
    const unsigned int NB_MAXIMUM_DISQUES = 9;   // nbre maximum autoris� de disques
    unsigned int nbDisques;                     // nbre de disques à déplacer
    
    // (clavier), NB_MINIMUM_DISQUES, NB_MINIMUM_DISQUES >> saisie du nbre de disques >> nbDisques
    do
    {
        cout << "Entrer le nbre de disques de la tour de Hanoi (entre " << NB_MINIMUM_DISQUES << " et " << NB_MAXIMUM_DISQUES << ") : ";
        cin >> nbDisques;
    }
    while (!((nbDisques >=NB_MINIMUM_DISQUES) && (nbDisques <= NB_MAXIMUM_DISQUES)));


    // nbDisques >>  résoudre Hanoi manuellement pour le nb de disques entré >> ()
    resoudreToursHanoiManuel(nbDisques);

    return 0;
}


// ======================================================================

// ---------- Observateurs

bool estDeplacable(const UnePile& tourOrigine, const UnePile& tourDestination)
{
    // verifier que la tour d'origine n'est pas vide
    if (estVide(tourOrigine)==false)
    {
        // observer si la tour d'origine est vide
        if (estVide(tourDestination))
        {
            return true;
        }
        else 
        {
            // vérifier si le disque de la tour d'origine n'est pas plus grand que celui de la tour de destination
            if (sommet(tourOrigine)<sommet(tourDestination))
            {
                return true;
            }
        }
    }
    return false;
}

bool sontVides(const UnePile &tourA, const UnePile &tourB)
{
    return (estVide(tourA) && estVide(tourB));
}

unsigned short int tourSuivante(unsigned short int indiceTour, unsigned short int nbTours)
{
    return indiceTour = (indiceTour+1)%nbTours;
}

void DetrminerToursDepartArrivee(UnePile lesTours[], unsigned int posTourAvecPlusPetitDisque, unsigned int nbTours)
{
    unsigned int indTourDep;
    unsigned int indTourAr;
    determinerToursCandidates(lesTours, posTourAvecPlusPetitDisque, nbTours);
    if (sommet(lesTours[indTourCand1])<sommet(lesTours[indTourCand2]))
    {
        indTourDep = indTourCand1;
        indTourAr = indTourCand2;
    }
    else
    {
        indTourDep = indTourCand2;
        indTourAr = indTourCand1;s
    }
    
}

void determinerToursCandidates(UnePile lesTours[], unsigned int posTourAvecPlusPetitDisque, unsigned int nbTours)
{
    unsigned int indTourCand1;
    unsigned int indTourCand2;
    indTourCand1 = tourSuivante(posTourAvecPlusPetitDisque, nbTours);
    indTourCand2 = tourSuivante(indTourCand1, nbTours);
}


// ---------- Primitives modifiant 1 tour

void remplirTour(unsigned int nbDisques, UnePile lesTours[])
{
    for (unsigned int i = nbDisques; i > 0; i--)
    {
        empiler(lesTours[0], i);
    }
    
}


// ---------- Primitives modifiant plusieurs tours

void initialiserTours(unsigned int nbTours, UnePile lesTours[])
{
    for (unsigned int i = 0; i < nbTours; i++)
    {
        initialiser(lesTours[i]);
    }
    
}

void deplacerDisque(UnePile& tourOrigine, UnePile& tourDestination)
{
    unsigned int disque;
    depiler(tourOrigine, disque);
    empiler(tourDestination, disque);
}

void deplacerPetit(UnePile tours[], unsigned int posTourAvecPlusPetitDisque, unsigned int nbTours)
{
    unsigned int posSuivantePetit;
    posSuivantePetit = tourSuivante(posTourAvecPlusPetitDisque, nbTours);
    deplacerDisque(tours[posTourAvecPlusPetitDisque], tours[posSuivantePetit]);
    posTourAvecPlusPetitDisque = posSuivantePetit;
}


// ---------- Affichages

void afficherTour(UnePile tour)
// paramètre passé par valeur
{
    unsigned int disque;
    cout << "{ ";
    while (!estVide(tour))
    {
        depiler(tour, disque);
        cout << disque << ". ";
    }
    cout << " }";
}


void afficherTours(const UnePile lesTours[], unsigned int nbTours)
{
    for (unsigned int i = 0; i < nbTours; i++)
    {
        cout << "t" << i+1 << " = ";
        afficherTour(lesTours[i]);
        cout << "   ";
    }
    
}


// ---------- Algorithme de résolution du problème des tours de Hanoi

void resoudreToursHanoiManuel(unsigned int nbDisques)
{


    UnePile lesTours[NOMBRE_DE_TOURS];

    unsigned int tourOrigine;       // tour origine du déplacement
    unsigned int tourDestination;   // tour destination du déplacement
    bool deplacementDemande;        // = vrai si, mors de la saisie, un déplacement est demandé, 
                                    // = faux si pas de déplacement demandé

     // Initialiser tours et éléments de la réussite
    initialiserTours(NOMBRE_DE_TOURS, lesTours);
    remplirTour(nbDisques, lesTours);
    afficherTours(lesTours, NOMBRE_DE_TOURS); cout << endl;
       
    // faire des déplacements manuels jusqu'à gagner
    do
    {
        // saisie - verif
       saisieVerifDeplacementDemande(deplacementDemande, tourOrigine, tourDestination, lesTours);

        if (deplacementDemande)
        {
            // faire le déplacement demandé
            deplacerDisque (lesTours[tourOrigine], lesTours[tourDestination]);
            afficherTours(lesTours, NOMBRE_DE_TOURS);
        }
    } while (!(estVide(lesTours[0]) && estVide(lesTours[1])));
    
    
}

/* void resoudreToursHanoiAutomatique(unsigned int nbDisques)
{
    UnePile lesTours[NB_TOURS];
    unsigned int posTourAvecPlusPetitDisque = 0;

    // Préparer les tours
    initialiserTours(lesTours);
    remplirTour(nbDisques, lesTours[0]);
    afficherTours(lesTours);
    cout << endl << "-----------------------------------------------" << endl<< endl;

    // lesTours >> déplacer les disques >> lesTours
    while (true)
    {
        if (sontVides(lesTours[0], lesTours[1]))
        {
            break;
        }

        deplacerPetit(lesTours, posTourAvecPlusPetitDisque);
        afficherTours(lesTours); cout << endl;

        if (sontVides(lesTours[0], lesTours[1]))
        {
            break;
        }

        deplacerAutre(lesTours, posTourAvecPlusPetitDisque);
        afficherTours(lesTours); cout << endl << endl;
    }
} */





/* ---------- Boîte à outils pour Hanoi Manuel 
   -------------------------------------------------------------------*/

   void saisieVerifDeplacementDemande(bool& deplacement, unsigned int& origine, unsigned int& destination, const UnePile lesTours[])
   {
        string demandeSaisie    ;  // la demande de déplacement saisie
        bool reponseOk ;            // indicateur de validité de la réponse saisie : "12", "21", .... "31", ou "0xx"
        
        
        deplacement = false;   // = faux si l'utilisateur saisit "0" (pas de déplacement), vrai s'il saisit une des autres combinaisons autorisées
        cout << endl << " tourOrigine-tourDestination (exple : 12), 0 si pas de deplacement " ;

        do
        {
            // saisie 
            cout << " : " ;
            cin >> demandeSaisie;

            // analyse de validité
            reponseOk = false;
            if (
                (demandeSaisie[0] == '0') 
                || (    (demandeSaisie[0] >= '1') && (demandeSaisie[0] <= '3')
                     && (demandeSaisie[1] >= '1') && (demandeSaisie[1] <= '3')
                   )
               ) 
            {
                if (estDeplacable(lesTours[carToChiffre(demandeSaisie[0])-1], lesTours[carToChiffre(demandeSaisie[1])-1]))
                {
                    reponseOk = true;
                }
                else{
                    cout << "Impossible";
                }
                
            }
        } while (!reponseOk);

        // demandeSaisie >> Analyse de la réponse correcte >>  >> deplacement, [origine, destination] 
        if (demandeSaisie[0] != '0')
        {
            origine = carToChiffre(demandeSaisie[0]) - 1;
            destination = carToChiffre(demandeSaisie[1]) - 1;
            deplacement = true;
        }
   }

      int carToChiffre (char car)
      {
          int chiffre;
          chiffre = int(car-int('0'));
          return chiffre;
      }

      
/* ---------- Boîte à outils pour resolutionToursHanoiAutomatique ()
   -------------------------------------------------------------------*/