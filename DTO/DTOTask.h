//
// Created by Nazar on 22.02.2017.
//

#ifndef MANAGER_TASKS_DTOTASK_H
#define MANAGER_TASKS_DTOTASK_H
#pragma once
#include <fstream>
#include <iostream>
#include "../Entity/Task.h"
using namespace std;

class DTOTask{

    string filename;

    string data;


public:
    //read from file data
    static vector<Task> write_from_file();
    //overloading operator >> in Task.cpp
    friend istream& operator >> (istream& is, Task &task);
};


#endif //MANAGER_TASKS_DTOTASK_H
