#pragma once
#include "Service.h"
#include "pugixml.hpp"
#include "pugiconfig.hpp"
#include <fstream>

class XmlService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};

};