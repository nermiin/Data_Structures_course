/* *        
 * * @file        :node.cpp
 * * @description :implementation in C++  doubly circular linked list that contain a stack in each node
                   which can reads data from text file,create the list and can get
                    right,left or also can print the node status that the user wants.... 
 * * @course      :2_B  
 * * @assignment  :2_ödev
 * * @date        :28/11/2018 
 * * @author      :Nermin Kaya nermin.kaya.sau@gmail.com
 * *              
 * */ 
#include "node.hpp"

//-----------------------------------
int node::Get_data()
{
    return data;
}
stack* node::Get_head()
{
    return head;
}
//-----------------------------------
node *node::Get_next()
{
    return next;
}
node *node::Get_prev()
{
    return prev;
}
//----------------------------------
void node::Set_data(int num)
{
    data = num;
}
void node::Set_next(node *n)
{
    next = n;
}
void node::Set_prev(node *n)
{
    prev = n;
}
void node::Set_head(stack *s)
{
    head=s;
}
//----------------------------------

node::node()
{
    data = 0;
    prev = NULL;
    next = NULL;
    head = new stack();
}

node::~node()
{
    delete next;
    delete prev;
    delete head;
}
//-------------------------------------
