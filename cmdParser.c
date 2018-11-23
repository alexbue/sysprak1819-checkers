//
//  cmdparser.c
//
//  SYSPRAK-CHECKERS-WS1819-GRUPPE11 @LMU UNIVERSITY, MUNICH
//  Copyright © 2018 Alexander Ediz Buenger. All rights reserved.
//

#include "globals.h"

char game_id[GAMEID_LENGTH+1];
int player_num = -1;

// Prüft ob GameID(String) aus Zahlen (Integer) besteht
int isNumber(char *argument){
    char *ptr = NULL;
    ptr = argument;
    while(ptr){
        if(*ptr <= '9' && *ptr >= '0'){
            ptr++;
        }
        else{
            if(*ptr == '\0'){
                return TRUE;
            }
            else{
                return FALSE;
            }
        }
    }
    return TRUE;
}

// Prüft ob Länge (=Anzahl) der Game-ID korrekt ist
int isValidGameID(int gameid_len){
    if(gameid_len == GAMEID_LENGTH){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

// Prüft ob Spielernummer valide ist
int isValidPlayer(int player_num){
    if(player_num >= 0 && player_num < MAX_PLAYERS){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

/* Liest Argumente der Kommandozeile mit getopt aus, und überpüft ob:
    (I)     genug Argumente vorhanden sind (aktuell 2)
    (II)    Argumente valide sind
    (III)   wenn valide, speichert die Argumente in globalen Variablen
    Gibt ansonsten FALSE zur Auswertung aus aus.
 
 */
int parseCommandLineArguments(int argc, char **argv){
    if(argc < 3){
        return FALSE;
    }
    else{
        int opt;
        while( (opt = getopt(argc, argv, "g:p:")) != -1 ){
            switch(opt){
                case 'g':
                    if(!(isNumber(optarg)) || !(isValidGameID((int)strlen(optarg)))){
                        return FALSE;
                    }
                    else{
                         strcpy(game_id, optarg);
                    }
                    break;
                    
                case 'p':
                    if(!(isNumber(optarg)) || !(isValidPlayer(atoi(optarg)))){
                        return FALSE;
                    }
                    else{
                        player_num = atoi(optarg);
                    }
                    break;
                    
                default:
                    return FALSE;
                    break;
            }
        }
    }
    return TRUE;
}
