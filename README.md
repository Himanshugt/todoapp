## TODO Application

We will design a software system with a command line interface that will implement the basic functionalities of a To-Do list. The system we will be designing will have the capabilities to add, remove, and view the tasks to be accomplished.

In our application here, we will be incorporating the functionalities of a To-Do list with the help of File Handling concepts in C++. Here we will focus mainly on implementing three main functions as follows:
**viewTask(): This function is used to view all the outstanding tasks.**
**addTask(): This function is used to add a new task to the To-Do list.**
**removeTask(): This function is used to remove a certain task or mark the task as completed from the outstanding tasks.**
File Handling in C++ is one of the most useful and major skills to be utilized. Files serve as a Database for our To-Do list here. However, if we were to access this application from different devices and have our data to be synced across them, the use of a Database server such as SQL would be more convenient.
However, in this article, we will mainly focus on utilizing the file-handling capabilities of C++ to get the job done.

Let us take a look at a sample program to get an idea of how File Handling works in C++.
Here in the program below, we will try to write data to a file. The file object is initialized using the ofstream data type. By using the ‘.open(filename)’ function, we can open the file in write mode. Here if the file does not exist or any other error has taken place, we can print a message to the user informing them of the same.
However, if that is not the case, we can just write the data to the file and then close it successfully using the ‘.close()’ function.

## Snapshots

![image](https://user-images.githubusercontent.com/78023521/213928348-ea80de7c-fa54-44fc-a78c-e028b27696b9.png)
![image](https://user-images.githubusercontent.com/78023521/213928366-7b53e759-90ed-46aa-86a1-8097290ad749.png)
![image](https://user-images.githubusercontent.com/78023521/213928382-d3934fef-35bb-4626-b82f-574491a353e6.png)
