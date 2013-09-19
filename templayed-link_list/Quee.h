#pragma once
#include <iostream>
#include <string>
using namespace std ;
template <typename K >



class quee
{
public:
	quee(void){head=NULL;tail=NULL;}
	~quee(void){}
	
	quee(K obj){
	quee::node *ptr = new node ;
	head = ptr ;
	tail = ptr ;
	head->setdata(obj) ;
	head->setprev(NULL) ;
	head->setnext(NULL) ;
	} 
private:
	
	class node{
		K data ;
		node *next ;
		node *prev ;
	public:
		template <typename T>
		void setdata(T obj){ data = obj ;} 
		node *getnext(){return next ;}
		node *getprev(){return prev ;}
		void setnext(node *obj){next = obj ;}
		void setprev(node *obj){prev = obj ;}
		K getdata(){return data;}
	};
	//typedef quee::node	*point  ;
	node *head ;
	node *tail ;
public:
	void push(K obj ){

		if (head == NULL)
		{
			quee::node *ptr = new node ;
			head = ptr ;
			tail = head->getnext()  ;
			head->setdata(obj) ;
			head->setprev(NULL) ;
			//head->setnext(tail) ;
		}
		else
		{
			quee::node *ptr = new node ;
			ptr->setdata(obj) ;
			ptr->setnext(NULL) ;
			node *temp = head ;
			while (temp != NULL)
			{

			}
		}
	}
	/////////////////////////checker function

		void check(){
		node *temp ;
		temp =  head ;
		while (temp != NULL)
		{
			cout << temp->getdata() << endl ;
			temp =  temp->getnext() ;
		}
	}

	K pop(){
		node *temp ;
		temp = head ;
		head = head->getnext() ;
		return temp->getdata() ;
	}
};

