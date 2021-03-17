#pragma once
#include "CVector.h"

class CVector;

class CNode {
	CVector* s; int i;
public:
	CNode(CVector* s, int i) { this->s = s; this->i = i; }
	CNode& operator=(double c);
	operator double();
};
