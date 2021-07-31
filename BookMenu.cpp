//============================================================================
// Name        : BookMenu.cpp
// Author      : Ahmed Abdelkader
// Version     :
// Copyright   : Your copyright notice
// Description : Book Menu - Stack linked based Implementation
//============================================================================

#include "BookList.hpp"
int main(int argc, char **argv) {
	Book b1("asd","qwe","123-123",45);
	Book b2("iop","bnm","789-456",20);
	Book b3("rty","fgh","161-272",12);
	//b1.printBookInfo();
	BookList List1;
	List1.addBook(b1);
	List1.addBook(b2);
	List1.addBook(b3);
	List1.dropBook()->printBookInfo();
	//List1.dropBook()->printBookInfo();
	List1.printBookList();
	//List1.searchBookWithTitle("rty");


	return 0;
}
