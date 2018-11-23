//
//  printer.c
//
//  SYSPRAK-CHECKERS-WS1819-GRUPPE11 @LMU UNIVERSITY, MUNICH
//  Copyright © 2018 Alexander Ediz Buenger. All rights reserved.
//

#include "globals.h"

/*
 * Löscht alte Konsoleausgabe (Escape-Sequenz-Befehl)
 */
void clearScreen(){
    printf("\033[H\033[J");
}

/*
 * Gibt Client-ASCII-Intro per Kommandozeile aus
 */
void printIntro(){
    clearScreen();
    printf("\n\n");
    printf("        ______  __  __  ______  ______  __  __  ______  ______  ______\n");
    printf("       /\\  ___\\/\\ \\_\\ \\/\\  ___\\/\\  ___\\/\\ \\/ / /\\  ___\\/\\  == \\/\\  ___\n");
    printf("       \\ \\_____\\ \\_\\ \\_\\ \\_____\\ \\_____\\ \\_\\ \\_\\ \\_____\\ \\_\\ \\_\\/\\_____\n");
    printf("        \\/_____/\\/_/\\/_/\\/_____/\\/_____/\\/_/\\/_/\\/_____/\\/_/ /_/\\/_____/\n");
    printf("\n\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
    printf("            SPIEL: %s | GAME-ID: %s | SPIELER: %d \n", GAMEKINDNAME, game_id, player_num);
    printf("\n");
    printf("--------------------------------------------------------------------------------\n\n");
}

/*
 * Gibt Statusmeldungen / Variablen zum Stand des Spiels per Kommandozeile aus
 */
void printStatus(){
    printf("                    STATUS: Warte auf weitere Befehle\n\n\n");
}

/**
 * Funktion gibt generellen Hilfe-Text auf der Konsole zur Benutzung des Clients aus
 */
void printHelp(){
    //clearScreen();
    printf("--------------------------------------------------------------------------------\n");
    printf("                       Hilfe zur Benutzung des Clients \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Um ein Spiel zu starten, tippe ein: ./sysprak-client -g <GAMEID> -p <PLAYER>\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Benötigte Parameter:\n");
    printf("<GAMEID>: 13-stellige Nummernfolge          \n");
    printf("<PLAYER>: 0 oder 1          \n");
    printf("\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
}

/**
 * Allgemeine Fehlerausgabe, Fehlerart wird Parameterübergabe bei externem Funktionsaufruf mitgegeben
 */
void printError(int code){
    printf("\nFEHLER: ");
    switch(code){
        case 0:
            printf("Unbekannter Fehler. Breche Spiel ab.\n");
            printHelp();
            break;
        case 1:
            printf("Fehlende/falsche GAME-ID oder Spielernummer. Client startet nicht.\n\n");
            printHelp();
            break;
        default:
            printHelp();
            break;
    }
    printf("\n");
}

