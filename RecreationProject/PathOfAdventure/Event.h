#pragma once
#include <string>
#include <functional>
#include <vector>

class Event
{
private:
	std::string _event_text;
	std::vector<std::function<void()>> _event_functions;
	//Event ?
public:
	Event() = default;
	~Event() = default;

	void set_event_text(std::string event_text);
	void add_function(std::function<void()> function);
	std::vector<std::function<void()>> get_event_functions();
	void print_event(int &input_num);
};

