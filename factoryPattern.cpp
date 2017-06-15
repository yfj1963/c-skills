class abstractProduct
{
public:
virtual ~abstractProduct(){}
virtual void operation() = 0;
};
class prodcutA : abstractProduct
{
public:
void operation()
{

cout<<"product A"<<endl;
}
};
class productB : abstractProduct
{
public:
void operation()
{
cout<<"product B"<<endl;
}
};
class abstractFactory
{
public:
virtual ~ abstractFactory();
virtual  abstractProduct * createProductA() = 0;
virtual abstractProduct * createProductB() = 0;
};
class factoryimpl :abstractFactory
{
abstractProduct * createProductA()
{
return new prodcutA();
}
abstractProduct* createProductB()
{
return new prodcutB();
}
};
int main()
{
abstractFactory *factory = new factoryimpl();
abstractProduct *productA = factory->createProductA();
abstractProduct *prodcutB = factory->createProductB();
productA->operation();
productB_>operation();
}

