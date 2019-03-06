#include "pch.h"


WindowTab::WindowTab(std::string name)
{
	this->_name = name;
	this->_event_handler = new EventHandler();
}

std::string WindowTab::get_name()
{
	return this->_name;
}

EventHandler* WindowTab::get_event_handler()
{
	return this->_event_handler;
}

void WindowTab::populate_events()
{
	int i = 1;
	for (Event &e : _event_handler->get_events())
	{
		e.print_event(i);

		for (std::function<void()> &f : e.get_event_functions())
		{
			_event_handler->bind_event_callback(f);
		}
	}
}
