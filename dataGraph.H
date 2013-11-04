#ifndef __APOLO__DATA_GRAPH__H
#define __APOLO__DATA_GRAPH__H

#include "mathplot.h"


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


template<class T> 
void enterData(TypeData _type, T data);

private:
	TypeData _data;
	vector<double> pos;
	vector<double> vel;
	vector<double> acel;

};

#endif //__APOLO__DATA_GRAPH__H