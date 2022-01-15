/*
  -----------------------------------------------------------------------------------
  Fichier     : PlancheGalton.h
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 11.01.2021
  But         : Déclaration de la classe PlancheGalton, de ses propriétés et de
                ses fonctions.
  Remarque(s) : /
  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#ifndef PLANCHE_GALTON_H
#define PLANCHE_GALTON_H

#include <vector>

class PlancheGalton {
public:
   // Constructeur
   PlancheGalton(unsigned hauteur, unsigned nbrBilles);

   void afficherDistribution() const;

private:
   /// But        Generer la distribution des billes de la planche de Galton
   /// @param     n/a
   /// return     vecteur contenant le nombre de billes de chaque colonne
   /// Exception  n/a
   std::vector<unsigned> genererDistribution() const;

   static unsigned        total;      // nombre de planches créées
   static unsigned        prochainNo;

   const unsigned         no;         // numéro de la planche
   const unsigned         nbrBilles;
   const unsigned         nbrColonnes;
   const unsigned         hauteur;
   const std::vector<unsigned> distribution;
};

#endif //PLANCHE_GALTON_H
