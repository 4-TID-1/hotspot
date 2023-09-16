/**
	\file	person.hpp
	\brief	Heading file of the Person class
	\copyright	Alexcoratt
	\author	Alexcoratt
	\date	01-04-2023
	\version	0.1

	\par Classes used
		\ref Person
	\par Classes contained
		\ref Person
*/

/// Person description class
/** Contains person data and methods of its processing */

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {
protected:
	std::string _name;	///< Person's name
	int _age;		///< Person's age
	std::string _address;	///< Person's home address

public:
	/// Default constructor
	/// Creates a person and initializes its attributes
	Person();

	/// Constructor which is filling class attributes
	/** Creates a person and initializes its attributes
		\param name Name of the created person
		\param age Age of the created person
		\param address Home address of the created person
	*/
	Person(std::string name, int age, std::string address);

	/// Destructor (releasing memory)
	~Person();

	/// Returns the entire info about the person
	/** If there are no info about the person returns the error message
		\return Info about the person (format <name, age, address>)
	*/
	std::string getFullInfo();

	/** \brief Changes the address of the person
		Before it is changed checks if the entered string fits the format <code, city, street, building index>
		\param newAddress The new address of the person
		\return True if the address changed successfully
	*/
	bool changeAddress(std::string newAddress);
};

#endif
