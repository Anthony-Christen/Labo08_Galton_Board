/*
  -----------------------------------------------------------------------------------
  Fichier     : PlancheGalton.cpp
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 13.01.2021
  But         : Contient les fonctions de la classe PlancheGalton

  Remarque(s) : -

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                Mingw-w64 g++ 11.1.0 (Manzini)
  -----------------------------------------------------------------------------------
*/

#include "PlancheGalton.h"
#include <random>

using namespace std;

std::vector<unsigned int> PlancheGalton::getDistribution() const {
   vector<unsigned int> retourDistrib(nbrColonnes, 0);

   //Les trois prochaines lignes permettents de generer de l'aleatoire.
   //Elles sont directement reprise de la documentation de uniform_int_distribution, ci-dessous :
   //https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<unsigned int> distrib(0, 1);

   //Boucle pour chaque bille lancée dans le planche de galton
   for (int i = 0; i < nbrBilles; ++i) {
      double probaColonne = nbrColonnes/2.;
      //Boucle pour chaque clou rencontre par les billes dans le planche de galton
      for (int j = 0; j < hauteur; ++j) {
         //Permet de generer une valeur bool qui decide si la bille va à gauche ou à droite
         if (distrib(gen))
            probaColonne += .5;
         else
            probaColonne -= .5;
      }
      //incremente l'emplacement  du vecteur retourDistrib ou la bille est tombée
      ++retourDistrib[floor(probaColonne)];
   }
   return retourDistrib;
}

PlancheGalton::PlancheGalton(unsigned int pNbrBilles, unsigned int pHauteur) {
   nbrBilles = pNbrBilles;
   nbrColonnes = pHauteur + 1;
   hauteur = pHauteur;
   distribution = getDistribution();
}


using namespace std;

