/**  MODULE Fractions
     permettant la manipulation de nombres RATIONNELS
     Implémentation proche d'un Type Abstrait de Données (TAD) 
     ----------------------------------------------------------------------
But :
    En tant que TAD, il met à disposition :
    - Un type Fraction, composé :
        ...d'un numérateur, entier portant le signe de la fraction
        ...d'un dénominaeur > 0

    - Une constante FRACTIONNULLE = 0/1
    - Des primitives (= sous-programmes) permettant de :
        ...faire des calculs entre fractions : addition, soustraction, multiplication, division
        ...comparer des fractions : égal, supérieur, inférieur
        ...afficher à l'écran une fraction ou saisir une fraction au clavier

    Afin de se rapprocher de l'usage mathématique, toutes les primitives de calcul mathématique :
    - attendent en paramètre donnée des fractions irréductibles
    - produisent des fractions irréductibles.
    L'utilisation du type Fraction impose par ailleurs que le numérateur soit porteur du signe de la fraction et que le dénominateur est > 0.
---------

 Date de dernière modification : 17/11/2021
 Auteur : T. Brierre
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - td n°2
*/

#ifndef FRACTIONS_H
#define FRACTIONS_H


/**
 * @brief Definition du type fraction
 * 
 */
struct Fraction
{
    int num; // numérateur de la fraction
    unsigned int den; // dénominateur de la fraction
};

// Constants disponibles

const Fraction FRACTION_NULLE = {0,1};

// Constructeurs



// observateurs



// modificateurs

Fraction reduire(Fraction frac);



// calculs

/**
 * @brief additionner deux fractions
 * 
 * @param frac1 La première fraction à additionner
 * @param frac2 La deuxième fraction à additionner
 * @return Une fraction somme 
 */
Fraction additionner(Fraction frac1, Fraction frac2);



// entrées / sorties

/**
 * @brief Retourne une fraction irréductible à partir de 2 valeurs entières saisies au clavier
 * 
 * @return Fraction 
 * @warning post-condition : la fraction retournée est une fraction irréductible normalisée
 */
Fraction saisir();


/**
 * @brief affiche à l'écran une fraction sous sa forme irréductible
 * 
 * @param frac la fraction à afficher 
 * @warning pré-condition : le paramètre frac est une fraction irréductible
 */
void afficher (const Fraction& frac);

//convertisseurs



#endif


