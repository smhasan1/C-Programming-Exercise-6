# C-Programming-Exercise-6
You are to write a program that reads records of a database and stores it in a file (binary file).  
The record on the following format.  

| Title | Authors | Publisher | Price |
| --- | --- | --- | --- |
| Up to 60 characters | Up to 50 characters | Up to 50 characters | Float. |

The maximum number of records in the file is 40.  
The program starts by reading the file “book.dat” to retrieve the existing database and stores it in an array of structs. A struct can hold all the information about one book.  
If the file does not exist, then you have to create it  
Think of how to open such a file, binary, create if not there, and you can append to it.  
Then the program outputs the to the standard input the number of records in the file in the following format  

**book.dat contains xx records**  
xx is the number of records and is less than or equal 40.  

If the number of records is 40, it displays  
  The file is full  
The you proceed to the “inquiry” state.  
If the number is less than 40, the program will prompt you to enter more books  

**Enter the name of the book**  
**To stop entering, press enter at the beginning of a line**  
  You enter the book title or a new line at the beginning of the line. If new line, it goes to “inquiry state”  
**Enter the author**  
  You enter the author  
**Enter the publisher**  
  You enter the publisher  
**Enter the price**  
  You enter the price  
If the number of books = the maximum number, go to Inquire state” else you go back to “enter the name of the book” until the user enters a new line at the beginning of the line, or you reach the maximum number of books.  

Inquiry state:  

Your program prompts the user  

**Enter Q to end, or T or A to search for title and author**  
  Enter Q, T, or A followed by newline (enter).  
If you entered T, or A the program prompts you as follows  
**Enter the book title** (in case of T) (**Enter the book author** in case of A).  
  You enter the book title/Author (you might want to get fancy and remove any white  
  spaces at the beginning or end, but you will not be graded/tested on that  
The program responds as follows  
If the book exists, it displays  
**Title: the title of the book**  
**Author: the author(s) of the book**  
**Price: the price (%f\n”)**  
If the book does not exist, the program displays  
**No such book (followed by a new line).**  
Then it goes back to “Enter Q to end, or T or A …..”  
  If you enter Q  
The program quits.  

Things to consider  
1. Try to make sense out of the binary file “book.dat” How the data stored in this file?  
2. There is no need to use memory allocation for this, the array should have a maximum length of 40  
3. Please do not use magic numbers.  
