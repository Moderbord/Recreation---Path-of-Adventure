#pragma once
#include <string>

class WindowTab
{
private:
	std::string	_name;
	bool is_active;
	//section
public:
	WindowTab() = default;
	WindowTab(std::string name);
	~WindowTab() = default;

	std::string get_name();
};

