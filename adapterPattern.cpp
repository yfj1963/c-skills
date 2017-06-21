#include<iostream>
using namespace std;
class target
{
public:
virtual void request()
{
cout<<"target request"<<endl;
}
virtual ~ target(){}
};
class adapter
{
public:
void specificRequest()
{
cout<<"adapter secificRequest"<<endl;
}
};
class adapterchild : public adapter private target
{
public:
adapterchild(adater *adp){_adp = adp;}
~adapterchild(){}
void request()
{
_adp->specificRequest();
}
private:
adapter *_adp;
};
int main()
{
adapter *adp = new adater();
target *tg = new adapterchild(adp);
tg->request();
cin.get();
return 1;
}
