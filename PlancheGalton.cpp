/*
-----------------------------------------------------------------------------------
Fichier     : PlancheGalton.cpp
Nom du labo : Labo08_Galton_Board
Auteur(s)   : Kylian Manzini & Anthony Christen
Date        : 13.01.2021
But         : Définition des fonctions de la classe PlancheGalton
Remarque(s) : - Ajout d'une ligne dans la fonction d'affichage afin de
                representer les colonnes
Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
              Mingw-w64 g++ 11.1.0 (Manzini)
-----------------------------------------------------------------------------------
*/

#include <random>             // Pour uniform_int_distribution
#include <algorithm>          // Pour max_element
#include <iostream>           // I/O
#include "PlancheGalton.h"    // Innclusion du fichier d'en-tête.

using namespace std;
using V = vector<int>;

PlancheGalton::PlancheGalton(unsigned int pNbrBilles, unsigned int pHauteur) {
   nbrBilles = pNbrBilles;
   nbrColonnes = pHauteur + 1;
   hauteur = pHauteur;
   distribution = getDistribution();
}

vector<int> PlancheGalton::getDistribution() const {
   vector<int> retourDistrib(nbrColonnes, 0);

   //Les trois prochaines lignes permettents de generer de l'aleatoire.
   //Elles sont directement reprise de la documentation de uniform_int_distribution, ci-dessous :
   //https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<unsigned int> distrib(0, 1);

   //Boucle pour chaque bille lancée dans le planche de galton
   for (size_t i = 0; i < nbrBilles; ++i) {
      double probaColonne = nbrColonnes / 2.;
      //Boucle pour chaque clou rencontre par les billes dans le planche de galton
      for (size_t j = 0; j < hauteur; ++j) {
         //Permet de generer une valeur bool qui decide si la bille va à gauche ou à droite
         if (distrib(gen))
            probaColonne += .5;
         else
            probaColonne -= .5;
      }
      //incremente l'emplacement du vecteur retourDistrib ou la bille est tombée
      ++retourDistrib[floor(probaColonne)];
   }
   return retourDistrib;
}

void PlancheGalton::affichage() const {

   if (!distribution.empty()) {
      // Colonne comportant le plus de billes (colonne la plus haute)
      int colMax = *max_element(distribution.cbegin(), distribution.cend());

      for (int i = colMax; i > 0; --i) {
         for (int j : distribution) {
            if (j - i >= 0) {
               cout << '*';
            } else {
               cout << ' ';
            }
         }
         cout << endl;
      }
      for (size_t i = 0; i < nbrColonnes; ++i) {
         cout << "-";
      }
      cout << endl;
   }
}