#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <stdlib.h>

int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = NULL;

	display = al_create_display(800, 800);
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_flip_display();
	al_draw_pieslice(200, 200, 90, 90, 90, al_map_rgb(0, 0, 0), 10);
	al_flip_display();
	al_draw_arc(400, 400, 90, 900, 40, al_map_rgb(0, 0, 0), 10);
	al_flip_display();
	al_draw_filled_rounded_rectangle(600, 800, 800, 600, 45, 45, al_map_rgb(0, 0, 0));
	al_flip_display();

	system("pause");
}