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

#include <iostream>
#include "PlancheGalton.h"
#include <random>

using namespace std;

// TODO : Transformer cette distribution uniforme de la derniere ligne en distribution de chaque ligne

std::vector<unsigned int> PlancheGalton::getDistribution() const {
   vector<unsigned int> retourDistrib(nbrColonnes, 0);
   random_device rd;  //Will be used to obtain a seed for the random number engine
   mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
   uniform_int_distribution<unsigned int> distrib(0, nbrColonnes);
   for (int i = 0; i < nbrBilles; ++i) {
      unsigned int index = distrib(gen);
      ++retourDistrib[index];
   }
   return retourDistrib;
}

PlancheGalton::PlancheGalton(unsigned int pNbrBilles, unsigned int pHauteur) {
   nbrBilles = pNbrBilles;
   nbrColonnes = pHauteur;
   distribution = getDistribution();
}


using namespace std;

