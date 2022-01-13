/*
-----------------------------------------------------------------------------------
Fichier     : main.cpp
Nom du labo : Labo08_Galton_Board
Auteur(s)   : Kylian Manzini & Anthony Christen
Date        : 13.01.2021
But         : Demande à l'utilisateur de creer une planche de galton en
Remarque(s) : -
Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
              Mingw-w64 g++ 11.1.0 (Manzini)
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
   const string MSG_BIENVENUE   = "Ce programme cree une planche de galton et affiche sa distribution",
                MSG_HAUTEUR     = "Hauteur de la planche ",
                MSG_BILLES      = "Nbr de billes lancee  ",
                MSG_RECOMMENCER = "Voulez-vous recommencer ? ",
                MSG_ERREUR      = "Erreur. Recommencer la saisie.";

   const unsigned int MAX_BILLES  = 1000,
                      MIN_BILLES  = 1,
                      MAX_HAUTEUR = 100,
                      MIN_HAUTEUR = 1;

   //--------------------------------------------------------------------------------
   // Message de bienvenue
   //--------------------------------------------------------------------------------
   cout << "====================================" << endl;
   cout << MSG_BIENVENUE << endl;
   cout << "====================================" << endl << endl;

   do {
      // -------------------------------------------------------------------------------
      // Saisies utilisateur
      // -------------------------------------------------------------------------------

      int iHauteur = saisieIntervalle(MIN_HAUTEUR , MAX_HAUTEUR, MSG_HAUTEUR, MSG_ERREUR);
      int iBilles  = saisieIntervalle(MIN_BILLES , MAX_BILLES, MSG_BILLES, MSG_ERREUR);

      // -------------------------------------------------------------------------------
      // Generation et affichage de la planche de galton
      // -------------------------------------------------------------------------------
      PlancheGalton planche(iBilles, iHauteur);
      planche.affichage();

   }
   // Recommencer le programme
   while(estOui(MSG_RECOMMENCER,MSG_ERREUR));

   return EXIT_SUCCESS;
}
