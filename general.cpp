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

int saisieIntervalle(const int& MIN, const int& MAX, const std::string& MSG_SAISIE, const string& MSG_ERREUR) {
   int entree;
   // Boucle de saisie
   cout << MSG_SAISIE << "["<< MIN << ".." << MAX <<"]" << " : ";
   do {
      // Vérifier si on doit déclencher une erreur
      if (!(cin >> entree) || (entree < MIN || entree > MAX)) {
         cin.clear(); // reset des bits d'erreur
         cout << MSG_ERREUR << endl;
      }
      // Vider le buffer
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
   } while (entree < MIN || entree > MAX);
   return entree;
}

bool estOui(const std::string& MSG_SAISIE){
   char input;
   bool retour,
        error;
   do {
      error = false;
      cout << MSG_SAISIE << " [o/n] : ";
      cin  >> input;
      cout << endl;

      // Detecte si le flux est planté
      if (cin.fail()){
         error = true;
         cin.clear();
      }
      // Si non, assigne une valeur a retour si les entrées sont correcte
      else{
         if (input == 'o' or input == 'O')
            retour = true;
         else if (input == 'n' or input == 'N')
            retour = false;
         else
            error = true;
      }
      // Vider le buffer
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
   } while (error);
   return retour;
}
