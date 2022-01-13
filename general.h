/*
  -----------------------------------------------------------------------------------
  Fichier     : general.h
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 13.01.2021
  But         : Contient des déclarations de fonctions annexes au programme

  Remarque(s) : -

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                Mingw-w64 g++ 11.1.0 (Manzini)
  -----------------------------------------------------------------------------------
*/

#ifndef GENERAL_H
#define GENERAL_H

#include <string> //message

//-----------------------------------------------------------------------------------
// Fonction saisieIntervalle
//-----------------------------------------------------------------------------------
// But        récupérer et contôler la saisie de l'utilisateur dans un intervalle
//            donné.
// @param     min         minimum inclus dans l'intervalle.
// @param     max         maximum inclus dans l'intervalle.
// @param     MSG_ERREUR  message à afficher en cas d'entrée erronée.
// Return     saisie de l'utilisateur.
// Exception  n/a
int saisieIntervalle(int min, int max, const std::string& MSG_ERREUR="");


/// Demander à l'utilisateur si oui ou non au message affiché.
/// \param message         CONST STRING - Le message qui est affiché à l'utilisateur.
/// \return                booleen signifie oui ou non.
bool estOui(const std::string& message);


#endif // GENERAL_H
