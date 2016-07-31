#pragma once

#include <string>
using namespace std;

class Movies {
public:
	int movieId;
	string movieTitle;
	
private:
	Movies();
	Movies(int, string);
	int getMovieId();
	int getMovieTitle();
};
