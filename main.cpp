#include <iostream>
#include "comms.h"
#include "letterDict.h"
using namespace std;

int main () {
    //Welcoming the user
    cout << TextWelcomingUser << endl;
    
    //Loop to grab phrases
    string Phrase;

    while (true)
    {
        getline(cin, Phrase);
        
        //string breakpoint = strcat(break1, break2);

        if (Phrase == "exit") {
            break;
        }
    }
    

}