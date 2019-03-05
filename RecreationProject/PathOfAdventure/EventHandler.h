#pragma once
#include <string>
#include <functional>
#include <vector>

class EventHandler
{
	typedef std::vector<std::function<void()>> callback_vector;
private:
	callback_vector _event_callback_vector;
public:
	EventHandler() = default;
	~EventHandler() = default;

	void bind_event_callback(std::function<void()> event_callback);
	void make_event_callback(int callback_index);
	void clear_callbacks();
};