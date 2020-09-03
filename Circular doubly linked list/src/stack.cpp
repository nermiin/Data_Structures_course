/* *        
 * * @file        :stack.cpp
 * * @description :implementation in C++  doubly circular linked list that contain a stack in each node
                   which can reads data from text file,create the list and can get
                    right,left or also can print the node status that the user wants.... 
 * * @course      :2_B  
 * * @assignment  :2_ödev
 * * @date        :28/11/2018 
 * * @author      :Nermin Kaya nermin.kaya.sau@gmail.com
 * *            
 * */
#include "stack.hpp"

//-------------------
int stack::Get_data()
{
    return data;
}
stack *stack::Get_next()
{
    return next;
}
//------------------
void stack::Set_data(int num)
{
    data = num;
}
void stack::Set_next(stack *n)
{
    next = n;
}
//-----------------

stack::stack()
{
    next=NULL;
}

stack::~stack()
{
    delete next;
}
