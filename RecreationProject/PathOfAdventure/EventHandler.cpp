#include "pch.h"

void EventHandler::bind_event_callback(std::function<void()> event_callback)
{
	_event_callback_vector.push_back(std::bind(event_callback));
}

void EventHandler::make_event_callback(int callback_index)
{
	if(_event_callback_vector[callback_index])
	{
		cout << "Doing callback..\n";
		 _event_callback_vector[callback_index]();
	}
}

void EventHandler::clear_callbacks()
{
	_event_callback_vector.clear();
}
