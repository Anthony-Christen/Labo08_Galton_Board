/*
  -----------------------------------------------------------------------------------
  Fichier     : PlancheGalton.h
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 11.01.2021
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) : à compléter

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#ifndef PLANCHE_GALTON_H
#define PLANCHE_GALTON_H

#include <vector>

class PlancheGalton {
      unsigned int nbrBilles;
      unsigned int nbrColonnes;
      std::vector<unsigned int> distribution;
      std::vector<unsigned int> getDistribution() const;
   public:
      PlancheGalton(unsigned int pNbrBilles, unsigned int pHauteur);
};

#endif //PLANCHE_GALTON_H
