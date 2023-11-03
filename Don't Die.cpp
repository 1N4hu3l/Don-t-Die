#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

constexpr int windowWidth{ 800 }, windowHeigth{ 600 };

int main() {

		//crear la pantalla de juego
		renderWindow{ {windowWidth, windowHeigth}, "dont die - 1" };
		window.setFramerateLimit(60);

		//loop del juego
		while (true)
		{

			//limpiar la ventana antes de dibujar
			window.clear(Color::black);

			//si se preciona escape (Esc) se termina el loop
			if (Keyboard::isKeyPressed(Keyboard::key::Escape)) break;

			//mostrar contenido de la pantalla
			window.display();
		}
	}
	return 0;
}
