#include "CVector.h"
#include "Source.h"
#include "CVectorVert.h"
#include "CVectorHori.h"

void AutoTest() {
    vector<double> q(3);
    vector<double> v(3);
    for (int i = 0; i < 3; i++) {
        q[i] = i;
    }
    for (int i = 0; i < 3; i++) {
        v[i] = 1;
    }
    string s = "vert.txt";
    CVector0 a(s, q, 3);
    CVector0 b(s, v, 3);
    CVector0 d;
    d = a + b;
    if (d.vector()[0] == 1 && d.vector()[1] == 2 && d.vector()[2] == 3) {
        printf("Autotest passed...\n");
    }
    else {
        printf("Autotest failed...\n");
    }
}