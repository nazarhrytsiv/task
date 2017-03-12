//
// Created by Nazar on 21.02.2017.
//

#include "Task.h"
#include "../DTO/DTOTask.h"

    void Task::set_state(string state)
    {
        this->state = state;
    }

    string Task::get_state()
    {
        return this->state;
    }

    void Task::set_name(string name)
    {
        this->name = name;
    }

    string Task::get_name()
    {
        return this->name;
    }

    //Overloard operator >>
    istream &operator>>(istream &is, Task &task)
    {
            //temporary strTask for read from stream is
            string strTask;
            getline(is, strTask);
            string name;
            string state ;
              int iterator = 0;
              int pos = (int)strTask.find(',');
              //parse string strTask ','
              while (iterator < strTask.size())
              {
                  if (iterator < pos)
                  {
                      name+=strTask[iterator];
                  }
                  else if(iterator > pos)
                  {
                      state+=strTask[iterator];
                  }
                  iterator+=1;
              }

        task.set_name(name);
        task.set_state(state);
        return is;
    }

    void Task::show_all_task()
    {
        vector<Task> tasks(DTOTask::write_from_file());
        cout << "Name: " << "\t" << "State: " << endl;
        for(int i = 0 ; i < tasks.size(); i++)
        {
            cout << tasks[i].get_name() << "\t" << tasks[i].get_state() << endl;
        }
    }





