#!/bin/sh

#  compile_script.sh
#  REmap
#
#  Created by Afnan Enayet on 8/15/15.
#  Copyright (c) 2015 Afnan Enayet. All rights reserved.
echo "Compilation initiated..."
cd /Users/aenayet/Documents/Programming/REmap/REmap
g++ -std=c++14 *.cpp -o REmap
echo "Compilation finished."
