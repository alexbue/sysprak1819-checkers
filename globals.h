//
//  globals.h
//
//  SYSPRAK-CHECKERS-WS1819-GRUPPE11 @LMU UNIVERSITY, MUNICH
//  Copyright © 2018 Alexander Ediz Buenger. All rights reserved.
//

/*
* Alle globalen Objekte werden (vorerst) hier eingebunden:
*    - Library-Funktionen
*    - Eigene Module (Funktionspakete)
*    - Konstanten
     - globale Datentypen
*    - globale Variablen
*
* spätere Einbindung und Nutzung in externen Dateien über jeweils: #include "globals.h"
*
*/

#ifndef GLOBALS_H
#define GLOBALS_H

// Serverseitige, globale Konstanten - sind vorgegeben
#define GAMEKINDNAME    "Checkers"
#define HOSTNAME        "sysprak.priv.lab.nm.ifi.lmu.de"
#define PORTNUMBER      1357

#define GAMEID_LENGTH   13
#define MAX_PLAYERS     2

// POSIX-C Standard Libraries
#include <stdio.h>  // Standard IO-Methoden
#include <unistd.h> //
#include <stdlib.h> // Standard-Funktionen
#include <string.h> // Behandlung von Strings

// Eigene Module
#include "cmdParser.h" // Einlesen und Fehlerüberprüfung der Kommandozeilenargumente zum Start des Clients
#include "printer.h"   // Zentrales Modul zur Textausgabe auf der Konsole


// Eigene globale Datentypen
enum BOOL {FALSE = 0, TRUE = 1}; /* Einführung von Pseudo-Wahrheitsdatentyp BOOL zur besseren Code-Lesbarkeit */
    
// Eigene globale Variablen:
    extern char game_id[GAMEID_LENGTH+1];
    extern int player_num;

#endif //  GLOBALS_H
