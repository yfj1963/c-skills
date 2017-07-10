#include<list>
#include<iostream>
using namespace std;
struct base
{
     base(int type,list<base*>*sonlist):_type(type),_sonlist(sonlist)
    {

    }
    int _type;
    list<base*>*_sonlist;
    virtual ~base(){}
    virtual donothing(){}
};
struct esumdriver : public  base{

   int low;
   int hight;
   int num;
   int value;
   esumdriver(int type,list<base*>*sonlist):base(type,sonlist)
    {
    }
};
struct intdriver : public base{
   int _low;
   int _num;
   int _value;
   intdriver(int type,list<base*>*sonlist,int low,int num,int value):base(type,sonlist),_low(low),_num(num),_value(value)
    {
    }
};
struct chiocedriver : public base{

    chiocedriver(int type,list<base*>*sonlist):base(type,sonlist)
    {
    }
   char chioce;
   union
   {
       int one;
       double tow;
   };
};
void preOrder(base *baseRoot)
{
    if(baseRoot != 0)
    {
        cout<<"baseroot->type=="<<baseRoot->_type<<endl;

        switch(baseRoot-> )
        {
        case 1:
            break;
        case 2:
            break;
        case 31:
        {
         intdriver *intdri= dynamic_cast<intdriver*>(baseRoot);
         cout<<"intdri->_low=="<<intdri->_low<<endl;
         cout<<"intdri->_num=="<<intdri->_num<<endl;
         cout<<"intdri->_value=="<<intdri->_value<<endl;
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
int main()
{
        list<base*> *sonList = new list<base*>();
        list<base*> *sonList11 = new list<base*>();
        list<base*> *sonList13 = new list<base*>();
        base *node11 = new esumdriver(11,static_cast<list<base*>* >(0));
        base *node12 = new esumdriver(12,static_cast<list<base*>* >(0));
        base *node13 = new esumdriver(13,static_cast<list<base*>* >(0));
        sonList11->push_back(node11);
        sonList11->push_back(node12);
        sonList11->push_back(node13);

        base *base1 = new base(1,sonList11);
        base *base2 = new base(2,static_cast<list<base*>* >(0));
        base *base3 = new base(3,sonList13);

        sonList->push_back(base1);
        sonList->push_back(base2);
        sonList->push_back(base3);

        base *base31 = new intdriver(31,static_cast<list<base*>* >(0),2,3,4);
        base *base32 = new intdriver(32,static_cast<list<base*>* >(0),4,5,6);
        base *base33 = new intdriver(33,static_cast<list<base*>* >(0),7,8,9);

        sonList->push_back(base31);
        sonList->push_back(base32);
        sonList->push_back(base33);

        base *baseRoot = new base(0,sonList);
        preOrder(baseRoot);

    return 0;
}
