#include "pch.h"


WindowTab::WindowTab(std::string name)
{
	this->_name = name;
	this->is_active = false;
}

std::string WindowTab::get_name()
{
	return this->_name;
}
