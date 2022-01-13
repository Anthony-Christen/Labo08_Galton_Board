/*
  -----------------------------------------------------------------------------------
  Fichier     : annexe.cpp
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 13.01.2021
  But         : Contient les fonctions déclarée dans annexe.h.

  Remarque(s) : -

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                Mingw-w64 g++ 11.1.0 (Manzini)
  -----------------------------------------------------------------------------------
*/
#include "annexe.h"
#include <iostream>    // input et output
#include <limits>      // numeric_limits

using namespace std;

unsigned int saisieNbrEntreDeuxBornes(const std::string &message, unsigned int nbrMin, unsigned int nbrMax) {
   unsigned int nbr;
   bool error;
   do
   {
      error = false;
      cout << message << " [" << nbrMin << ".." << nbrMax << "] : ";
      cin >> nbr;
      if (cin.fail()){
         error = true;
         cin.clear();
      }
      else if (!(nbr >= nbrMin and nbr <= nbrMax))
         error = true;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while (error);

   return nbr;
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
