/*
  -----------------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 13.01.2021
  But         : Demande à l'utilisateur de creer une planche de galton de son choix en
                en lui demandant d'entrer des valeurs, d'afficher sa distribution et de
                recommencer.

  Remarque(s) : -

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                Mingw-w64 g++ 11.1.0 (Manzini)
  -----------------------------------------------------------------------------------
*/

#include <cstdlib>         // EXIT_SUCCESS
#include <iostream>        // output
#include <string>          // messages
#include "PlancheGalton.h" // classe PlancheGalton
#include "general.h"       // fonctions annexes

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
   const string MSG_RECOMMENCER = "Voulez-vous recommencer ? ";


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
   cout << "Saisissez une hauteur [" << H_MIN << ", " << H_MAX << "] : ";
   int iHauteur = saisieIntervalle(H_MIN, H_MAX, MSG_ERREUR);

   cout << "Saisissez un nombre de billes [" << BILLES_MIN << ", " << BILLES_MAX << "] : ";
   int iBilles = saisieIntervalle(BILLES_MIN, BILLES_MAX, MSG_ERREUR);

   // -------------------------------------------------------------------------------
   // Planche de Galton
   // -------------------------------------------------------------------------------

   PlancheGalton planche(iBilles, iHauteur);

   
   // TODO : AFFICHAGE
   // affichage

   }
   // Recommencer le programme
   while(estOui(MSG_RECOMMENCER));
  
  
   //--------------------------------------------------------------------------------
   // Fin du programme
   //--------------------------------------------------------------------------------
   cout << endl << endl << MSG_QUITTER;
   cin.ignore(numeric_limits<streamsize>::max(),'\n');
  

   return EXIT_SUCCESS;
}
