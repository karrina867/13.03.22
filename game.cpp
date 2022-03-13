#include "game.h"
#include "const.h"
#include <iostream>

Game::Game() :
	window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE, sf::Style::Titlebar | sf::Style::Close){}
void Game::play() {
	while (window.isOpen()) {
		check_events();
		update();
		check_collisions();
		draw();
	}
}
void Game::check_events() {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) window.close();
	}
}

void Game::update() {
	switch (game_state) {
	case INTRO:
		break;

	case PLAY:
		player.update();
		break;

	case GAME_OVER:
		break;

	}

}
	void Game::draw() {
		window.clear(sf::Color::Black);
		switch (game_state) {
		case INTRO:
			break;
		case PLAY:

			player.draw(window);
			break;

		}
		window.display();

	}
	void Game::check_collisions() {}