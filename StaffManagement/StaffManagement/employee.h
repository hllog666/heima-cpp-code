#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "worker.h"

class Employee :public Worker
{
public:
	Employee(int id, string name, int departmentId);

	virtual void showInfo();

	virtual string getdepartmentName();
};