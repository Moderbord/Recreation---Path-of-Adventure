#pragma once
#include <string>
#include <functional>
#include <vector>

class EventFunction
{
private:
	std::string _function_text;
	std::function<void()> _function;
public:
	EventFunction() = default;
	EventFunction(std::function<void()> function, std::string function_text);
	std::string get_function_text();
	std::function<void()>& get_function();
};

class Event
{
private:
	std::string _event_text;
	std::vector<EventFunction> _event_functions;
	//Event ?
public:
	Event() = default;
	~Event() = default;

	void set_event_text(std::string event_text);
	void add_function(std::function<void()> function, std::string function_text);
	std::vector<EventFunction> get_event_functions();
	void print_event(int &event_number);
};

