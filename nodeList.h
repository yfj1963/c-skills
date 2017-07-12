#pragma once
#include<list>
#include<string>
using namespace std;
struct n2apoptAndExtension
{
  const bool _optional;
  const bool _extension;
};

struct base
{
     base(const string &name,const int type,list<base*>*sonlist):_name(name),_type(type),_sonlist(sonlist)
    {

    }
    virtual ~base(){}

    const string  _name;
    const int     _type;
    list<base*>*  _sonlist;
};


struct n2apEnumNodeProprety
{
  const int _low;
  const int _hight;
  const int _extension;
  const int _value;
};
struct n2apEnumNode : public  base{
   n2apEnumNode(const string &name,const int type,list<base*>*sonlist,const n2apEnumNodeProprety &EnumNdProprety)
                :base(name,type,sonlist),_EnumNdProprety(EnumNdProprety)
   {
   }

   const n2apEnumNodeProprety  _EnumNdProprety;
};

struct n2apInterNodeProprety
{
  const int _low;
  const int _hight;
  const int _extension;
  const int _value;
};
struct n2apInterNode : public base{
   n2apInterNode(const string &name,const int type,list<base*>*sonlist,const n2apInterNodeProprety &IntNdProprety)
                 :base(name,type,sonlist),_IntNdProprety(IntNdProprety)
    {
    }
    const n2apInterNodeProprety _IntNdProprety;
};

struct n2apOctetString : public base{
    n2apOctetString(const string &name,const int type,list<base*>*sonlist,const int octetStringLen)
                  :base(name,type,sonlist),_octetStringLen(octetStringLen)
    {
    }
    const int _octetStringLen;
};

struct n2apPrintString : public base{
    n2apPrintString(const string &name,const int type,list<base*>*sonlist,const int printStringLen)
                  :base(name,type,sonlist),_printStringLen(printStringLen)
    {
    }
    const int _printStringLen;
};
struct n2apUnionNode : public base{

    n2apUnionNode(const string &name,const int type,list<base*>*sonlist,const n2apoptAndExtension &optAndExtension)
                  :base(name,type,sonlist),_optAndExtension(optAndExtension)
    {
    }
  const n2apoptAndExtension _optAndExtension;
};

struct n2apSequenceNode : public base{

   n2apSequenceNode(const string &name,const int type,list<base*>*sonlist,const n2apoptAndExtension &optAndExtension)
                    :base(name,type,sonlist),_optAndExtension(optAndExtension)
   {

   }

  const n2apoptAndExtension _optAndExtension;
};
struct n2apSequenceOfItemNode : public base{
   n2apSequenceOfItemNode(const string &name,const int type,list<base*>*sonlist,const n2apoptAndExtension &optAndExtension,
                          const int sequenceOfItemLen):base(name,type,sonlist),
                          _optAndExtension(optAndExtension),_sequenceOfItemLen(sequenceOfItemLen)
   {

   }
   const int _sequenceOfItemLen;
   const n2apoptAndExtension _optAndExtension;
};
