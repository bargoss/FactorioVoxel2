#pragma once
extern "C" int sum(int a, int b){
	return a + b;
}
extern "C" __declspec(dllexport) void ConsoleAppEntry()
{
	int a = 3;
	int b = 2;
	int c = a + b;
}