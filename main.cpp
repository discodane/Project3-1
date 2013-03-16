//
//  main.cpp
//  Project3
//
//  Created by Connor Smith on 3/16/13.
//  Copyright (c) 2013 Connor Smith. All rights reserved.
//

#include "Lex.h"
#include "DatalogProgram.h"

int main(int argc, char* argv[]) {
    Lex lex(argv[1]);
    DatalogProgram* program = new DatalogProgram(lex.tokens);
    program->parse();
	if(program->success==true)
	{
		cout<<"Success!"<<endl;
		cout<<program->print();
		//cout the the toStrings all together;
	}
	else
	{
		cout<<"Failure!"<<endl;
		string k=program->failure();
		cout<<k<<endl;
		//cout the failing line;
	}
    std::cout << "done";
    return 0;
}