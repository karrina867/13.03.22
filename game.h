#pragma once
#include "SFML/Graphics.hpp"
#include "player.h"
#include"const.h"
class Game {
public:
	enum GameState { INTRO, PLAY, GAME_OVER };
	Game();
	void play();
private:
	sf::RenderWindow window;
	GameState game_state = PLAY;
	Player player;

	void check_events();
	void update();
	void draw();
    void check_collisions();

};