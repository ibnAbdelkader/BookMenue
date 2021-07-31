/*
 * BookList.hpp
 * Author: ahmed
 *
 *  Created on: 21/04/2021
 *  Updated on: 27/04/2021
 */

#ifndef BOOKLIST_HPP_
#define BOOKLIST_HPP_

#include "Book.hpp"
class BookList {
private:
	Book *TOP_STACK;
public:
	/*
	 * Initialize TOP_STACK pointer to point to NULL instead of garbage.
	 * */
	BookList();
	/*
	 * Destructor.
	 * */
	virtual ~BookList();
	/*
	 * Add a book to the stack.
	 * @param &newBook a reference to the book to be added.
	 * @return zero to make sure that the process is fulfilled.
	 * */
	int addBook(Book &newBook);
	/*
	 * Delete a book from the top of the stack.
	 * @return TEMP_PTR pointer to read the book's data before deletion.
	 * */
	Book* dropBook();
	/*
	 * Search for a book by its given title.
	 * @param _title the title to search for.
	 * @return zero to make sure that the process is fulfilled.
	 * */
	int searchBookWithTitle(std::string _title);
	/*
	 * Print all available books in the stack.
	 * */
	void printBookList();
	/*
	Read the current location of top of the stack.
	@return *now the pointer of the current top of stack.
	*/
	Book* getTopStack();
};




#endif /* BOOKLIST_HPP_ */
