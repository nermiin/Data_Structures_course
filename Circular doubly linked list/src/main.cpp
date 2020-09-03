/* *        
 * * @file        :main.cpp
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
#include "boss.hpp"

int main(int argc, char const *argv[])
{
    node *temp = new node();
    stack *s = new stack();
    boss *b = new boss(temp,s);

    delete temp;
    delete s;
    
    return 0;
}
