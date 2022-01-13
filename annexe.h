/*
  -----------------------------------------------------------------------------------
  Fichier     : annexe.h
  Nom du labo : Labo08_Galton_Board
  Auteur(s)   : Kylian Manzini & Anthony Christen
  Date        : 13.01.2021
  But         : Contient des déclarations de fonctions annexes au programme

  Remarque(s) : -

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3) (Christen)
                Mingw-w64 g++ 11.1.0 (Manzini)
  -----------------------------------------------------------------------------------
*/

#ifndef LABO08_GALTON_BOARD_ANNEXE_H
#define LABO08_GALTON_BOARD_ANNEXE_H

#include <string> //message

/// Demander à l'utilisateur d'entrer un nombre compris entre deux bornes.
/// \param message         CONST STRING - Le message qui est affiché pour demander à l'utilisateur d'entrer un nombre.
/// \param nbrMin          INT          - Nombre minimal
/// \param nbrMax          INT          - Nombre maximal
/// \return                le nombre entré par l'utilisateur.
unsigned int saisieNbrEntreDeuxBornes(const std::string& message,unsigned int nbrMin,unsigned int nbrMax);

/// Demander à l'utilisateur si oui ou non au message affiché.
/// \param message         CONST STRING - Le message qui est affiché à l'utilisateur.
/// \return                booleen.
bool estOui(const std::string& message);


#endif //LABO08_GALTON_BOARD_ANNEXE_H
