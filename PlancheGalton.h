/*
-------------------------------------------------------------------------------------
Fichier     : PlancheGalton.h
Nom du labo : Labo08_Galton_Board
Auteur(s)   : Kylian Manzini & Anthony Christen
Date        : 13.01.2021
But         : Déclaration de la classe PlancheGalton et de ses membres
Remarque(s) : -
Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
              Mingw-w64 g++ 11.1.0 (Manzini)
-------------------------------------------------------------------------------------
*/

#ifndef PLANCHE_GALTON_H
#define PLANCHE_GALTON_H

#include <vector>

class PlancheGalton {
public:
   // Constructeur
   // ------------
   PlancheGalton(unsigned hauteur, unsigned nbrBilles);

   // Fonctions membres
   // -----------------
   /// But  Generer la distribution des billes de la planche de Galton
   void genererDistribution();

   /// But  Afficher la distribution des billes de la planche de Galton
   void affichage() const;

   // Surcharge
   // ---------
   /// But        Afficher la distribution en utilisant l'opérateur de flux <<
   /// @param     os  flux de sortie
   /// @param     pg  objet de la classe PlancheGalton
   /// return     flux de sortie
   /// Exception  n/a
   friend std::ostream& operator<<(std::ostream& os, const PlancheGalton& pg);

private:
   static unsigned       prochainNo;

   const unsigned        no;           // numéro de la planche
   const unsigned        nbrBilles;
   const unsigned        nbrColonnes;
   const unsigned        hauteur;
   std::vector<unsigned> distribution; // nombre de billes de chaque colonne
};

#endif //PLANCHE_GALTON_H
