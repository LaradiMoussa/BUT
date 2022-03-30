/**
 * @file bibTableaux.h
 * @author T.Brierre
 * @brief interface du module bibTableaux
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef BIBTABLEAUX_H
#define BIBTABLEAUX_H
#include "personne.h"

void afficher (const Personne tab[], unsigned short int lgTab);
// But : affiche à l'écran le contenu d'un tableau tab contenant lgTab > 0 éléments de type Personne
//       si lgTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')

void afficher (const int tab[], unsigned short int lgTab);

// But : affiche à l'écran le contenu d'aun tableau tab contenant lgTab > 0 éléments
//       si lgTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')


/**
 * @brief Trie un tableau d'entiers selon la méthode du tri à bulle
 * 
 * @param tab tableau à trier 
 * @param nbTab taille du tableau à trier
 */
void triBulle(int tab[], unsigned int nbTab);

/**
 * @brief Trie un tableau de Personnes selon la méthode du tri à bulle
 * 
 * @param tab tableau à trier
 * @param nbTab taille du tableau à trier
 */
void triBulle(Personne tab[], unsigned int nbTab);

/**
 * @brief Trie un tableau d'entiers selon la méthode du tri par insertion
 * 
 * @param tab tableau à trier
 * @param nbTab taille du tableau à trier
 */
void triParInsertion(int tab[], unsigned int nbTab);

/**
 * @brief Trie un tableau d'entiers selon la méthode du tri par sélection de place
 * 
 * @param tab tableau à trier
 * @param nbTab taille du tableau à trier
 */
void triParSelectionDePlace(int tab[], unsigned int nbTab);


#endif