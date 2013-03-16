//
//  Relation.cpp
//  Project3
//
//  Created by Connor Smith on 3/14/13.
//  Copyright (c) 2013 Connor Smith. All rights reserved.
//

#include "Relation.h"

Relation::Relation () {
    name = "";
}

Relation::Relation (Token* n, std::vector<Token*> schema) {
    name = n->getTokensValue();
    columns = new Schema(schema);
}