/*
 * Book.cpp
 * Author: ahmed
 *
 *  Created on: 21/04/2021
 *  Updated on: 27/04/2021
 */

#include "Book.hpp"

Book::Book(std::string _title, std::string _author, std::string _isbn, int _qty) {

	title  = _title;
	author = _author;
	isbn   = _isbn;
	qty    = _qty;
	nxt 	= NULL;
}

Book::~Book() {

}
std::string Book::getTitle(){
	return this->title;
}
void Book::printBookInfo(){
	std::cout << "Title: " << title << std::endl;
	std::cout << "Author: " << author << std::endl;
	std::cout << "ISBN: " << isbn << std::endl;
	std::cout << "Quantity Available: " << qty << std::endl;
	std::cout << "==========================================================="<<std::endl;
}
void Book::setNXT(Book *ptr){
	this->nxt = ptr;

}
Book* Book::getNXT(){
	return this->nxt;
}

