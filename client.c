//
//  client.c
//
//  SYSPRAK-CHECKERS-WS1819-GRUPPE11 @LMU UNIVERSITY, MUNICH
//  Copyright © 2018 Alexander Ediz Buenger, Alexandra X, Johannes Dollinger. All rights reserved.
//

#include "globals.h"

int main(int argc, char **argv){

        if(!(parseCommandLineArguments(argc, argv))){
            printError(1);
        }
        else{
            printIntro();
            printStatus();
        }
    
    // 2D DOS:
    
    // Connecte zu Server
    // Server-Dialog I: PROLOG
    // Server-Dialog II: SPIELVERLAUF
    // Server Diaglog III: SPIELENDE
    

    return 0;
    
}
