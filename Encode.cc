#include"Encode.h"
#include<iostream>
using namespace std;
void preOrder(base *baseRoot)
{
    if(baseRoot != 0)
    {
        cout<<"baseroot->type=="<<baseRoot->_type<<endl;

        switch(baseRoot->_type)
        {
        case 1:
            break;
        case 2:
            break;
        case 31:
        {
         //intdriver *intdri= dynamic_cast<intdriver*>(baseRoot);
         //cout<<"intdri->_low=="<<intdri->_low<<endl;
         //cout<<"intdri->_num=="<<intdri->_num<<endl;
         //cout<<"intdri->_value=="<<intdri->_value<<endl;
        break;
        }

        default:
            break;

            }
        if(baseRoot->_sonlist != 0)
        {
            for(list<base*> ::iterator iter = baseRoot->_sonlist->begin();iter != baseRoot->_sonlist->end(); ++iter)
                   preOrder(*iter);
        }
    }

}
