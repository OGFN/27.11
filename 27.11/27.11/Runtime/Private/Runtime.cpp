#include "../Runtime/Public/Runtime.h"

void Runtime::LoadConsole()
{
	AllocConsole();
	FILE* File;
	freopen_s(&File, "CONOUT$", "w", stdout);
	freopen_s(&File, "CONOUT$", "w", stderr);
	SetConsoleTitleA("27.11 || Starting...");
}

void Runtime::LOG(const string& msg)
{
	cout << "[*] 27.11 >> " << msg << endl;
}