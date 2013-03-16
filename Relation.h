//
//  Relation.h
//  Project3
//
//  Created by Connor Smith on 3/14/13.
//  Copyright (c) 2013 Connor Smith. All rights reserved.
//

#ifndef __Project3__Relation__
#define __Project3__Relation__

#include <iostream>
#include <vector>

#include "Tuple.h"
#include "Schema.h"

class Relation {
    std::string name;
    Schema* columns;
    std::vector<Tuple> facts;
    
    Relation();
    Relation(Token* n, std::vector<Token*> schema);
};

#endif /* defined(__Project3__Relation__) */
