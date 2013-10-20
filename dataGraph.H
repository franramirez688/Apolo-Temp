#ifndef __APOLO__DATA_GRAPH__H
#define __APOLO__DATA_GRAPH__H

#include "mathplot.h"
#include <vector>
#include "Python.h"

enum TypeData
{
	POSITION,
	VELOCITY,
	ACCELERATION,
};

class DataGraph
{
public:
	DataGraph();
	~DataGraph();

template <class T> void enterData(TypeData _type, T data);

private:
	TypeData data;
	vector<double> position;
	vector<double> velocity;
	vector<double> acceleration;

};

#endif //__APOLO__DATA_GRAPH__H