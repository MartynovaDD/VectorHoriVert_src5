#include "Create.h"
#include <string>
#include <iostream>



CVector* create(string str, map<string, Fabric*> factories) {
	vector<string> vec;
	size_t t = 0;
	string res = "";

	while (t < str.size())
	{
		if (str[t] != ' ')
		{
			res += str[t];
		}
		else
		{
			vec.push_back(res);
			res = "";
		}
		t++;
	}
	vec.push_back(res);
	int n = vec[2][0] - 48;
	vector<double> z(n);

	for (int i = 0; i < n; ++i)
	{
		z[i] = double(vec[i + 3][0]) - 48;
	}
	auto search = factories.find(vec[0]);
	if (search == factories.end()) {
		std::cout << "Not found\n";
		throw - 1;
	}
	return factories[vec[0]]->Create(vec[1], z, n);
}

