 #include<iostream>
 using namespace std;
 class Reciever
 {
 public:
 Reciever(){}
 ~Reciever(){}
 void action()
 {
 cout<<"reciever message successful"<<endl;
 }
 };
 class command
 {
 public：
 virtual ~command(){}
 command(){}
 virtual void excute() = 0;
 private:
 Reciever *rec;
 };
 class commandimpl : public command
 {
public:
commandimpl(Reciever *rec){
this->rec = rec;
}
~commandimpl(){}
void excute()
{
rec.excute();
}
private:
Reciever *rec;
};
class invoker
{
public:
invoker(command *cmd)
{
this->_cmd = cmd;
}
void invoke()
{
_cmd.excute();
}
~invoker(){}
private:
command *_cmd;
};
int main()
{
Reciever *rev = new Reciever();
command *cmd = new commandimpl(rev);
invoker *invoke = new invoker(cmd);
invoke->invoke();
return 1;
}
 
 
