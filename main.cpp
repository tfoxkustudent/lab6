/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include "LinkedListOfInts.h"

TEST_CASE("Linked list is empyt"){

	LinkedListOfInts list;

	SECTION("new list is empty"){
		REQUIRE( list.isEmpty() == true);
	}

	SECTION("new list has size zero"){
		REQUIRE( list.size() == 0);
	}
}

TEST_CASE("Adding elements from front"){
	LinkedListOfInts list;
	list.addFront('a');

	SECTION("list is not empty"){
		REQUIRE (list.isEmpty()== false);
	}
	SECTION("list has size one"){
		REQUIRE (list.size() == 1);
	}
	SECTION("search 'a' returns true"){
		REQUIRE (list.search('a') == true);
	}

	list.addFront('b');
	SECTION("search('c') should return false"){
		REQUIRE (list.search('c') ==false);
	}
}

TEST_CASE("Adding elements from back"){
	LinkedListOfInts list;
	list.addBack('a');

	SECTION("list is not empty"){
		REQUIRE (list.isEmpty()== false);
	}
	SECTION("list has size one"){
		REQUIRE (list.size() == 1);
	}
	SECTION("search 'a' returns true"){
		REQUIRE (list.search('a') == true);
	}
}

TEST_CASE("Functionality of addBack"){
LinkedListOfInts list;
	for (int i = 0; i <5; i++){
		list.addBack(i);
	}
	std::vector<int> vector = list.toVector();
	std::vector<int> vectorcompare = {0,1,2,3,4};
	SECTION("test if add back actually adds to back"){
		REQUIRE (vector == vectorcompare);
	}
}

TEST_CASE("removing elements from front"){
	LinkedListOfInts list;
	list.addBack('a');

	SECTION("removeFront functionality")
	{
		REQUIRE(list.removeFront() == true);
	}
	list.removeFront();

	SECTION("list is not empty"){
		REQUIRE (list.isEmpty()== true);
	}
	SECTION("list has size zero"){
		REQUIRE (list.size() == 0);
	}
	SECTION("search 'a' returns true"){
		REQUIRE (list.search('a') == false);
	}
}

TEST_CASE("removing elements from back"){
	LinkedListOfInts list;
	list.addBack('a');

	SECTION("removeFront functionality")
	{
		REQUIRE(list.removeBack() == true);
	}


	SECTION("list is not empty"){
		REQUIRE (list.isEmpty()== true);
	}
	SECTION("list has size zero"){
		REQUIRE (list.size() == 0);
	}
	SECTION("search 'a' returns true"){
		REQUIRE (list.search('a') == false);
	}
}
