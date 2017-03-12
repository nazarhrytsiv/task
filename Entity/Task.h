//
// Created by Nazar on 21.02.2017.
//

#ifndef MANAGER_TASKS_TASK_H
#define MANAGER_TASKS_TASK_H
#pragma once
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>



using namespace std;

    class Task
    {
        string state;
        string name;
    public:
        void set_state(string state);

        Task() {}
        Task(string name, string state)
        {
            this->name = name;
            this->state = state;
        }

        string get_state();

        void set_name(string name);

        string get_name();

        friend istream& operator >> (istream& is, Task &task);

        void show_all_task();


    };


#endif //MANAGER_TASKS_TASK_H
