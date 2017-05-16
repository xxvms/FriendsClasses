// FriendsClasses.cpp : Defines the entry point for the console application.
//
/*
Friends classes

*/


#include "stdafx.h"
#include <iostream>
#include "Test.h"


int main()
{
	B objectB;
	A objectA;

	objectA.setSecretValue(objectB, 600);

	std::cout << objectB.getSecretValue() << std::endl;
	
	system("pause");
	return 0;
}
