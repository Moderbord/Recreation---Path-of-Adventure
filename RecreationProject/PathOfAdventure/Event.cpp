#include "pch.h"

void Event::set_event_text(std::string event_text)
{
	this->_event_text = event_text;
}

void Event::add_function(std::function<void()> function)
{	
	this->_event_functions.push_back(function);
}

std::vector<std::function<void()>> Event::get_event_functions()
{
	return this->_event_functions;
}

void Event::print_event(int &input_num)
{
	cout << this->_event_text << "\n\n";

	for (std::function<void()> &f : _event_functions)
	{
		cout << input_num++ << ". function\t\t";
	}

	cout << "\n\n";
}
