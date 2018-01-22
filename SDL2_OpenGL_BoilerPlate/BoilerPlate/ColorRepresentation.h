#ifndef COLORREPRESENTATION_H_INCLUDED
#define COLORREPRESENTATION_H_INCLUDED
#include "Color.h"

class ColorRepresentation {
	public:
		Color red;// = Color(1.0, 0.0, 0.0, 1.0);
		Color green;// = Color(0.0, 1.0, 0.0, 1.0);
		Color white;// = Color(1.0, 1.0, 1.0, 1.0);
		Color yellow;// = Color(1.0, 1.0, 0.0, 1.0);
		Color orange;// = Color(1.0, 0.5, 0.0, 1.0);

	ColorRepresentation();
	Color turnRed();
	Color turnGreen();
	Color turnYellow();
	Color turnOrange();
	Color turnWhite();
};

#endif // COLORREPRESENTATION_H_INCLUDED
