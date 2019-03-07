#include "pch.h"

EventFunction::EventFunction(std::function<Event()> function, std::string function_text)
{
	this->_function = function;
	this->_function_text = function_text;
}

std::string EventFunction::get_function_text()
{
	return this->_function_text;
}

std::function<Event()>& EventFunction::get_function()
{
	return this->_function;
}

// Sets the text to be displayed when event is printed
void Event::set_event_text(std::string event_text)
{
	this->_event_text = event_text;
}

// Adds function to vector
void Event::add_function(std::function<Event()> function, std::string function_text)
{
	this->_event_functions.emplace_back(EventFunction(function, function_text));
}

std::vector<EventFunction> Event::get_event_functions()
{
	return this->_event_functions;
}

// Outputs event as a section with text and functions (buttons). Event number is sent by the event handler
void Event::print_event(int &event_number)
{
	cout << this->_event_text << "\n\n";

	for (EventFunction &ef : _event_functions)
	{
		cout << event_number++ << ". " << ef.get_function_text() << "\t\t";
	}

	cout << "\n\n";
}
