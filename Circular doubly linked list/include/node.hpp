/* *        
 * * @file        :node.hpp
 * * @description :implementation in C++  doubly circular linked list that contain a stack in each node
                   which can reads data from text file,create the list and can get
                    right,left or also can print the node status that the user wants.... 
 * * @course      :2_B  
 * * @assignment  :2_ödev
 * * @date        :28/11/2018 
 * * @author      :Nermin Kaya nermin.kaya.sau@gmail.com
 * *             
 * */ 
#ifndef NODE_HPP
#define NODE_HPP
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "stack.hpp"
using namespace std;

class node
{
private:
  int data;
  node *next;
  node *prev;
  stack *head;
public:
  int Get_data();
  stack *Get_head();
  //----------------------
  node *Get_next();
  node *Get_prev();
  //---------------------
  void Set_data(int);
  void Set_next(node *);
  void Set_prev(node *);
  void Set_head(stack*);
  //---------------------
  node();
  ~node();
};

#endif
