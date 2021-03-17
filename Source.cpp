#include "CVector.h"
#include "Source.h"
class CVector;

CNode& CNode::operator=(double c) {
	if (i < 0)throw - 3;
	if (i >= s->n) {
		vector<double> q(s->n);
		for (int j = 0; j < s->n; j++) {
			q[j] = s->s[j];
		}
		for (int j = s->n; j < i; j++) {
			q[j] = 0;
		}
		s->n = i + 1;
		s->s.clear();
		s->s = q;
	}
	s->s[i] = c;
	return*this;
}

CNode::operator double() {
	if (i < 0)throw - 2;
	if (i >= s->n)return 0;
	return s->s[i];
}

