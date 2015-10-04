//
//  plasmid.cpp
//  REmap
//
//  Created by Afnan Enayet on 9/13/15.
//  Copyright (c) 2015 Afnan Enayet. All rights reserved.
//

#include "plasmid.h"

using namespace std;

plasmid::plasmid(std:: vector < std::vector<int>&  > fragmentLengths) {
    
    fragmentCount = int(fragLengths.size()); //TODO fix this
    fragLengths = fragmentLengths;
}

int plasmid::getTotalLength() {
    int fragmentSum = 0;
    
    if (fragLengths.at(0)) {
        for (auto i : fragLengths) {
            fragmentSum += i;
        }
        return fragmentSum;
    }
    
    else {
        return NULL; //if there are no initialized plasmid then there will be no length
    }
}

