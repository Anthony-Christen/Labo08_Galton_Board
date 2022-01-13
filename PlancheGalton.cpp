/*
  -----------------------------------------------------------------------------------
  Fichier     : PlancheGalton.cpp
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 11.01.2021
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) : à compléter

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#include <random> // uniform_int_distribution()
#include <algorithm>
#include <iostream>
#include "PlancheGalton.h"

using namespace std;
using vecteur = vector<int>;

PlancheGalton::PlancheGalton(unsigned nbrBilles, unsigned hauteur)
: nbrBilles(nbrBilles), nbrColonnes(hauteur + 1), hauteur(hauteur)
{
   distribution = getDistribution();
}

vector<int> PlancheGalton::getDistribution() const {
   vector<int> retourDistrib(nbrColonnes, 0);

   //Les trois prochaines lignes permettents de generer de l'aleatoire.
   //Elles sont directement reprise de la documentation de uniform_int_distribution, ci-dessous :
   //https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<unsigned> distrib(0, 1);

   //Boucle pour chaque bille lancée dans le planche de galton
   for (int i = 0; i < nbrBilles; ++i) {
      double probaColonne = nbrColonnes / 2.;
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

void PlancheGalton::affichage() const {
   /*
      i  --> niveau courant
      *j --> nombre de billes dans la colonne courante
            *        (niveau 6 = colMax)
            *   *    (niveau 5)
      *     *   *    (niveau 4)
      *   * *   *    (niveau 3)
      *   * * * *    (niveau 2)
      *   * * * * *  (niveau 1)
      --------------------------------------
      4 0 3 6 2 5 1  (nombre de billes = *j)
   */

   if (!distribution.empty()) {
      // Colonne comportant le plus de billes (colonne la plus haute)
      int colMax = *max_element(distribution.cbegin(), distribution.cend());

      for (int i = colMax; i > 0; --i) {
         for (auto j = distribution.cbegin(); j != distribution.cend(); ++j) {
            if (*j - i >= 0) {
               cout << '*';
            } else {
               cout << ' ';
            }
         }
         cout << endl;
      }
   }
}