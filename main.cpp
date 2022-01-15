/*
  -----------------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 11.01.2021
  But         : Demande à l'utilisateur une hauteur et un nombre de billes afin de
                simuler un plateau de Galton. Le résultat de la simulation est
                ensuite affiché à l'utilisateur. Finalement, l'utilisateur est
                invité à recommencer une simulation ou à quitter le programme.
  Remarque(s) : /
  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#include <cstdlib>         // EXIT_SUCCESS
#include "PlancheGalton.h" // classe PlancheGalton
#include "general.h"       // messageBienvenue(), saisieIntervalle(), estOui()

using namespace std;

// A voir :
// --------
// - Ajouter destructeur et autres constructeurs ? (pas utile dans notre programme)
// - Ajouter getter/setter ? (pas utile dans notre programme)

int main() {
   // -------------------------------------------------------------------------------
   // Constantes
   // -------------------------------------------------------------------------------
   const string   MSG_BIENVENUE   = "Ce programme simule une planche de Galton",
                  MSG_HAUTEUR     = "> Saisissez la hauteur de la planche ",
                  MSG_BILLES      = "> Saisissez le nombre de billes     ",
                  MSG_RECOMMENCER = "> Voulez-vous recommencer ",
                  MSG_ERREUR      = "> Erreur d'entree, veuillez reessayer : ";

   const unsigned MAX_BILLES      = 1000,
                  MIN_BILLES      = 1,
                  MAX_HAUTEUR     = 100,
                  MIN_HAUTEUR     = 1;

   //--------------------------------------------------------------------------------
   // Message de bienvenue
   //--------------------------------------------------------------------------------
   messageBienvenue(MSG_BIENVENUE, '=');

   do {
      // ----------------------------------------------------------------------------
      // Saisies utilisateur
      // ----------------------------------------------------------------------------
      unsigned hauteur   = saisieIntervalle(MIN_HAUTEUR , MAX_HAUTEUR, MSG_HAUTEUR,
                                            MSG_ERREUR);
      unsigned nbrBilles = saisieIntervalle(MIN_BILLES , MAX_BILLES, MSG_BILLES,
                                            MSG_ERREUR);

      // ----------------------------------------------------------------------------
      // Generation de la planche de Galton et affichage de la distribution
      // ----------------------------------------------------------------------------
      PlancheGalton planche(hauteur, nbrBilles);
      planche.afficherDistribution();

   } while(estOui(MSG_RECOMMENCER)); // Recommencer/quitter le programme

   return EXIT_SUCCESS;
}
