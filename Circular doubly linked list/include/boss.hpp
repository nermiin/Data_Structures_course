/* *        
 * * @file        :boss.hpp
 * * @description :implementation in C++  doubly circular linked list that contain a stack in each node
                   which can reads data from text file,create the list and can get
                    right,left or also can print the node status that the user wants.... 
 * * @course      :2_B  
 * * @assignment  :2_ödev
 * * @date        :28/11/2018 
 * * @author      :Nermin Kaya nermin.kaya.sau@gmail.com
 * *              
 * */ 
 
#ifndef BOSS_HPP
#define BOSS_HPP
#include "node.hpp"
#include <fstream>
#include <iomanip>

class boss
{
private:
  node *start;
  node *last;
  stack *start_stack;

public:
  int count = 0;
  node *Get_start();
  node *Get_last();
  //---------------------
  void Set_start(node *);
  void Set_last(node *);
  //---------------------
  node *Create_node(int);
  void insert_last(node *, int);
  void insert_firsrt_of_stack(node *, stack *, int);
  void InsertToList(node *n);
  void display(node *, stack *);
  //-----------------------
  void moveR(node *, stack *);
  void moveL(node *, stack *);
  //-----------------------
  void menu(node*,stack*);
  void displayfromloc(node*,stack*,int);
  //----------------------
  boss(node*,stack*);
  ~boss();
};

#endif
