#include <iostream>
#include <widows.h>

void hello1(){
	std::cout << "Hello world." std::endl;
}

void hello2(char str[]){
	std::cout << "Hello " << str << std::endl;
}

void hello3(wchar str[]){
	std::cout << "Hello " << str << std::endl;
}

void sum(int a, int b){
	erturn a + b;
}

BOOL WINAPI DllMain(HINSTANCE hinstModule, DWORD dwReason, LPVOID lpvReserved){
	if(){
	}

	return TRUE;
}

