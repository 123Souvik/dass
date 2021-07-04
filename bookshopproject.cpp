#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Book{
	protected:
				char author[20],publishers[20],title[20];
				float price;
				int stock;
	public:
				void feeddata();
				void showdata();
				void editdata();
				int search(char b[20], char a[20]);
				void Buybook();			
};
 void Book::feeddata()
 {
 	cout<<"Enter Author Name : ";
 	cin>>author;
 	cout<<"Enter Publishers Name :";
 	cin>>publishers;
 	cout<<"Enter Title Of the Book :";
 	cin>>title;
 	cout<<"Enter Price of The Book :";
 	cin>>price;
 	cout<<"Enter Stock Of the Book:";
 	cin>>stock;
 }
 void Book:: showdata()
 {
 	cout<<"Author Name :"<<author<<endl;
 	cout<<"Publishers Name :"<<publishers<<endl;;
 	cout<<"Title Name :"<<title<<endl;
 	cout<<"Price of the Book :"<<price<<endl;
 	cout<<"Stock Of the Book :"<<stock<<endl;
 }
 void Book::editdata(){
 	cout<<"Enter Author Name : ";
 	cin>>author;
 	cout<<"Enter Publishers Name :";
 	cin>>publishers;
 	cout<<"Enter Title Of the Book :";
 	cin>>title;
 	cout<<"Enter Price of The Book :";
 	cin>>price;
 	cout<<"Enter Stock Of the Book:";
 	cin>>stock;
 }
 int Book :: search(char b[20], char a[20] ){
 	if(strcmp(b,title)==0 && strcmp(a,author)==0)
 	return 1;
 	else
 	return 0;
 }
 void Book::Buybook(){
 	int count;
 	cout<<"\nEnter Number Of Books";
 	cin>>count;
 	if(count<=stock){
 		stock=stock-count;
 		cout<<"Books Bought Sucessfully";
 		cout<<"\nAmount ="<<price*count;
 		
	 }
	 else
	 	cout<<"Requried Copies not in stock";
 }
 int main(){
 
 	Book B;
 	int i=0,r,t,choice;
 	char titlebuy[20],authorbuy[20];
 	while(1){
 			cout<<"Menu"
 			<<"\n1. Entry Of New Book"
 			<<"\n2. Buy Book"
 			<<"\n3. Search For Book"
 			<<"\n4. Edit Details Of Book"
 			<<"\n5. Exit"
 			<<"\n\nEnter Your Choice :";
 			cin>>choice;
 			
 			switch(choice){
 				case 1:
 						B.feeddata();
 						i++;
 						break;
 				case 2:
				 		cout<<"Enter Title of the Book :";
						 cin>>titlebuy;
						 cout<<"Enter Author of the Book :" ;
						 cin>>authorbuy;
						 for(t=0;t<i;t++){
						 	if(B.search(titlebuy,authorbuy))
						 	{
						 		B.Buybook();
						 		break;
							 }
						         
					}
					if(t==1)
					cout<<"The Book is unavilable";
					break;
				case 3:
						cout<<"Enter Title of the Book :";
						 cin>>titlebuy;
						 cout<<"Enter Author of the Book :" ;
						 cin>>authorbuy;
						 for(t=0;t<i;t++){
						 	if(B.search(titlebuy,authorbuy))
						 	{
						 		cout<<"\nBook found Sucessfully";
						 		B.showdata();
								 break;
							}
							
							 }
							 if(t==1)
							cout<<"The Book is unavilable";
							break;
				case 4:
							cout<<"Enter Title of the Book :";
							cin>>titlebuy;
						 	cout<<"Enter Author of the Book :" ;
						 	cin>>authorbuy;
						 	for(t=0;t<i;t++){
						 		if(B.search(titlebuy,authorbuy))
						 		{
						 			cout<<"\nBook found Sucessfully";
						 			B.editdata();
									 break;
								}
							
							 }
							 if(t==1)
							cout<<"The Book is unavilable";
							break;
				case 5:	
						exit(0);
				default:
							cout<<"Invalid Choice";						
 
}
}
		return 0;
}
 
 
