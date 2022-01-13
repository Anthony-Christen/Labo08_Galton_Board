/*
  -----------------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 11.01.2021
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) : à compléter

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include "PlancheGalton.h"
#include "general.h"

using namespace std;

int main() {
   // -------------------------------------------------------------------------------
   // Constantes
   // -------------------------------------------------------------------------------
   const int H_MIN            = 1;    // Hauteur minimum de la planche
   const int H_MAX            = 100;  // Hauteur maximum de la planche
   const int BILLES_MIN       = 1;    // Nombre de billes minimum
   const int BILLES_MAX       = 1000; // Nombre de billes maximum
   const string MSG_BIENVENUE = "";
   const string MSG_INVITE    = "";
   const string MSG_ERREUR    = "";
   const string MSG_QUITTER   = "Presser ENTER pour quitter ";

   //--------------------------------------------------------------------------------
   // Message de bienvenue
   //--------------------------------------------------------------------------------
   cout << "====================================" << endl;
   cout << MSG_BIENVENUE << endl;
   cout << "====================================" << endl << endl;

   // -------------------------------------------------------------------------------
   // Saisies utilisateur
   // -------------------------------------------------------------------------------
   cout << "Saisissez une hauteur [" << H_MIN << ", " << H_MAX << "] : ";
   int hauteur = saisieIntervalle(H_MIN, H_MAX, MSG_ERREUR);

   cout << "Saisissez un nombre de billes [" << BILLES_MIN << ", " << BILLES_MAX << "] : ";
   int nb_billes = saisieIntervalle(BILLES_MIN, BILLES_MAX, MSG_ERREUR);

   // -------------------------------------------------------------------------------
   // Planche de Galton
   // -------------------------------------------------------------------------------

   //--------------------------------------------------------------------------------
   // Fin du programme
   //--------------------------------------------------------------------------------
   cout << endl << endl << MSG_QUITTER;
   cin.ignore(numeric_limits<streamsize>::max(),'\n');

   return EXIT_SUCCESS;
}
