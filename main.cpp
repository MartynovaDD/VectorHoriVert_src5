#include "CVector.h"
#include "Source.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>  
#include "Create.h"
#include "Fabric.h"
#include "CVectorHori.h"
#include "CVectorVert.h"
using namespace std;


int main(void)
{
	try {
		AutoTest();
		ifstream input("data.txt");
		if (!input)
		{
			cout << "Error! Cannot open file..." << endl;
			return 1;
		}
		else {
			ofstream output1("hori.txt");
			ofstream output2("vert.txt");
			output1.close();
			output2.close();
			input.close();
			ifstream file("data.txt");
			vector<CVector*> vec;
			map<string, Fabric*> factories;
			factories["Hori"] = new FabricHori;
			factories["Vert"] = new FabricVert;
			string str;
			while (getline(file, str))
			{
				vec.push_back(create(str, factories));
			}
			file.close();

			for (auto it = vec.begin(); it != vec.end(); ++it) {
				cout << (*it)->Filename() << endl;
				(*it)->output((*it)->Filename());
				delete (*it);
			}
			file.close();
			
			return 0;
		}
	}
	catch (int err) { printf("error=%d\n", err); }
}




