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

   // variables constantes
   const string MSG_BIENVENU    = "Ce programme cree une planche de galton et affiche sa distribution",
                MSG_HAUTEUR     = "Hauteur de la planche ",
                MSG_BILLES      = "Nbr de billes lancee ",
                MSG_RECOMMENCER = "Voulez-vous recommencer ? ";

   const unsigned int MAX_BILLES  = 10000,
                      MIN_BILLES  = 0,
                      MAX_HAUTEUR = 10000,
                      MIN_HAUTEUR = 0;

   // message de bienvenu
   cout << MSG_BIENVENU << endl;

   do {
   // variables entrées par l'utilisateur
   unsigned int iHauteur = saisieNbrEntreDeuxBornes(MSG_HAUTEUR, MIN_HAUTEUR , MAX_HAUTEUR);
   unsigned int iBilles = saisieNbrEntreDeuxBornes(MSG_BILLES, MIN_BILLES , MAX_BILLES);

   // generation de la planche avec les entrées de l'utilisateur
   PlancheGalton planche(iBilles, iHauteur);

   // TODO : AFFICHAGE
   // affichage

   }
   // Recommencer le programme
   while(estOui(MSG_RECOMMENCER));

   return EXIT_SUCCESS;
}
