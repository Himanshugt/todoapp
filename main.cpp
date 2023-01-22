#include<bits/stdc++.h>
using namespace std;

void viewTasks(){
    fstream file;
    file.open("data.txt");
    string word;
    string allData="";
    while(file>>word){
        allData+=word;
    }
    stringstream strm(allData);
    vector<string>v;
    while(getline(strm,word,'#')){
        v.push_back(word);
    }
    int i = 0;
    int option;
    for(auto w:v){
        cout<<++i<<' '<<w<<'\n';
    }
    file.close();
}

void addTasks(){
    cout<<"Enter Task Details:\n";
    getchar();
    string s;
    string in;
    getline(cin,in);
    s=in;
    s.push_back('#');
    ofstream file;
    file.open("data.txt",ios::app);
    file<<s;
    file.close();
}

void removeTasks(){
    fstream file;
    file.open("data.txt");
    string word;
    string allData="";
    while(file>>word){
        allData+=word;
    }
    stringstream strm(allData);
    vector<string>v;
    while(getline(strm,word,'#')){
        v.push_back(word);
    }
    int i = 0;
    for(auto w:v){
        cout<<++i<<' '<<w<<'\n';
    }
    cout<<"Enter the task to be removed\n";
    int option;
    cin>>option;
    file.close();
    file.open("data.txt",ios::out);
    --option;
    for(int i=0;i<v.size();i++){
        if(option==i)continue;
        string task = v[i];
        task.push_back('#');
        file<<task;
    }
}


int main(){
    cout<<"Welcome!\n";
    int option=-1;
    while(option!=0){
        cout<<"\n\n\nEnter 1 to add a Task\nEnter 2 to remove a Task\nEnter 3 to view Tasks\nEnter 0 to exit\n";
        cin>>option;
        cout<<"--------------------\n";
        switch(option){
            case 1:
            addTasks();
            cout<<"Task Added Scuccessfully!!\n";
            viewTasks();
            break;
            case 2:
            removeTasks();
            cout<<"Task Removed Successfully!!\n";
            viewTasks();
            break;
            case 3:
            viewTasks();
            break;
            case 0:
            return 0;
            default:
            cout<<"Enter a Valid Option!!!\n";
            break;
        }
        cout<<"--------------------\n";
    }
    return 0;
}