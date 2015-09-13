//
//  plasmid.h
//  REmap
//
//  Created by Afnan Enayet on 9/13/15.
//  Copyright (c) 2015 Afnan Enayet. All rights reserved.
//

#ifndef __REmap__plasmid__
#define __REmap__plasmid__

#include <stdio.h>
#include <vector>
 
class plasmid {
    //instance variables
    int fragmentCount;
    std::vector<int> cutSites;
    std::vector<int>& fragLengths;
    
public:
    plasmid(std::vector<int>&);
    void addCut(int mapLocation);
    std::vector<int> getFragmentLenghts();
    int getTotalLength();
};

#endif /* defined(__REmap__plasmid__) */
