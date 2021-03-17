#include "CVectorVert.h"


int CVector0::output(string FileName) {
	filename = FileName;
	ofstream output(FileName, ios_base::app);
	for (int i = 0; i < n; i++) {
		output << s[i] << endl;
		cout << s[i] << endl;
	}
	output << '\n';
	output.close();
	return 0;
}