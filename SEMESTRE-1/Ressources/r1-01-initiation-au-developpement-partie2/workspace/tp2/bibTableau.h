/**  MODULE bibTableaux 
     regroupe des sous-programmes applicables à des tableaux
     -------------------------------------------------------
But :
    Mettre à dispositon d'un programmeur des sous-programmes applicables aux tableaux.
    Conformes aux exercices des TD n°1 et et 3 de R1.01
    
    Il peut s'agit de tableaux d'entiers ou d'enregistrements de type Personne.
    Les tableaux manipulés doivent être triés par ordre décroissant de valeur.
    Dans le cas des tableaux d'enregistrements de type Personne, ils seront triés par ordre 
    décroissant de nom.
---------

 Date de dernière modification : 23/11/2021
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - td n°2
*/

#ifndef BIBTABLEAU_H
#define BIBTABLEAU_H

// Primitives d'Entrée-Sortie
void afficher (const int tab[], unsigned short int lgTab);

// But : affiche à l'écran le contenu d'aun tableau tab contenant lgTab > 0 éléments
//       si lgTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')

// observateur

/**
 * @brief recherche la première occurence d'une valeur donnée dans un tableau de taille donné
 * 
 * @param tab tableau d'entier
 * @param lgTab longueur du tableau
 * @param val valeur recherchée dans le tableau
 * @param pos indique la position de la potentielle valeur trouvée 
 * @return true quand une valeur a bien été trouvée dans le tableau
 * @return false quand aucune valeur n'a été trouvée dans la tableau
 */
bool recherchePremiereOccDichoEntier(const int tab[], unsigned short int lgTab, int val, unsigned int& pos);


#endif