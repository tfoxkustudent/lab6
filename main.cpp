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
