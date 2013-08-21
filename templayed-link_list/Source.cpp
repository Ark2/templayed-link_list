#include <iostream>

#include "link_list.h"

using namespace std ;




int main()
{
	link_list <int> b ;
	b.push(10) ; 
	b.push(11) ;
	b.push(12) ;
	//b.check() ;
	link_list <string> abeer ;
	link_list <int> abeer2 ;
	b.copy(abeer2) ;
}