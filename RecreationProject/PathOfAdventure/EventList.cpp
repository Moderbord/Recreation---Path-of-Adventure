#include "pch.h"

Event event_test_dragon_init_command()
{
	cout << "You command the dragon to come over. It spreads its wings and flies over to you.\n\n";
	return EventList::event_test_dragon_command();
}

Event event_test_dragon_init_playdead()
{
	cout << "You play dead. The dragon spreads its wings and flies over to you.\n\n";
	return EventList::event_test_dragon_playdead();
}

const Event EventList::event_test_dragon_init()
{
	Event test;

	test.set_event_text("There is a dragon sitting on a nearby outcrop. \n\nWhat do you do?");
	test.add_function(event_test_dragon_init_command, "Command");
	test.add_function(event_test_dragon_init_playdead, "Play dead");

	return test;
}

Event event_test_dragon_pet()
{
	cout << "You reach out and gently place your hand on the dragons forehead.\n\n";
	return EventList::event_test_dragon_final();
}

const Event EventList::event_test_dragon_command()
{
	Event test;

	test.set_event_text("The dragon is in front of you.");
	test.add_function(event_test_dragon_pet, "Pet");

	return test;
}

Event event_test_dragon_faceit()
{
	cout << "You stand up and faces the dragon head on. it looks at you with a curious expression.\n\n";
	return EventList::event_test_dragon_final();
}

const Event EventList::event_test_dragon_playdead()
{
	Event test;

	test.set_event_text("You can feel the dragons presence looming over you.");
	test.add_function(event_test_dragon_faceit, "Face it.");

	return test;
}

const Event EventList::event_test_dragon_final()
{
	Event test;

	test.set_event_text("Luckily it is a friendly dragon. It makes a light puff and takes of to the skies");
	test.add_function(event_test_dragon_init, "Replay");

	return test;
}
