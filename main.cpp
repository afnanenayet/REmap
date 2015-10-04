//
//  main.cpp
//  REmap
//
//  Created by Afnan Enayet on 8/15/15.
//  Copyright (c) 2015 Afnan Enayet. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include "combogen.h"
#include "plasmid.h"

#define NEWLINE '\n' //makes it easier to visualize newlines
#define lb << endl <<
#define le << endl;

using namespace std;

int main() {
    
    string usrQuit = "n"; //lets the user type in a character and terminate data entry
    
    cout lb "This program allows you to figure out the position of restriction enzyme cuts in a bacterial plasmid based on the length of the remaining fragments";
    cout << NEWLINE;
    cout lb "The key refers to the name of your enzyme, or just what you want to refer the entity that made the cuts as (e.g. EcoR1)";
    cout << NEWLINE;
    vector <vector <int> > vecData, cutData;
    vector <vector <string> > multiName; //stores possible iteration of names
    vector <string> nameData; //stores names
    cout lb "Enter the restriction enzymes, enter q when done."; //getting names of enzymes
    for (int i = 1; usrQuit != "q" && usrQuit != "Q"; i++) {
        vector <int> fragLengths; //adds a row to the multidimensional vecData vector
        cout lb "Enzyme " << i << ": ";
        getline(cin, usrQuit);
        nameData.push_back(usrQuit);
    }
    nameData.pop_back();
    
    combogen calc = combogen();
    multiName = calc.findCombos(nameData);
    usrQuit = "n"; //resetting the input string
    
    for (int i = 0; i < multiName.size(); ++i) { //allows for user input corresponding to each combo of restriction enzymes
        cout << NEWLINE;
        cout << "Enter fragments lengths for";
        vector <int> temp_row;
        
        for (int n = 0; n < multiName[i].size(); ++n) {
            
            if (multiName[i].size() - n == 1) {
                cout << " " << multiName[i].at(n);
            }
            
            else if (multiName[i].size() - n == 2) {
                cout << " " << multiName[i].at(n) << " &";
            }
            
            else cout << " " << multiName[i].at(n) << ",";
        }
        
        while (usrQuit != "q" && usrQuit != "Q") {
            cout lb "::";
            getline(cin, usrQuit);
            temp_row.push_back(atoi(usrQuit.c_str()));
        }
        usrQuit = "n";
        vecData.push_back(temp_row);
    }
    
    plasmid::plasmid primaryPlasmid(vecData);
    cout << "length: ", primaryPlasmid.getLength();
    
    cout << NEWLINE;
    cout << "Enter a key to terminate. ";
    getchar();
    return 0; //success
    
}
