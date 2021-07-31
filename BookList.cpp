/*
 * BookList.cpp
 * Author: ahmed
 *
 *  Created on: 21/04/2021
 *  Updated on: 27/04/2021
 */

#include "BookList.hpp"

BookList::BookList() {

	TOP_STACK = NULL;
}

BookList::~BookList() {

}


int BookList::addBook(Book &newBook){

	newBook.setNXT(TOP_STACK);
	this->TOP_STACK = &newBook;

	return 0;
}
Book* BookList::dropBook(){
	Book *TEMP_PTR;
	TEMP_PTR = this->TOP_STACK;
	this->TOP_STACK = this->TOP_STACK->getNXT();
	return TEMP_PTR;
	TEMP_PTR->~Book();
}

int BookList::searchBookWithTitle(std::string _title){
	int flag = 0;
	Book *TEMP_PTR;
	TEMP_PTR = this->TOP_STACK;
	while((TEMP_PTR != NULL)&&(flag==0)){
		if(_title == TEMP_PTR->getTitle()){
			TEMP_PTR->printBookInfo();
			flag=1;
		}
		else
			TEMP_PTR = TEMP_PTR->getNXT();

	}
    return 0;
}
void BookList::printBookList(){
	Book* TEMP_PTR;
	TEMP_PTR = this->TOP_STACK;
	while(TEMP_PTR != NULL){
		TEMP_PTR->printBookInfo();
		TEMP_PTR = TEMP_PTR->getNXT();
	}
}

Book* BookList::getTopStack(){
	return this->TOP_STACK;
}

