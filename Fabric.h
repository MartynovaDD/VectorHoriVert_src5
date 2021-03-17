#pragma once

#include "CVectorHori.h"
#include "CVectorVert.h"


class Fabric {
public:
	virtual CVector* Create(string FileName, const vector<double> ss, int n) = 0;
};
class FabricVert :public Fabric {
public:
	virtual CVector* Create(string FileName, const vector<double> ss, int n) { return new CVector0(FileName, ss, n); }
};
class FabricHori :public Fabric {
public:
	virtual CVector* Create(string FileName, const vector<double> ss, int n) { return new CVector1(FileName, ss, n); }
};