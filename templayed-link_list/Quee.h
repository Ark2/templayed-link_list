#pragma once
#include <iostream>
#include <string>
using namespace std ;

template <typename K >

class quee
{
public:

K *obj ;
int length ;
int size ;
quee(){
	obj =  new K[10] ;
	length = 0 ;
	size =  10 ;
}
void enquee_s(K dat){
	if (length == size)
	{
		resize() ;
	}
	
	obj[length] = dat ;
	length++;
}
void resize(){
	K *temp = new K[2*length] ;
	size = 2 * length  ;
	for (int i = 0; i <= length; i++)
	{
		temp[i] =  obj[i] ;
	}
	delete obj ;
	obj = temp ;
}
void movedown(){

	for (int i = length; i != 0 ; i--)
	{
		obj[i] = obj[i - 1] ;
	}
}

void moveup(){
	for (int i = 0; i <= length; i++)
	{
		obj[i] =  obj[i+1] ;
	}
}

K pop(){
	K *tem = new K ;
 *tem = obj[0] ;
 moveup() ;
 length-- ;
return *tem ;
}



};

