#include <iostream>
#include "MemoryManager.h"

int main()
{
	MemoryManager mem;
	PCB pcb1, pcb2;
	pcb1.createPCB("Zobaczymy czy dziala alokacja, mam nadzieje ze tak :3", mem, "PCB 1");
	pcb2.createPCB("Mam nadzieje ze nie przesadze :/", mem, "PCB 2");
	cout << "Pamiec przed swapToFile\n";
	mem.printMemoryConnetent();
	mem.swapToFile(&pcb1);
	cout << "Pamiec po swapToFile\n";
	mem.printMemoryConnetent();
	cout << "Adres logiczny 10: c = " <<mem.readMemory(&pcb1, 10) <<endl;
	cout << "Zawartosc pamieci po sprowadzeniu adresu logidznego 10\n";
	mem.printMemoryConnetent();
	cout << "Odczytaj od 31 bajtu do spacji\n";
	int ic = 31;
	cout << mem.readUntilSpace(&pcb1, ic) <<endl;
	mem.printMemoryConnetent();

	mem.printPCBframes(&pcb1, true);
	mem.printPCBframes(&pcb2);

	getchar();
	return 0;
}