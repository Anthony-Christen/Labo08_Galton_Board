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

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include "PlancheGalton.h"

using namespace std;
using vecteur = vector<int>;

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

   // tester avec d'autres valeurs
   vector<int> v = {4, 0, 3, 6, 2, 5, 1};

   if (!v.empty()) {
      // Colonne comportant le plus de billes (colonne la plus haute)
      int colMax = *max_element(v.cbegin(), v.cend());

      for (int i = colMax; i > 0; --i) {
         for (auto j = v.cbegin(); j != v.cend(); ++j) {
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