#define CATCH_CONFIG_MAIN
#include "BookList.hpp"
#include "catch.hpp"


  Book * addThenDrop(){ 
    Book b1("asd","qwe","123-123",45);
	Book b2("iop","bnm","789-456",20);
	Book b3("rty","fgh","161-272",12);

	BookList List1;
	List1.addBook(b1);
	List1.addBook(b2);
	List1.dropBook();
	return List1.getTopStack();

}

TEST_CASE("Adding & Dropping Books from the stack")
{
	

  REQUIRE(addThenDrop()== NULL);
  
}
/*TEST_CASE(){
	REQUIRE(6*9==42);
}*/
