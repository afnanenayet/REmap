//
//  sequencer.h
//  REmap
//
//  Created by Afnan Enayet on 8/15/15.
//  Copyright (c) 2015 Afnan Enayet. All rights reserved.
//

#ifndef __REmap__sequencer__
#define __REmap__sequencer__

#include <vector>

class sequencer {
public:
    std::vector < std::vector < int > > findCutLocations (std::vector <std::string>, std::vector < std::vector <int> > );
};

#endif /* defined(__REmap__sequencer__) */
