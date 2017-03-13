// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile("in.rom", ios::in | ios::binary);
	ofstream outFile("out.bin", ios::out | ios::binary);
	ifstream inTable("table.bin", ios::in | ios::binary);

	uint8_t table[256];
	uint8_t buffer[2];
	uint8_t temp;
	inTable.read((char *)table, 256);
	while (inFile.read((char *)buffer, 2)) {
		buffer[0] = table[buffer[0]];
		buffer[1] = table[buffer[1]];
		temp = buffer[0];
		buffer[0] = buffer[1];
		buffer[1] = temp;
		outFile.write((char *)buffer, 2);
	}
    return 0;
}

