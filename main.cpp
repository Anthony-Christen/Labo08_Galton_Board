/*
  -----------------------------------------------------------------------------------
  Fichier     : main.cpp
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
#include "PlancheGalton.h"

using namespace std;

int main() {


   PlancheGalton planche1 (10000,5);
   PlancheGalton planche2 (10000,10);
   PlancheGalton planche3 (10000,20);
   PlancheGalton planche4 (10000,30);

   return EXIT_SUCCESS;
}
