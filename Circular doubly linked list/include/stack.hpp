/* *        
 * * @file        :stack.hpp
 * * @description :implementation in C++  doubly circular linked list that contain a stack in each node
                   which can reads data from text file,create the list and can get
                    right,left or also can print the node status that the user wants.... 
 * * @course      :2_B  
 * * @assignment  :2_ödev
 * * @date        :28/11/2018 
 * * @author      :Nermin Kaya nermin.kaya.sau@gmail.com
 * *             
 * */ 
#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
using namespace std;

class stack
{
private:
  int data;
  stack *next;

public:
  //-----------------------
  int Get_data();
  stack *Get_next();
  //----------------------
  void Set_data(int);
  void Set_next(stack *);
  //----------------------

  stack();
  ~stack();
};

#endif
