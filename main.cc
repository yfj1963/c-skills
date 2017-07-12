#include"Encode.h"
int main()
{
/***********************************************************************
                                 sonList
                               /     |   \
                             /       |    \
                           /         |     \
                         /           |      \
                    sonList11=1        2      sonList3=3
                /     |   \                 /  |   \
             /       |    \               /   |    \
           /         |     \            /    |     \
         /           |      \          /    |      \
        node11      node12   node13   node31   node32   node33
********************************************************************/
#if 0
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

        sonList13->push_back(base31);
        sonList13->push_back(base32);
        sonList13->push_back(base33);

        base *baseRoot = new base(0,sonList);
        preOrder(baseRoot);
#endif // 0
    return 0;
}
