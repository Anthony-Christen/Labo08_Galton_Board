/*
  -----------------------------------------------------------------------------------
  Fichier     : general.cpp
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 13.01.2021
  But         : Contient les fonctions déclarée dans annexe.h.

  Remarque(s) : -

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                Mingw-w64 g++ 11.1.0 (Manzini)
  -----------------------------------------------------------------------------------
*/

#include "general.h" // Innclusion du fichier d'en-tête.
#include <iostream>  // input et output
#include <string>    // Afin d'utiliser un paramètre string.
#include <limits>    // Permet de vider le buffer.

using namespace std;


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


bool estOui(const std::string& message){
   char input;
   bool retour,
        error;
   do {
      error = false;
      cout << message << " [o/n] : ";
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
      // Vide le buffer
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while (error);

   return retour;
};