/*
-------------------------------------------------------------------------------------
Nom du fichier : general.h
Nom du labo    : Labo08_Galton_Board
Auteur(s)      : Kylian Manzini & Anthony Christen
Date creation  : 13.01.2021
Description    : Prototypes des fonctions générales définies dans general.cpp.
Remarque(s)    : /
Compilateur    : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                 Mingw-w64 g++ 11.1.0 (Manzini)
-------------------------------------------------------------------------------------
*/

#ifndef GENERAL_H
#define GENERAL_H

#include <string>

/// Récupérer et contôler la saisie de l'utilisateur si oui ou non au MSG_SAISIE affiché.
/// @param     MSG_SAISIE  message à afficher pour le contexe de la saisie.
/// @param     MSG_ERREUR  message à afficher en cas d'entrée erronée.
/// @return                booleen signifiant oui ou non.
bool estOui(const std::string& MSG_SAISIE, const std::string& MSG_ERREUR="");

/// Récupérer et contôler la saisie de l'utilisateur dans un intervalle donné.
/// @param     MIN         minimum inclus dans l'intervalle.
/// @param     MAX         maximum inclus dans l'intervalle.
/// @param     MSG_SAISIE  message à afficher pour le contexe de la saisie.
/// @param     MSG_ERREUR  message à afficher en cas d'entrée erronée.
/// Return     saisie de l'utilisateur.
/// Exception  n/a
int saisieIntervalle(const int& MIN, const int& MAX, const std::string& MSG_SAISIE, const std::string& MSG_ERREUR="");

#endif // GENERAL_H
