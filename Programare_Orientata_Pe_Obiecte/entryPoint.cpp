
#include "User.h" // Includem Clasa de Utilizatori 


int main()
{
	User user1,
		user2(1, "Vasile", "vasile@gmail.com", "vasileparola"); // Declaram doua instante (una cu constructoru implicit + constructor cu parametrii )
	// Vizualizam Instantele 

	user1.setUsername("IONEL");

	user1.objectToString(); // Vizualizam Instanta 1 
	user2.objectToString(); // Vizualizam Instanta 2 
	return 0;  
}
