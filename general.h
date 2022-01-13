/*
-------------------------------------------------------------------------------------
Nom du fichier : general.h
Nom du labo    : Labo08_Galton_Board
Auteur(s)      : Kylian Manzini & Anthony Christen
Date creation  : 11.01.2021
Description    : Prototypes des fonctions générales définies dans general.cpp.
Remarque(s)    : /
Compilateur    : Apple clang version 13.0.0 (clang-1300.0.29.3)
-------------------------------------------------------------------------------------
*/

#ifndef GENERAL_H
#define GENERAL_H

#include <string>

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

#endif // GENERAL_H
