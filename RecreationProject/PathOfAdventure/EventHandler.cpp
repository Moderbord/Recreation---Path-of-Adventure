#include "pch.h"

// Adds an event to the event handler
void EventHandler::add_event(const Event &event)
{
	this->_event_vector.push_back(event);
}

// Returns vector of events in the handler
std::vector<Event> EventHandler::get_events()
{
	return this->_event_vector;
}

// Binds a function to a callback function inside event handler
void EventHandler::bind_event_callback(std::function<void()> &event_callback)
{
	_event_callback_vector.push_back(std::bind(event_callback));
}

// Calls callback function with an index
void EventHandler::make_event_callback(int callback_index)
{
	if(_event_callback_vector[callback_index])
	{
		cout << "Doing callback..\n";
		 _event_callback_vector[callback_index]();
	}
}

// Clears the vector of callbacks
void EventHandler::clear_callbacks()
{
	_event_callback_vector.clear();
}
