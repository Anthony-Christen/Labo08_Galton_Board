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

/// But        Afficher un message de bienvenue avec un moitf particuler
/// @param     MSG_BIENVENUE  message à afficher
/// @param     motif          motif à répéter pour l'affichage du message de
///                           bienvenue
/// return     n/a
/// Exception  n/a
void messageBienvenue(const std::string& MSG_BIENVENUE, char motif = '-');

/// But        Demander à l'utilisateur si oui ou non au MSG_SAISIE affiché.
/// @param     MSG_SAISIE  message affiché à l'utilisateur.
/// return     booleen signifiant oui ou non.
/// Exception  n/a
bool estOui(const std::string& MSG_SAISIE);

/// But        récupérer et contôler la saisie de l'utilisateur dans un intervalle
///            donné.
/// @param     min         minimum inclus dans l'intervalle.
/// @param     max         maximum inclus dans l'intervalle.
/// @param     MSG_SAISIE  message affiché à l'utilisateur.
/// @param     MSG_ERREUR  message à afficher en cas d'entrée erronée.
/// Return     saisie de l'utilisateur.
/// Exception  n/a
int saisieIntervalle(const int& MIN, const int& MAX, const std::string&
                     MSG_SAISIE, const std::string& MSG_ERREUR = "");

#endif // GENERAL_H
