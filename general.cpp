/*
-------------------------------------------------------------------------------------
Nom du fichier : general.cpp
Nom du labo    : Labo08_Galton_Board
Auteur(s)      : Kylian Manzini & Anthony Christen
Date creation  : 13.01.2021
Description    : Définitions des fonctions générales déclarées dans general.h.
Remarque(s)    : Les fonctions ci-dessous ont un usage général et sont orientées
                 vers la réutilisabilité.
Compilateur    : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                 Mingw-w64 g++ 11.1.0 (Manzini)
-------------------------------------------------------------------------------------
*/

#include <iostream>  // I/O
#include <limits>    // Afin de vider le buffer
#include "general.h" // Inclusion du fichier d'en-tête

using namespace std;


void messageBienvenue(const string& MSG_BIENVENUE, char motif) {
   string ligne;
   for (int i = 0; i < MSG_BIENVENUE.length(); ++i) {
      ligne += motif;
   }

   cout << ligne << endl;
   cout << MSG_BIENVENUE << endl;
   cout << ligne << endl << endl;
}

int saisieIntervalle(const int& MIN, const int& MAX, const string& MSG_SAISIE, const string& MSG_ERREUR) {
   int entree;
   bool error;
   // Boucle de saisie
   do {
      error = false;
      cout << MSG_SAISIE << "["<< MIN << ".." << MAX <<"]" << " : ";
      // Vérifier si on doit déclencher une erreur
      if (!(cin >> entree) || (entree < MIN || entree > MAX)) {
         cin.clear(); // reset des bits d'erreur
         cout << MSG_ERREUR << endl;
      }

      cin.ignore(numeric_limits<streamsize>::max(),'\n'); // Vider le buffer
   } while (entree < MIN || entree > MAX);

   return entree;
}

bool estOui(const string& MSG_SAISIE,const string& MSG_ERREUR){
   char entree;
   bool retour,
        error;
   do {
      error = false;
      cout << endl << MSG_SAISIE << "[O|N] : ";

      // Detecte si le flux est planté
      if (!(cin >> entree)) {
         error = true;
         cin.clear();
      } else { // Si non, assigne une valeur a retour si les entrées sont correctes
         if (entree == 'o' or entree == 'O') {
            retour = true;
         } else if (entree == 'n' or entree == 'N') {
            retour = false;
         }
         else{
            error = true;
            cout << MSG_ERREUR << endl;
         }
      }

      cin.ignore(numeric_limits<streamsize>::max(),'\n'); // Vider le buffer
   } while(error);

   cout << endl;

   return retour;
}
