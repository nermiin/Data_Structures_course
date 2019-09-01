/* *        
 * * @file        :boss.cpp
 * * @description :implementation in C++ a doubly circular in C++ a doubly circular linked list that contain 
                   a stack in each node which can reads data from text file,create the list and can get
                   right,left or also can print the node status that the user wants.... 
 * * @course      :2_B
 * * @assignment  :2_ödev
 * * @date        :28/11/2018 
 * * @author      :Nermin Kaya nermin.kaya.sau@gmail.com
 *                :Gülsevim Fidan fidangulsevim@gmail.com
 * */ 
#include "boss.hpp"
//----------------------------------
boss::boss(node *n,stack *s)
{
    start = NULL;
    last = NULL;
    InsertToList(n);
    menu(n,s);
}

boss::~boss()
{
    delete start;
    delete last;
    delete start_stack;
}
//----------------------------------
void boss::Set_start(node *n)
{
    start = n;
}
void boss::Set_last(node *n)
{
    last = n;
}
//----------------------------------
node *boss::Get_start()
{
    return start;
}
node *boss::Get_last()
{
    return last;
}
//----------------------------------
node *boss::Create_node(int value)
{
    node *temp;
    temp = new node();
    temp->Set_data(value);
    temp->Set_next(NULL);
    temp->Set_prev(NULL);
    return temp;
}
//-----------------------------------
void boss::insert_last(node *iter, int num)
{
    stack *s;
    iter->Set_next(NULL);
    iter->Set_prev(NULL);
    iter = new node();
    if (start == NULL)
    {
        iter->Set_data(num);
        insert_firsrt_of_stack(iter, s, num);
        start = last = iter;
        last->Set_next(NULL);
        start->Set_next(last->Get_next());
        last->Set_prev(NULL);
        start->Set_prev(last->Get_prev()); 
    }
    else
    {
        iter->Set_data(num);
        insert_firsrt_of_stack(iter, s, num);
        last->Set_next(iter);
        iter->Set_prev(last);
        last = iter;
        start->Set_prev(last);
        last->Set_next(start);
    }
}
//----------------------------------------------
void boss::InsertToList(node *n)
{
    ifstream read("sayi.txt");
    int num;
    while (read >> num)
    {
        insert_last(n, num);
        count++;
    }
    read.close();
}
//---------------------------------------------
void boss::display(node *iter, stack *itr)
{
    int count=1;
    iter = start;
    itr = iter->Get_head();
    while (iter->Get_next() != start)
    {
        count++;
        cout << setw(10) << iter->Get_data() << setw(10);
        while (itr->Get_next() != NULL)
        {
            cout << itr->Get_data() << setw(10);
            itr = itr->Get_next();
        }
        iter = iter->Get_next();
        itr = iter->Get_head();
        cout << endl;
    }
    displayfromloc(iter,itr,count);
}
//------------------------------------------
void boss::insert_firsrt_of_stack(node *n, stack *iter, int num)
{
    iter->Set_next(NULL);
    iter = new stack();
    if (n->Get_head() == NULL)
    {
        iter->Set_data(num);
        n->Set_head(iter);
        n->Get_head()->Set_next(NULL);
    }
    else
    {
        iter->Set_data(num);
        iter->Set_next(n->Get_head());
        n->Set_head(iter);
    }
}
//-------------------------------------------
void boss::moveL(node *iter, stack *temp)
{
    iter = start;
    int num = start->Get_data();
    while (iter != last)
    {
        iter->Set_data(iter->Get_next()->Get_data()) ;
        insert_firsrt_of_stack(iter, temp,iter->Get_next()->Get_data());
        iter = iter->Get_next();
    }
    iter->Set_data(num);
    insert_firsrt_of_stack(iter, temp, num);
    display(iter, temp);
}
//---------------------------------------------
void boss::moveR(node *iter, stack *temp)
{
    iter = last;
    int num = last->Get_data();

    while (iter != start)
    {
        iter->Set_data(iter->Get_prev()->Get_data()) ;
        insert_firsrt_of_stack(iter, temp, iter->Get_prev()->Get_data());
        iter = iter->Get_prev();
    }
    iter->Set_data(num);
    insert_firsrt_of_stack(iter, temp, num);

    display(iter, temp);
}
//---------------------------------------------
void boss::menu(node *n, stack *s)
{
    int x = 0;
    do
    {
        cout << "1-Sola Hareket" << endl;
        cout << "2-Saga Hareket" << endl;
        cout << "3-Bir Dugumun Durumlarini Yazdir" << endl;
        cout << "4-Tum Durumlari Yazdir" << endl;
        cout << "5-Cikis" << endl;

        cin >> x;

        switch (x)
        {
        case 1:
            moveL(n, s);
            cin.ignore().get();
            break;
        case 2:
            moveR(n, s);
            cin.ignore().get();
            break;
        case 3:
            int y;
            cout << "Dogum konumu : ";
            cin >> y;
            displayfromloc(n, s, y);
            cin.ignore().get();
            break;
        case 4:
            display(n, s);
            cin.ignore().get();

            break;
        }
    } while (x != 5);
}
//----------------------------------------------------
void boss::displayfromloc(node *iter, stack *itr, int loc)
{
    int i;
    iter = start;
    itr = iter->Get_head();

    if (iter == NULL || count < loc)
        return;

    else
    {
        for (i = 1; i < loc; i++)
        {
            iter = iter->Get_next();
        }
        cout << iter->Get_data() << setw(10);
        itr=iter->Get_head();
        while (itr->Get_next() != NULL)
        {
            cout << itr->Get_data() << setw(10);
            itr=itr->Get_next();
        }

        cout << endl;
    }
}
//-------------------------- THE END :) ------------------------------------
