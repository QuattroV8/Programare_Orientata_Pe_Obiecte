// StringLGCS.h 

#pragma once

#include "string.h" // Pentru strcpy

/// MANIPULATOR DE SIRURI DE CARACTERE 


class StringLGCS {

private:

	char* string;


public:
	StringLGCS();
	StringLGCS(const char* source); 
	~StringLGCS();

	// Getteri 

    char* const getString();

	// Setteri 

	void setString(const char* source);


	// Alte Functii  

	static inline void allocAndFetchString(char** target, const char* source); // E INDEPENDENT DE INSTANTE 

};