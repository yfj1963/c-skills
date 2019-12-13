Json::Value complexObjectTranslator(bool isStructType, const unsigned char *data, Json::Value &root)
{
	if (data == nullptr) {
		return Json::Null();
	}
	Json::Value writer;
	for (unsigned int i = 0; i < root.size(); ++i)
	{
		Json::Value &iterm = root[i];
		Json::Value::Members members = iterm.getMembersNames();
		for (auto member : members)
		{
			    const char 
				std::string type = iterm["type"].asString();
				Json::Value writer;
				if (type == "bit")
				{
					complexObjectTranslator(data, writer[member]);
				}
				else if (type == "enum")
				{

				}
				else if (type == "base")
				{

				}

			
		}
	}
	return writer;
}
void cacheDataTranslator(const std::string &cloumnType, const unsigned char *data, Json::Value &root)
{
	if (data == nullptr) {
		return;	
	}
	bool isStructType = type == "struct";
	Json::Value root; 
	for (unsigned int i = 0; i < root.size(); ++i)
	{
		Json::Value &iterm = root[i];
		Json::Value::Members members = iterm.getMembersNames();
		for (auto member : members)
		{
			if (cloumnType == member)
			{
				std::string type = iterm["type"].asString();
				Json::Value writer;
				if (type == "struct")
				{
					writer[member] = complexObjectTranslator(data, iterm[member]);
				}
				else if (type == "enum")
				{

				}
				else if (type == "base")
				{

				}

			}
		}
	}

}
