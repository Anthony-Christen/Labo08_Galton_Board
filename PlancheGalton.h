/*
  -----------------------------------------------------------------------------------
  Fichier     : PlancheGalton.h
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 13.01.2021
  But         : Contient les déclarations de la classe PlancheGalton

  Remarque(s) : -

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                Mingw-w64 g++ 11.1.0 (Manzini)
  -----------------------------------------------------------------------------------
*/

#ifndef PLANCHE_GALTON_H
#define PLANCHE_GALTON_H

#include <vector>

class PlancheGalton {
      unsigned int nbrBilles;
      unsigned int nbrColonnes;
      unsigned int hauteur;
      std::vector<unsigned int> distribution;

      /// Genere une distribution selon la planche
      /// \return    Vector<unsigned int> du nombre de billes par emplacement
      std::vector<unsigned int> getDistribution() const;
   public:
      /// Fonction constructeur de PlancheGalton
      PlancheGalton(unsigned int pNbrBilles, unsigned int pHauteur);
};

#endif //PLANCHE_GALTON_H
