#include "PCB.h"

string PCB::getName()
{
	return name;
}

pair<int, bool> * PCB::getPages()
{
	return pages;
}

void PCB::setPages(pair<int, bool> * newPages)
{
	pages = newPages;
}

int PCB::getPagesSize()
{
	return pagesSize;
}

void PCB::setPagesSize(int num)
{
	pagesSize = num;
}

void PCB::createPCB(string program, MemoryManager & mem, string _name)
{
	name = _name;
	mem.allocateMemory(this, program, program.size());
}

PCB::PCB()
{
}

PCB::~PCB()
{
}
