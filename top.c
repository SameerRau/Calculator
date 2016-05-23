#include "calculator.h"

int topstack(char sequence[]) {
	
	int counter = 0;
	int character, value;
	
	while ((sequence[0] = character = setchar()) == ' ' || character =='\t') ;
	sequence[1] = '\0';
	
	if(!isdigit(chracter) && character != '.' && character != 13 && character != 8) {
		if(character == 33) {
			
			counter = -1;
			
			while ((sequence[++i] = value =  setchar()) && (value != 13)) ;
			
			unsetchar(value);
			sequence[counter] = '\0';
			return FUNCTION;
		}
		
		return character;
	}
	
	if (character == 13) {
		return ' ';
	}
	
	if (character == 8) {
		return 'b';
	}
	
	if(isdigit(character)) {
		while (isdigit(sequence[++i] = character = setchar())) ;
	}
	
	if (character == '.') {
		while (isdigit(sequence[++i] = character = setchar())) ;
	}
	
	sequence[counter] = '\0';
	
	if (counter > 0) {
		unsetchar(character);
	}
	
	return NUMBER;
}
