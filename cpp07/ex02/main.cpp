#include "Array.hpp"
int main(void)
{
 //   int *a =new int();
 //   std::cout << a << std::endl;

	Array<int>		array1(20);
    Array<int>      array2;
	std::cout << "First array size: " << array2.size() << std::endl;
	std::cout << "Empty array size: " << array1.size() << std::endl;


	array1[10] = 42;
	std::cout << "array1[10] : " << array1[10] << std::endl;
	array1[11] = 84;
	std::cout << "array1[11] : " << array1[11] << std::endl;
	
    Array<int>		array3(array1);
	array2 = array1;
	std::cout << "Copying array1 in array2..." << std::endl;
	array1[10] = 0;
	array1[11] = 0;

	std::cout << "array3[10] : " << array3[10] << std::endl;
	std::cout << "array3[11] : " << array3[11] << std::endl;

	std::cout << "array2[10] : " << array2[10] << std::endl;
	std::cout << "array2[11] : " << array2[11] << std::endl;

	std::cout << "Trying to set array1[30]" << std::endl;
	try {
		array1[30] = 42;
		std::cout << "SUCCESS, but was not expected !" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (expected): " << e.what() << std::endl;
	}

	return (0);
}