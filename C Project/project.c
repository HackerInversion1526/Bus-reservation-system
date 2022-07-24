#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 256
int booked = 0;
int allchoice;
int index1=0;
struct details
{
	char user[100];
	char password[100];
}d[100];
int cancelled=0;
void displaychoice();
void login();
void create();
void book();
void displaychoice2();
void view_buses();
void print_ticket();
void cancel();
void status();
void sagar();
void lake();
void rishab();
void rrr();
void abhishek();
void sagar1();
void lake1();
void rishab1();
void rrr1();
void abhishek1();
void sagar2();
void lake2();
void rishab2();
void rrr2();
void abhishek2();


int main()
{
    char choice1;
    printf("              ===================== BUS RESERVATION SYSTEM ===================\n");
	printf("              =================================================================\n");
    printf("                      1.Login\n");
    printf("                      2.Create Account\n");
    printf("                      Enter your choice:");
    scanf("%c",&choice1);
    switch(choice1)
    {
	case '1':
		printf("            \nPress any key to continue...\n");
		getch();
		system("cls");
		login();
		break;
	case '2':
		create();
		break;
    }
	

    
    return 0;
}
void displaychoice()
{
 char choice;
    printf("                    ========================== ENTER YOUR CHOICE ========================\n");
    printf("                         1.VIEW BUSES                                            \n");
    printf("                         2.BOOK TICKETS                                          \n");
    printf("                         3.VIEW TICKET                                          \n");
    printf("                         4.CANCEL TICKETS                                        \n");
    printf("                         5.BUS STATUS                                           \n");
	printf("                         6.EXIT                                                  \n");
	fflush(stdin);
    scanf("%c",&choice); 
	fflush(stdin);
	switch(choice) 
	{
		case '1':
		printf("            \nPress any key to continue...\n");
		getch();
			view_buses();
			break;
		case '2':
		printf("            \nPress any key to continue...\n");
		getch();
			book();
			break;
		case '3':
		printf("            \nPress any key to continue...\n");
		getch();
			print_ticket();
			break;
		case '4':
		printf("            \nPress any key to continue...\n");
		getch();
			cancel();
			break;
		case '5':
		printf("            \nPress any key to continue...\n");
		getch();
			status();
			break;
		case '6':
		exit(0);
		default:
		printf("Please enter a valid choice\n");
	
		
	}
}
void create()
{
    char u[100],p[100];

    system("cls");
	int press_any_key;
	printf("                    ***************** CREATE ACCOUNT *******************\n\n");
	printf("                    Enter your username for sign up: ");
	scanf("%s",&d[index1].user);

	printf("                    Enter your password for sign up: ");
	scanf("%s",&d[index1].password);
    index1++;

	fflush(stdin);


	
	printf("                  \nYour account has been created\n");
	printf("                  \nPress any key to continue...\n");
	
	getch();
    system("cls");

	login();
}

void login()
{

    char username[100],login_password[100];
    system("cls");
	printf("                    ***************** LOGIN PAGE *******************\n\n");
	printf("                    Enter your username for log in: ");
	scanf("%s",username);

	printf("                    Enter your password for log in: ");
	scanf("%s",login_password);

	int c=0;
	for(int i=0;i<index1;i++)
	{
		if(!(strcmp(d[i].user,username)) && !(strcmp(d[i].password,login_password)))
		c++;
	}

	fflush(stdin);

   if(c==1)
	{
	printf("\n                  Login Succesful\n");
	printf("                  \nPress any key to continue...\n");
    
    getch();
	system("cls");
	displaychoice();
	}
    else
	{
	printf("\n                    Incorrect Login details\n");	
	printf("                  \nPress any key to continue...\n");
    
    getch();
	system("cls");
	
    char choice1;
    printf("             *****************BUS RESERVATION SYSTEM **********************\n\n");
    printf("             1.Login\n");
    printf("             2.Create Account\n");
    printf("             Enter your choice:");
    scanf("%c",&choice1);
    switch(choice1)
    {
	case '1':
		printf("            \nPress any key to continue...\n");
		getch();
		system("cls");
		login();
		break;
	case '2':
		create();
		break;
    }
	}
}
void book()
{
	
	FILE *ptr;
	ptr = fopen("project.txt","w");
	char source[56];
	char dest[56];
	char date[56];
	char firstname[56];
	char lastname[56];

	system("cls");
	printf("                    ======================= BOOKING ======================\n\n");
	printf("                    Enter your source:");
	gets(source);
	printf("                    Enter your destination:");
	gets(dest);
	printf("                    Enter the date in dd/mm/yyyy format:");
	gets(date);	
	printf("                    Enter your first name:");
	gets(firstname);
	fflush(stdin);
	printf("                    Enter your last name:");
	gets(lastname);

	
	
	

	fprintf(ptr,"%s\n",source);
	fprintf(ptr,"%s\n",dest);
	fprintf(ptr,"%s\n",date);
	fprintf(ptr,"%s\n",firstname);
	fprintf(ptr,"%s\n",lastname);

	fclose(ptr);
	printf("            \nPress any key to continue...\n");
	getch();
	

	displaychoice2(firstname);
	


}
void replace(char *names,char *fname,int num)
{

        FILE *fptr1, *fptr2;
        int lno, linectr = 0;
        char str[MAX];      
        char newln[MAX], temp[] = "temp.txt";
		fflush(stdin);
        fptr1 = fopen(fname, "r");
        if (!fptr1) 
        {
                printf("Unable to open the input file!!\n");
    
        }
		fflush(stdin);
        fptr2 = fopen(temp, "w");
        if (!fptr2) 
        {
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
            
        }
		lno = num-1;
        lno++;
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
			
            fgets(str, MAX, fptr1);
            if (!feof(fptr1)) 
            {
                linectr++;
                if (linectr != lno) 
                    {
                        fprintf(fptr2, "%s", str);
                    } 
                    else 
                    {	
						if(strcmp(str,"1.Empty\n")==0||strcmp(str,"2.Empty\n")==0||strcmp(str,"3.Empty\n")==0||strcmp(str,"4.Empty\n")==0||strcmp(str,"5.Empty\n")==0||strcmp(str,"6.Empty\n")==0||strcmp(str,"7.Empty\n")==0||strcmp(str,"8.Empty\n")==0||strcmp(str,"9.Empty\n")==0||strcmp(str,"10.Empty\n")==0||strcmp(str,"11.Empty\n")==0||strcmp(str,"12.Empty\n")==0||strcmp(str,"13.Empty\n")==0||strcmp(str,"14.Empty\n")==0||strcmp(str,"15.Empty\n")==0||strcmp(str,"16.Empty\n")==0)
                        {
						fprintf(fptr2, "%d.%s\n", lno,names);
						booked = 1;}
						else
						{
						if(cancelled==0)
						{
						printf("The seat is already booked please enter a valid seat no.");
						}
						fprintf(fptr2, "%d.%s\n", lno,names);
						}
                    }
                }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);
        rename(temp, fname);
		printf("\n");
		
}

void sagar(char *names)
{
	FILE *ptr1;
	FILE *fptr2;
	int choice4;
	ptr1 = fopen("sagar.txt","a+");
	fptr2 = fopen("project.txt","a");
	char filename[55] = "sagar.txt";
	printf("            ================== WELCOME TO SAGAR TRAVELS =================\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr1);
		putchar(ch1);

	

    } while(ch1 != EOF); 
	fclose(ptr1);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&allchoice);
	fprintf(fptr2,"%d\n",allchoice);
	fprintf(fptr2,"%s","SAGAR TRAVELS");
	replace(names,filename,allchoice);
	if(booked == 1)
	{
	printf("            ============== Your ticket has been booked ============\n");
	printf("            ============== Amount to be payed = 400/- =============\n");
	
	}
	booked=0;
	printf("            Press any key to continue...\n");
	getch();
	system("cls");
	fclose(fptr2);
	displaychoice();

}

void lake(char *names)
{
	FILE *ptr2;
	FILE *fptr2;
	int choice5;
	ptr2 = fopen("lake.txt","a+");
	fptr2 = fopen("project.txt","a");
	char filename[55] = "lake.txt";
	printf("       =================== WELCOME TO LAKE CITY TRAVELS ===================\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr2);
		putchar(ch1);

    } while(ch1 != EOF); 
	fclose(ptr2);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&allchoice);
	fprintf(fptr2,"%d\n",allchoice);
	fprintf(fptr2,"%s","LAKECITY TRAVELS");
	replace(names,filename,allchoice);
	if(booked==1)
	{
	printf("            ============== Your ticket has been booked ============\n");
	printf("            ============== Amount to be payed = 400/- =============\n");
	
	}
	booked = 0;
	printf("            Press any key to continue...\n");
	getch();
	system("cls");
	fclose(fptr2);
			displaychoice();


}

void rishab(char *names)
{
	FILE *ptr3;
		FILE *fptr2;
	int choice6;
	ptr3 = fopen("rishab.txt","a+");
	fptr2 = fopen("project.txt","a");
	char filename[55] = "rishab.txt";
	printf("         ================== WELCOME TO RISHAB TRAVELS ==================\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr3);
		putchar(ch1);

	

    } while(ch1 != EOF); 
	fclose(ptr3);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&allchoice);
	fprintf(fptr2,"%d\n",allchoice);
	fprintf(fptr2,"%s","RISHAB TRAVELS");
	replace(names,filename,allchoice);
	if(booked==1)
	{
	printf("            ============== Your ticket has been booked ============\n");
	printf("            ============== Amount to be payed = 400/- =============\n");
	
	}
	booked = 0;
	printf("            Press any key to continue...\n");
	getch();
	system("cls");
	fclose(fptr2);
			displaychoice();

}

void rrr(char *names)
{
	FILE *ptr4;
		FILE *fptr2;
	int choice7;
	ptr4 = fopen("rrr.txt","a+");
	fptr2 = fopen("project.txt","a");
	char filename[55] = "rrr.txt";
	printf("         ================== WELCOME TO RRR TRAVELS ==================\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr4);
		putchar(ch1);

	

    } while(ch1 != EOF); 
	fclose(ptr4);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&allchoice);
	fprintf(fptr2,"%d\n",allchoice);
	fprintf(fptr2,"%s","RRR TRAVELS");
	replace(names,filename,allchoice);
	if(booked==1)
	{
	printf("            ============== Your ticket has been booked ============\n");
	printf("            ============== Amount to be payed = 400/- =============\n");
	
	}
	booked = 0;
	printf("            Press any key to continue...\n");
	getch();
	system("cls");
	fclose(fptr2);
			displaychoice();

}
void abhishek(char *names)
{
	FILE *ptr5;
	FILE *fptr2;
	int choice8;
	ptr5 = fopen("abhishek.txt","a+");
	fptr2 = fopen("project.txt","a");
	char filename[55] = "abhishek.txt";
	printf("        =================== WELCOME TO ABHISHEK TRAVELS=================\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr5);
		putchar(ch1);

	

    } while(ch1 != EOF); 
	fclose(ptr5);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&allchoice);
	fprintf(fptr2,"%d\n",allchoice);
	fprintf(fptr2,"%s","ABHISHEK TRAVELS");
	replace(names,filename,allchoice);
	if(booked==1)
	{
	printf("            ============== Your ticket has been booked ============\n");
	printf("            ============== Amount to be payed = 400/- =============\n");
	
	}
	booked=0;

	printf("            Press any key to continue...\n");
	getch();
	system("cls");
	fclose(fptr2);
			displaychoice();

}


void displaychoice2(char *names)
{
FILE *fptr;

fptr = fopen("buses.txt","r");
system("cls");
char ch;
	do 
    {
        ch = fgetc(fptr);
        putchar(ch);

    } while(ch != EOF); 
	
char choice2;
printf("\n\n");
printf("                      Enter your choice:\n");
choice2 = getchar();
	switch(choice2)
	{
		case '1':
			sagar(names);
			break;
		case '2':
			lake(names);
			break;
		case '3':
			rishab(names);
			break;
		case '4':
			rrr(names);
			break;
		case '5':
			abhishek(names);
			break;
		default:
			printf("Please enter a valid choice\n");
	}
	fclose(fptr);
}


void view_buses()
{
	system("cls");
	printf("          ============== AVAILABLE BUSES =============  \n");
	printf("          1. SAGAR TRAVELS \n");
	printf("          2. LAKE CITY TRAVELS \n");
	printf("          3. RISHAB TRAVELS \n");
	printf("          4. RRR TRAVELS \n");
	printf("          5. ABHISHEK TRAVELS \n");
	fflush(stdin);
	printf("Press any key to continue...[]\n");
	getch();
	system("cls");
	displaychoice();
}
void print_ticket()
{
	char source[142];
	char destination[142];
	char date[142];
	char firstname[142];
	char lastname[142];
	char busname[56];
	int seat;
	system("cls");
	printf("                ====================== Ticket ====================== \n");
	FILE *b;
	b=fopen("project.txt","r");
	fscanf(b,"%s",source);
	
	fscanf(b,"%s",destination);
	fscanf(b,"%s",date);
	fscanf(b,"%s",firstname);
	fscanf(b,"%s",lastname);
	fscanf(b,"%d",&seat);
	fscanf(b,"%s",busname);
	printf("                       Date: %s\n",date);
	printf("                       Name: %s %s\n",firstname,lastname);
	printf("                       Source: %s\n",source);
	printf("                       Destination: %s\n",destination);
	printf("                       Fare: Rs 400/- \n");
	printf("                       Seat No. : %d\n",seat);
	printf("                       Bus name: %s\n",busname);
	printf("Press any key to continue...[]\n");
	getch();
	system("cls");
	displaychoice();
	
}

void cancel()
{
	char choice5;
	printf("             =================== CANCEL TICKETS===================\n");
	printf("          Enter the bus no. of the bus that you have booked:\n");
	printf("          1. SAGAR TRAVELS \n");
	printf("          2. LAKE CITY TRAVELS \n");
	printf("          3. RISHAB TRAVELS \n");
	printf("          4. RRR TRAVELS \n");
	printf("          5. ABHISHEK TRAVELS \n");
	scanf("%c",&choice5);
	printf("Press any key to continue...[]\n");
	getch();
	system("cls");
	switch(choice5)
	{
		case '1':
			sagar1();
		case '2':
			lake1();
		case '3':
			rishab1();
		case '4':
			rrr1();
		case '5':
			abhishek1();
		default:
			printf("Please enter a valid choice\n");
	}
	
}

void sagar1()
{
	FILE *fptr9;
	int num;
	printf("               ============================= WELCOME TO SAGAR TRAVELS=========================\n");
	printf("               Please enter your seat number:");
	scanf("%d",&num);
	char filename[55] = "sagar.txt";
	char names[100]="Empty";
	cancelled=1;
	replace(names,filename,num);
	printf("Ticket cancelled succesfully\n");
	printf("Press any key to continue...[]\n");
	getch();
	system("cls");
	fptr9 = fopen("project.txt","w");
	fclose(fptr9);
	displaychoice();

}

void abhishek1()
{
	FILE *fptr9;
	int num;
	printf("               ============================= WELCOME TO ABHISHEK TRAVELS=========================\n");
	printf("               Please enter your seat number:");
	scanf("%d",&num);
	char filename[55] = "abhishek.txt";
	char names[100]="Empty";
	cancelled=1;
	replace(names,filename,num);
	printf("Ticket cancelled succesfully\n");
	printf("Press any key to continue...[]\n");
	getch();
	system("cls");
	fptr9 = fopen("project.txt","w");
	fclose(fptr9);
	displaychoice();
}

void lake1()
{
	FILE *fptr9;
	int num;
	printf("               ============================= WELCOME TO LAKE CITY TRAVELS=========================\n");
	printf("               Please enter your seat number:");
	scanf("%d",&num);
	char filename[55] = "lake.txt";
	char names[100]="Empty";
	cancelled=1;
	replace(names,filename,num);
	printf("Ticket cancelled succesfully\n");
	printf("Press any key to continue...[]\n");
	getch();
	system("cls");
	fptr9 = fopen("project.txt","w");
	fclose(fptr9);
	displaychoice();

}

void rishab1()
{
	FILE *fptr9;
	int num;
	printf("               ============================= WELCOME TO RISHAB TRAVELS=========================\n");
	printf("               Please enter your seat number:");
	scanf("%d",&num);
	fflush(stdin);
	char filename[55] = "rishab.txt";
	char names[100]="Empty";
	cancelled=1;
	replace(names,filename,num);
	printf("Ticket cancelled succesfully\n");
	printf("Press any key to continue...[]\n");
	getch();
	system("cls");
	fptr9 = fopen("project.txt","w");
	fclose(fptr9);
	displaychoice();

}

void rrr1()
{
	FILE *fptr9;
	int num;
	printf("               ============================= WELCOME TO RRR TRAVELS=========================\n");
	printf("               Please enter your seat number:");
	scanf("%d",&num);
	char filename[55] = "rrr.txt";
	char names[100]="Empty";
	cancelled=1;
	replace(names,filename,num);
	printf("Ticket cancelled succesfully\n");
	printf("Press any key to continue...[]\n");
	getch();
	system("cls");
	fptr9 = fopen("project.txt","w");
	fclose(fptr9);
	displaychoice();

}
void status()
{
    int n;
system("cls");
printf("              =====================BUS RESERVATION SYSTEM=====================\n");
printf("              ================================================================\n");
printf("1. Sagar Travels \n2.Lake City Travels \n3.Rishab Travels \n4.RRR Travels \n5.Abhishek Travels \n");
printf("Enter the Bus No.---------->\n");
scanf("%d",&n);
switch (n)
{
    case 1:
    sagar2();
    break;

    case 2:
    lake2();
    break;

    case 3:
    rishab2();
    break;
    
    case 4:
    rrr2();
    break;
    
    case 5:
    abhishek2();
    break;
}
}
void sagar2() 
{
    FILE* ptr;
    char ch;
    ptr = fopen("sagar.txt", "r");
 
    if (ptr == NULL) {
        printf("file can't be opened, check after some time \n");
    }
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(ptr);
	printf("Press any key to continue...\n");
	getch();
	system("cls");
	displaychoice();
}

void lake2(){
    FILE* ptr;
    char ch;
    ptr = fopen("lake.txt", "r");
 
    if (ptr == NULL) {
        printf("file can't be opened, check after some time \n");
    }
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(ptr);
	printf("Press any key to continue...\n");
	getch();
	system("cls");
	displaychoice();
}
void rishab2(){
     FILE* ptr;
    char ch;

    ptr = fopen("rishab.txt", "r");
 
    if (ptr == NULL) {
        printf("file can't be opened, check after some time \n");
    }
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(ptr);
	printf("Press any key to continue...\n");
	getch();
	system("cls");
	displaychoice();
}
void rrr2() {
  FILE* ptr;
    char ch;
    ptr = fopen("rrr.txt", "r");
 
    if (ptr == NULL) {
        printf("file can't be opened, check after some time \n");
    }
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(ptr);
	printf("Press any key to continue...\n");
	getch();
	system("cls");
	displaychoice();
}
void abhishek2() {
     FILE* ptr;
    char ch;
    ptr = fopen("abhishek.txt", "r");
 
    if (ptr == NULL) {
        printf("file can't be opened, check after some time \n");
    }
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(ptr);
	printf("Press any key to continue...\n");
	getch();
	system("cls");
	displaychoice();
}
