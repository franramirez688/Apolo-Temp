
#include "dataGraph.h"


DataGraph::DataGraph()
{
	Py_Initialize();
	PyRun_SimpleString("import pylab");
	PyRun_SimpleString("pylab.plot(range(5))");
	PyRun_SimpleString("pylab.show()");
	Py_Exit(0);
}

DataGraph::~DataGraph()
{




}

void DataGraph::enterData(TypeData _type, T data)
{
	if (_type==POSITION)
	{


	}
	else if (_type==VELOCITY)
	{


	}
	else if (_type==ACCELERATION)
	{



	}
}