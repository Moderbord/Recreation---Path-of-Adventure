#pragma once
#include "Event.h"
#include <string>
#include <functional>
#include <vector>

class EventHandler
{
	typedef std::vector<std::function<void()>> callback_vector;
private:
	std::vector<Event> _event_vector;
	callback_vector _event_callback_vector;
public:
	EventHandler() = default;
	~EventHandler() = default;

	void add_event(const Event &event);
	std::vector<Event> get_events();
	void bind_event_callback(std::function<void()> &event_callback);
	void make_event_callback(int callback_index);
	void clear_callbacks();
};