#pragma once
#include "EventHandler.h"
#include <string>

class WindowTab
{
private:
	std::string	_name;
	EventHandler* _event_handler;

	//section
public:
	WindowTab() = default;
	WindowTab(std::string name);
	~WindowTab() = default;

	std::string get_name();
	EventHandler* get_event_handler();
	void populate_events();
};

