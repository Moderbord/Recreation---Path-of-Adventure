#include "pch.h"

int main()
{

	// Initialization
    GameWindow game_window;
	game_window.print_tabs();

	WindowTab* selected_tab = game_window.get_tab(GameWindow::MENU); // Start at main menu
	EventHandler* event_handler = selected_tab->get_event_handler();

	event_handler->add_event(EventList::event_test_dragon_init());
	selected_tab->populate_events();

	
	bool running = true;
	string user_input;


	while (running)
	{
		std::getline(cin, user_input);

		game_window.clear();
		game_window.print_tabs();

		switch (user_input[0])
		{
		case 'A':
			selected_tab = game_window.get_tab(GameWindow::MENU);
			event_handler = selected_tab->get_event_handler();
			break;
		case 'B':
			selected_tab = game_window.get_tab(GameWindow::CHARACTER);
			event_handler = selected_tab->get_event_handler();
			break;
		case 'C':
			selected_tab = game_window.get_tab(GameWindow::INVENTORY);
			event_handler = selected_tab->get_event_handler();
			break;
		case 'D':
			selected_tab = game_window.get_tab(GameWindow::STORY);
			event_handler = selected_tab->get_event_handler();
			break;
		default:
			event_handler->make_event_callback(user_input[0] - 49);
			break;
		}
		// Outputs the active events within the selected tab
		selected_tab->populate_events();
	}
}