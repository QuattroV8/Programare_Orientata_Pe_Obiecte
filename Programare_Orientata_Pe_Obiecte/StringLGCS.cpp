// StringLGCS.cpp

#include "StringLGCS.h" // Asociem cu fisierul antent 

// Implementari 

StringLGCS::StringLGCS() // Constructor Default 
{
	const char* defaultLGCSString = "BINE AI VENIT PE COMUNITATEA LEAGUECS!!!";

	allocAndFetchString(&this->string,defaultLGCSString);
   
}

// Constructor cu Parametrii 

StringLGCS::StringLGCS(const char* source)
{
	allocAndFetchString(&this->string,source);
}



// Destructor 

StringLGCS::~StringLGCS()
{
	// Eliberam memoria ocupata de sir 
	delete string;
	string = NULL; 
}

// Getteri && Setteri 

 char* const StringLGCS::getString()
{
	return string;
}

void StringLGCS::setString(const char* source)
{
	delete this->string; // Stergem 
	allocAndFetchString(&string,source); // Realocam pentru alt sir de caractere
}

inline void StringLGCS::allocAndFetchString(char** target, const char* source)
{
	size_t sizeTarget = strlen(source) + 1;
	*target = new char[sizeTarget]; // Alocam Spatiu pentru sir de caractere 
	strcpy_s(*target, sizeTarget, source);
}


// Alte Functii 

