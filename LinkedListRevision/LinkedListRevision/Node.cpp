#include "Node.h"

Node::Node() {
	next = NULL;
	movie.setMovieId(0);
	movie.setMovieTitle("");
}

Node::Node(int id, string title) {
	next = NULL;
	movie.setMovieId(id);
	movie.setMovieTitle(title);
}