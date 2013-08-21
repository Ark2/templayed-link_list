#pragma once
#include <iostream>
#include <string>
using namespace std ;
template <typename K >
class link_list
{
public:
	link_list(void){head=NULL;tail=NULL;}
	~link_list(void){}
	void copy(link_list &){cout<<"working"<<endl ;}
	link_list(K obj){
	link_list::node *ptr = new node ;
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
	//typedef link_list::node	*point  ;
	node *head ;
	node *tail ;
public:
	void push(K obj ){

		if (head == NULL)
		{
			link_list::node *ptr = new node ;
			head = ptr ;
			tail = ptr ;
			head->setdata(obj) ;
			head->setprev(NULL) ;
			head->setnext(NULL) ;
		}
		else
		{
			link_list::node *ptr = new node ;
			node *temp ;
			temp = head ;
			head = ptr ;
			head->setdata(obj) ;
			head->setnext(temp) ;
			head->setprev(NULL) ;
			temp->setprev(head) ;
		}
	}
	/////////////////////////checker function
	void check(){
		cout << "Head data" << endl ;
		cout<<head->getdata()<<endl ; 
	
		cout << "Head next data" << endl ;
		cout<<head->getnext()->getdata()<<endl ; 
	
		cout << "Head prev pointer" << endl ;
		cout<<head->getprev()<<endl ; 

		cout << "Head prev data" << endl ;
		/*cout<<head->getprev()->getdata()<<endl ; */
		if (head->getprev() == NULL)
		{
			cout <<"NULL POINTER" <<endl ;
		}

		cout << "Head se next pointer ka prev data" << endl ;
		if (head->getnext()->getprev() == NULL)
		{
			cout <<"NULL POINTER" <<endl ;
		}
		else
		{
			cout<<head->getnext()->getprev()->getdata()<<endl ;
		}
		 

		cout << "Head se next pointer ka next data" << endl ;
		if (head->getnext()->getnext() == NULL)
		{
			cout <<"NULL POINTER" <<endl ;
		}
		else{
		cout<<head->getnext()->getnext()->getdata()<<endl ; 
		}
	}
};

