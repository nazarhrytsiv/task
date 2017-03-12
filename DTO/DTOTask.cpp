//
// Created by Nazar on 22.02.2017.
//
#include <iostream>
#include "DTOTask.h"

//Read data from file
vector<Task> DTOTask::write_from_file()
{
    ifstream file("../DTO/Task.txt");
    vector<Task> tasks;

    if (file.is_open())
    {
        while (!file.eof())
        {
            Task task;
            file >> task;
            tasks.push_back(task);
        }
        file.close();
        return tasks;
    }
    
    else
    {
        cout << "File not opened!";
    }
    return nullptr;
}

//void DTOTask::convert_task() {
//    data = "`";
//    for (int i = 0; i < tasks.size(); i++) {
//        data += tasks[i].get_name() + "/";
//        data += tasks[i].get_state() + "/";
//    }
//}

//void DTOTask::write_task()
//{
//    ofstream file;
//    //out - write in end file, trunc - delete all data from file
//    file.open("Task.txt", ios::out | ios::trunc);
////    for(int i = 0; i < tasks.size; i++)
//    {
//
//    }
//    file << data;
//    file.close();
}


