#include "pch.h"

void fun1()
{
	cout << "fun 1";
}

void fun2()
{
	cout << "fun 2";
}

void fun3()
{
	cout << "fun 3";
}

void drake()
{
	cout << "You command dragon";
}

void drake2()
{
	cout << "You play dead";
	//Clear callback
	//Push new events
}

int main()
{

	// Initialization
    GameWindow game_window;
	game_window.print_tabs();

	WindowTab* selected_tab = game_window.get_tab(GameWindow::MENU); // Start at main menu
	
	EventHandler* event_handler = selected_tab->get_event_handler();

	Event test, test2;

	test.set_event_text("Hellå jag är ett event");
	test.add_function(fun1);
	test.add_function(fun2);
	test.add_function(fun3);


	test2.set_event_text("Jag är ett annat event");
	test2.add_function(drake);
	test2.add_function(drake2);
	event_handler->add_event(test2);

	selected_tab->populate_events();

	
	bool running = true;
	string user_input;


	// TODO Separera event från main menu och skapa eventkedja

	while (running)
	{
		std::getline(cin, user_input);

		game_window.clear();
		game_window.print_tabs();


		switch (user_input[0])
		{
		case 'A':
			selected_tab = game_window.get_tab(GameWindow::MENU);
			selected_tab->populate_events();
			event_handler = selected_tab->get_event_handler();
			break;
		case 'B':
			selected_tab = game_window.get_tab(GameWindow::CHARACTER);
			selected_tab->populate_events();
			event_handler = selected_tab->get_event_handler();
			break;
		case 'C':
			selected_tab = game_window.get_tab(GameWindow::INVENTORY);
			selected_tab->populate_events();
			event_handler = selected_tab->get_event_handler();
			break;
		case 'D':
			selected_tab = game_window.get_tab(GameWindow::STORY);
			selected_tab->populate_events();
			event_handler = selected_tab->get_event_handler();
			break;
		default:
			event_handler->make_event_callback(user_input[0] - 49);
			break;
		}

	}
}