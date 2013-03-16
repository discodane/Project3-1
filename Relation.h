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
#include "Fact.h"

class Relation {
public:
    std::string name;
    Schema* columns;
    std::vector<Tuple*> facts;
    
    Relation();
    Relation(Token* n, std::vector<Token*> schema);
    
    void addTuple(Fact f);
    Relation rename(tuple, variable);
    Relation project(tuple, variable);
    Relation select(tuple a, variable);
};

#endif /* defined(__Project3__Relation__) */
