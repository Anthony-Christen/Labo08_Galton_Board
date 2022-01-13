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
      unsigned nbrBilles;
      unsigned nbrColonnes;
      unsigned hauteur;
      std::vector<int> distribution;

      /// Genere une distribution selon la planche
      /// \return    Vector<unsigned int> du nombre de billes par emplacement
      std::vector<int> getDistribution() const;
   public:
      /// Fonction constructeur de PlancheGalton
      PlancheGalton(unsigned nbrBilles, unsigned hauteur);
      void affichage() const;
};

#endif //PLANCHE_GALTON_H
