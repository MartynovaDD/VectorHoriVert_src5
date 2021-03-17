#pragma once
#include <map>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "Source.h"
using namespace std;
void AutoTest();

class CNode;
class CVector1;
class CVector {
protected:
	string filename;
	vector<double> s;
	//double* s; 
	int n;
public:
	CVector() { SetZero(); }
	virtual ~CVector() { Clean(); }
	CVector(string FileName, const vector<double> ss, int n) {
		filename = FileName; //s.c_str()
		this->n = n;
		s = ss;
	};
	CVector(const CVector& b) { CopyOnly(b); }

	void Clean() {  SetZero(); }
	void SetZero() { s.clear(), n = 0; }
	void CopyOnly(const CVector& b) {
		if (this != &b)
		{
			s = b.s; n = b.n;
		}
	}
	operator const vector<double> ()const { return s; }
	void print() {
		for (auto i = s.begin(); i != s.end(); ++i) 
			cout << *i << ' ';
		cout << endl;
	}
	int length()const { return n; }
	vector<double> vector()const { return s; }
	CVector& operator=(const CVector& b) {
		if (this != &b) {
			Clean();
			CopyOnly(b);
			return *this;
		}
	}
	CNode operator[](int i) {
		if (i < 0) {
			throw - 1;
		}
		return CNode(this, i);
	}
	const double& operator[](int i)const {
		return s[i];
	}
	string Filename() {
		return filename;
	}
	virtual int output(string FileName) = 0;
	friend class CNode;
	friend CVector1 operator+(const CVector& first, const CVector& second);
	friend CVector1 operator-(const CVector& first, const CVector& second);
};



