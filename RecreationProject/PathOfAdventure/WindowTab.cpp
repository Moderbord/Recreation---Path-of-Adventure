#include "pch.h"

// Constructor
WindowTab::WindowTab(std::string name)
{
	this->_name = name;
	this->_event_handler = new EventHandler();
}

// Returns title of tab
std::string WindowTab::get_name()
{
	return this->_name;
}

// Returns the event handler attached to the tab
EventHandler* WindowTab::get_event_handler()
{
	return this->_event_handler;
}

// Fills the tab (console) with events currently inside the event handler
void WindowTab::populate_events()
{
	int i = 1;
	// Each event is displayed as a section
	for (Event &e : _event_handler->get_events())
	{
		e.print_event(i);
		// Each function inside an event is bound to the event handler
		for (EventFunction &ef : e.get_event_functions())
		{
			_event_handler->bind_event_callback(ef.get_function());
		}
	}
}
