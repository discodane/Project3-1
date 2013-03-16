//
//  Schema.cpp
//  Project3
//
//  Created by Connor Smith on 3/14/13.
//  Copyright (c) 2013 Connor Smith. All rights reserved.
//

#include "Schema.h"

Schema::Schema () {
    
}

Schema::Schema (std::vector<Token*> attrs) {
    for (int i = 0; i < attrs.size(); i++) {
        attributes.push_back(attrs.at(i)->getTokensValue());
    }
}

