#pragma once
class B; // declaration of the class - class A does not know that there is class B, but by using definition we inform compiler that there is
// class B at some point there.

class A
{
public:
	void setSecretValue(B&, int);
};

class B
{
	friend class A;
	int secretValue;
public:
	int getSecretValue() { return secretValue;  }


};
////
////class Test
////{
////public:
////	Test();
////	~Test();
////};
////
