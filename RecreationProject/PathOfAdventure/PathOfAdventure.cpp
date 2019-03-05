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

int main()
{

	// Initialization
    GameWindow game_window;
	EventHandler event_handler;

	event_handler.bind_event_callback(fun1);
	event_handler.bind_event_callback(fun2);
	event_handler.bind_event_callback(fun1);
	event_handler.bind_event_callback(fun3);

	WindowTab selected_tab;
	WindowTab previous_tab;
	
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
			event_handler.make_event_callback(0);
			break;
		case 'B':
			selected_tab = game_window.get_tab(GameWindow::CHARACTER);
			event_handler.make_event_callback(1);
			break;
		case 'C':
			selected_tab = game_window.get_tab(GameWindow::INVENTORY);
			event_handler.make_event_callback(2);
			break;
		case 'D':
			selected_tab = game_window.get_tab(GameWindow::STORY);
			break;
		default:
			break;
		}

	}
}