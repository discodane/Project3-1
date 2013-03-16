#include <string>
#include <vector>
#include <sstream>
#include "Predicate.h"
#include "Query.h"

using namespace std;

//uses this part of the grammar
//<Query> <Query List Tail>
class QueryList
{

public:

	QueryList();
	~QueryList();
	vector<Query*>qvec;
	void add_que(Query* t);
	vector<Predicate*> j;
	string print();
	int qlc;

private:
};