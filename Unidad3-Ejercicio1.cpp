//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;


//Practica 3
//Ejercicio 1

int main() {

	Texture tcirculo;
	Sprite scirculo;

	tcirculo.loadFromFile("rcircle.png");
	scirculo.setTexture(tcirculo);
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Ventana ejercicio 1");
	while (App.isOpen()) {
		App.clear();
		scirculo.setPosition(0, 0);
		App.draw(scirculo);
		scirculo.setPosition(650, 0);
		App.draw(scirculo);
		scirculo.setPosition(0, 450);
		App.draw(scirculo);
		scirculo.setPosition(650, 450);
		App.draw(scirculo);
		App.display();
	}
	return 0;
}