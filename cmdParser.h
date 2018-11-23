//
//  cmdparser.h
//
//  SYSPRAK-CHECKERS-WS1819-GRUPPE11 @LMU UNIVERSITY, MUNICH
//  Copyright © 2018 Alexander Ediz Buenger. All rights reserved.
//

#ifndef CMDPARSER_H
#define CMDPARSER_H

int isNumber(char *argument);   // Prüft ob GameID(String) aus Zahlen (Integer) besteht
int isValidGameID(int gameid_len);  // Prüft ob Länge (=Anzahl) der Game-ID korrekt ist
int isValidPlayer(int player_num);  // Prüft ob Spielernummer valide ist
int parseCommandLineArguments(int argc, char **argv);   // Liest Argumente der Kommandozeile mit getopt aus, und überpüft sie

#endif /// CMDPARSER_H
