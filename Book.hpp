/*
 * Book.hpp
 * Author: ahmed
 *
 *  Created on: 21/04/2021
 *  Updated on: 27/04/2021
 */

#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>
#include <stdlib.h>

class Book {
private:
	std::string title;
	std::string author;
	std::string isbn;
	int qty;
	Book *nxt;
public:
	/*
	 * Initialize all data of the book while creating it using its constructor.
	 * @param _title the title of the book.
	 * @param _author the author's name.
	 * @param _isbn the book's ISBN.
	 * @param _qty the available quantity of the book.
	 */
	Book(std::string _title, std::string _author, std::string _isbn, int _qty);
	/*
	 * Destructor.
	 */
	virtual ~Book();
	/*
	 * Read title of the book object.
	 * @return title the title of book the object.
	 */
	std::string getTitle();
	/*
	 * Read Author's name of the book object.
	 * @return author the Author's name of book the object.
	 */
	std::string getAuthor();
	/*
	 * Read ISBN of the book object.
	 * @return isbn the ISBN of book the object.
	 */
	std::string getISBN();
	/*
	 * Read Quantity of the book object.
	 * @return qty the Quantity of book the object.
	 */
	int getQTY();
	/*
	 * Initialize next pointer of the book object to point to the next element of the stack.
	 * @param ptr the pointer to next element in stack.
	 */
	void setNXT(Book *ptr);
	/*
	 * Read next element location in stack.
	 * @return *nxt the pointer to next element in stack.
	 */
	Book* getNXT();
	/*
	 * Print all information of the book.
	 */
	void printBookInfo();
	
};



#endif /* BOOK_HPP_ */
