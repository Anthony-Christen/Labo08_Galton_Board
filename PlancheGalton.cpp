/*
-------------------------------------------------------------------------------------
Fichier     : PlancheGalton.cpp
Nom du labo : Labo08_Galton_Board
Auteur(s)   : Kylian Manzini & Anthony Christen
Date        : 13.01.2021
But         : Définition des fonctions de la classe PlancheGalton
Remarque(s) : - Ajout de lignes verticales dans la fonction d'affichage afin de
                representer les colonnes
Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
              Mingw-w64 g++ 11.1.0 (Manzini)
-------------------------------------------------------------------------------------
*/

#include <random>             // Pour uniform_int_distribution
#include <algorithm>          // max_element()
#include <iostream>           // I/O
#include "PlancheGalton.h"    // Inclusion du fichier d'en-tête.

using namespace std;

using vecteur = vector<unsigned>;

unsigned PlancheGalton::prochainNo = 1;

PlancheGalton::PlancheGalton(unsigned hauteur, unsigned nbrBilles)
: hauteur(hauteur), nbrBilles(nbrBilles), nbrColonnes(hauteur + 1), no(prochainNo)
, distribution(genererDistribution()) {
   ++prochainNo;
}

vecteur PlancheGalton::genererDistribution() const {
   vecteur retourDistrib(nbrColonnes, 0);

   //Les trois prochaines lignes permettents de generer de l'aleatoire.
   //Elles sont directement reprises de la documentation de
   //uniform_int_distribution, ci-dessous :
   //https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<unsigned> distrib(0, 1);

   // Boucle pour chaque bille lancée dans le planche de galton
   for(unsigned i = 0; i < nbrBilles; ++i) {
      double probaColonne = nbrColonnes / 2.;

      // Boucle pour chaque clou rencontre par la bille dans le planche de galton
      for(unsigned j = 0; j < hauteur; ++j) {

         //Permet de generer une valeur bool qui decide si la bille va à gauche ou à droite
         if (distrib(gen))
            probaColonne += .5;
         else
            probaColonne -= .5;
      }
      // Incremente l'emplacement du vecteur retourDistrib ou la bille est tombée
      ++retourDistrib[floor(probaColonne)];
   }

   return retourDistrib;
}

void PlancheGalton::afficherDistribution() const {
   cout << endl << "Planche de Galton numero " << no << endl;

   if (!distribution.empty()) {
      // Nombre de billes de la colonne comportant le plus de billes (colonne la
      // plus haute)
      unsigned colMax = *max_element(distribution.cbegin(), distribution.cend());

      cout << endl;
      for(unsigned niveau = colMax; niveau > 0; --niveau) {
         for(auto j = distribution.cbegin(); j != distribution.cend(); ++j) {
            cout << '|';
            if ((int)*j - (int)niveau >= 0) { // *j --> nombre de billes
               cout << '*';
            } else {
               cout << ' ';
            }
         }
         cout << '|' << endl;
      }
      cout << endl;

      if (hauteur > 50) {
         cout << "/!\\ Avec les parametres choisis, il est possible de devoir "
                 "redimensionner la fenetre /!\\" << endl;
      }
   }

   /*
      Exemple

            *        (niveau 6 = colMax)
            *   *    (niveau 5)
      *     *   *    (niveau 4)
      *   * *   *    (niveau 3)
      *   * * * *    (niveau 2)
      *   * * * * *  (niveau 1)
      --------------------------------------
      4 0 3 6 2 5 1  (nombre de billes = *j)
   */
}