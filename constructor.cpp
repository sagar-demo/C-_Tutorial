#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string collegeName;
    string author;
    int pages;
    // constructor
    Book(string atitle,string acollege,string Aauthor,int aPages){
      title=atitle;
      collegeName=acollege;
      author=Aauthor;
      pages=aPages;
    }
};
int main()
{
  Book book1("Python","Viva college","JK Rowling",2000);


  cout<<book1.title<<endl;
  cout<<book1.collegeName<<endl;
  cout<<book1.author<<endl;
  cout<<book1.pages;

  return 0;  
}