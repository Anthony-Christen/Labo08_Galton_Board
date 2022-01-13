/*
-------------------------------------------------------------------------------------
Nom du fichier : general.cpp
Nom du labo    : Labo08_Galton_Board
Auteur(s)      : Kylian Manzini & Anthony Christen
Date creation  : 11.01.2021
Description    : Définitions des fonctions générales déclarées dans general.h.
Remarque(s)    : Les fonctions ci-dessous ont un usage général et sont orientées
                 vers la réutilisabilité.
Compilateur    : Apple clang version 13.0.0 (clang-1300.0.29.3)
-------------------------------------------------------------------------------------
*/

#include <iostream>  // I/O
#include <string>    // Afin d'utiliser un paramètre string.
#include <limits>    // Permet de vider le buffer.
#include "general.h" // Innclusion du fichier d'en-tête.

using namespace std;

// VOIR SI UTILISER UNE AUTRE FONCTION DE SAISIE

int saisieIntervalle(int MIN, int MAX, const string& MSG_ERREUR) {
   int entree;
   // Boucle de saisie
   do {
      // Vérifier si on doit déclencher une erreur
      if (!(cin >> entree) || (entree < MIN || entree > MAX)) {
         cin.clear(); // reset des bits d'erreur
         cout << MSG_ERREUR;
      }
      // Vider le buffer
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
   } while (entree < MIN || entree > MAX);
   return entree;
}
