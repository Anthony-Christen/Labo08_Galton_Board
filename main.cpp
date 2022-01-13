/*
  -----------------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 13.01.2021
  But         : Demande à l'utilisateur de creer une planche de galton de son choix en
                en lui demandant d'enter des valeurs, d'afficher sa distribution et de
                recommancer

  Remarque(s) : -

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                Mingw-w64 g++ 11.1.0 (Manzini)
  -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include "PlancheGalton.h"

using namespace std;

int main() {


   PlancheGalton planche1 (10,3);
   PlancheGalton planche4 (30,10);



   return EXIT_SUCCESS;
}
