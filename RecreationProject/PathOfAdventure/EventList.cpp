#include "pch.h"

void drake()
{
	cout << "You command dragon";
}

void drake2()
{
	cout << "You play dead";
}

Event thing()
{
	return EventList::event_test_2();
}

const Event EventList::event_test()
{
	Event test;

	test.set_event_text("Jag är ett annat event");
	test.add_function(drake, "Command");
	test.add_function(drake2, "Play dead");

	return test;
}

const Event EventList::event_test_2()
{

}
