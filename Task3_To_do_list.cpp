#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

struct Task{
    string desc;
    bool comp;
};

Task tasks[MAX];
int tcount = 0;

void addtask(){
    if(tcount >= MAX){
        cout << "Task list is full!" << endl;
        return;
    }
    cin.ignore();
    cout << "Enter task Description: ";
    getline(cin, tasks[tcount].desc);
    tasks[tcount].comp = false;
    tcount++;

    cout << "Task added Successfully!" << endl;
}

void viewtasks(){
    if(tcount == 0){
        cout << "No Tasks available!" << endl;
    }
    cout << "*****TASK LIST*****" << endl;
    for(int i = 0; i < tcount; i++){
        cout << i+1 << ": " << tasks[i].desc << "[ " << (tasks[i].comp ? "Completed" : "Pending") << " ]" << endl;
    }
}

void completed(){
    int num;
    viewtasks();
    cout << "Enter task number to mark as completed: ";
    cin >> num;

    if(num < 1 || num > tcount){
        cout << "Invalid task number!" << endl;
        return;
    }
    tasks[num-1].comp = true;
    cout << "Task marked as completed!" << endl;
}

void removetask(){
    int num;
    viewtasks();
    cout << "Enter task number to remove: ";
    cin >> num;

    if(num < 1 || num > tcount){
        cout << "Invalid task number!" << endl;
        return;
    }
    for(int i = num - 1; i < tcount - 1; i++){
        tasks[i] = tasks[i+1];
    }
    tcount--;
    cout << "Task removed successfully!" << endl;
}

int main(){
    int ch;
    do{
        cout << "***************TO-DO LIST***************" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Task" << endl;
        cout << "3. Mark Task as completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch){
            case 1:
            addtask();
            break;

            case 2:
            viewtasks();
            break;

            case 3:
            completed();
            break;

            case 4:
            removetask();
            break;

            case 5:
            cout << "Exiting To-do list program...." << endl;
            break;

            default:
            cout << "Invalid input!" << endl;
        }
    }while(ch != 5);
    return 0;
}
