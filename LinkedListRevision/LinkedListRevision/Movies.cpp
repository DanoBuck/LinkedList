#include "Movies.h"

Movies::Movies() {
	movieId = 0;
	movieTitle = "";
}

Movies::Movies(int id, string title) {
	movieId = id;
	movieTitle = title;
}

int Movies::getMovieId() {
	return movieId;
}

string Movies::getMovieTitle() {
	return movieTitle;
}
