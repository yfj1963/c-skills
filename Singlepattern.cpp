class single 
{
private:
single(){}
~single(){}
public:
   static single * getInstance()
  {
    if(instance == null)
    {
      instance = new single();
    }
    return *instance;
  }
static single *instance;
};
single *single::instance = null;
int main()
{
single *single1 = single::getInstance();
single *single2 = single::getInstance();
delete single::getInstance();
}
