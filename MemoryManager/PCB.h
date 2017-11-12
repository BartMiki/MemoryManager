#pragma once
#include <list>
#include <vector> 
#include <string>
#include <cmath>
#include "MemoryManager.h"

using namespace std;

class MemoryManager;

class PCB
{
private:
	string name;
	pair<int, bool> * pages;
	int pagesSize;
public:
	string getName();
	pair<int, bool> * getPages();
	void setPages(pair<int, bool> * newPages);
	int getPagesSize();
	void setPagesSize(int num);

	void createPCB(std::string program, MemoryManager & mem, string _name);

	PCB();
	~PCB();
};

