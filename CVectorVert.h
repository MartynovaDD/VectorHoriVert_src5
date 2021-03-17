#pragma once
#include "CVector.h"
#include "Source.h"

class CVector0 :public CVector {
public:
	CVector0() {}
	using CVector::CVector;
	using CVector::operator=;
	~CVector0() {};
	CVector0(const CVector& other) :
		CVector(other)
	{
	}
	int output(string FileName) override;
};
