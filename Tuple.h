//
//  Tuple.h
//  Project3
//
//  Created by Connor Smith on 3/14/13.
//  Copyright (c) 2013 Connor Smith. All rights reserved.
//

#ifndef __Project3__Tuple__
#define __Project3__Tuple__

#include <iostream>
#include <vector>

class Tuple {
public:
    std::vector<std::string> values;
    
    Tuple();
    Tuple(std::vector<std::string> vals);
};

#endif /* defined(__Project3__Tuple__) */
