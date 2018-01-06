#include<stdio.h>
#include<string.h>


struct Books{

	char title[60];
	char authors[50];
	char publisher[50];
	float price;

};

int main(){


	FILE *file = fopen("book.dat", "rb");

	struct Books book[40];

	int j = 0, i = 0, k;
	char title[60], authors[50], iq;

	if( file != NULL){

		while(1){
	
		fread(book, 1, sizeof(book), file);
//printf("%d\n", check);

//printf("%s\n", book[i].title);
			if( book[i].price == 0 ){
			break;
			}
//printf("%s\t%s\t%s\t%f\n", book[i].title, book[i].authors, book[i].publisher, book[i].price);

		i++;

		}

	printf("book.dat contains %d records\n", i);

	fclose(file);

	}

	j = i;

start:
//printf("%d\n",i);
	if( j == 40 ){
	printf("The file is full\n");
	goto inquiry;
	}
	
	printf("Enter the name of the book\nTo stop entering, press enter at the beginning of a line\n");
	fgets(book[j].title, 60, stdin);
	strtok(book[j].title, "\n");
//printf("%s\n", book[j].title);

	if( strcmp(book[j].title, "\n") == 0){
//printf("works\n");
	goto inquiry;
	}

	printf("Enter the author\n");
	fgets(book[j].authors, 50, stdin);
	strtok(book[j].authors, "\n");

	printf("Enter the publisher\n");
	fgets(book[j].publisher, 50, stdin);
	strtok(book[j].publisher, "\n");

	printf("Enter the price\n");
	scanf("%f", &book[j].price);
	getchar();
	j++;

	goto start;

inquiry:

	


	file = fopen("book.dat", "wb");

//writing to file
	while( i < j ){
	
//printf("%s\t%s\t%s\t%f\n", book[i].title, book[i].authors, book[i].publisher, book[i].price);
	i++;
	}

	fwrite(book, 1, 164*(j+1), file);

// inquiry state

	fclose(file);

	while(1){

	printf("Enter Q, T, or A followed by newline (enter).\n");
	scanf("%c", &iq);
	getchar();
//printf("%c\n", iq);

	if(iq == 'Q'){
	break;
	}

	int count = 0;

	if(iq == 'T'){

		printf("Enter the book title\n");
		fgets(title, 60, stdin);
		strtok(title, "\n");

		for( k = 0; k < j; k++){
			
			if(strcmp(book[k].title, title) == 0){
			printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", book[k].title, book[k].authors, book[k].price);
			count++;
			}
		} 
	
		if(count == 0){
		printf("No such book\n");
		}

	memset(title, 0, sizeof title);

	}

	if(iq == 'A'){

		printf("Enter the book author\n");
		fgets(title, 60, stdin);
		strtok(title, "\n");

		for( k = 0; k < j; k++){
			
			if(strcmp(book[k].authors, title) == 0){
			printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", book[k].title, book[k].authors, book[k].price);
			count++;
			}
		} 
	
		if(count == 0){
		printf("No such book\n");
		}

	memset(title, 0, sizeof title);

	}

	}
	
	
}
