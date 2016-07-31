#pragma once

#include <string>
using namespace std;

class Movies {
public:
	int movieId;
	string movieTitle;
	
private:
	int getMovieId();
	int getMovieTitle();
};
