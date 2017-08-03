// Singleton.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Singleton.h"

int main()
{
	//this will cause compile error,because singleton construct is protected!
	//Singleton *ptr1 = new Singleton();
	//printf("ptr1 = %p\n", ptr1);
	//delete ptr1;


	Singleton *ptr2 = Singleton::GetInstance();
	Singleton *ptr3 = Singleton::GetInstance();

	printf("ptr2 = %p, ptr3 = %p\n", ptr2, ptr3);

	delete ptr2;
	//delete ptr3;

	getchar();
    return 0;
}

