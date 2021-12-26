#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int login_status=0;

struct product    //Structure to store and read the products available
{
    int sno;
    char pname[20];
    float price,gst,discount;

};

typedef struct sdetails   //Structure for storing the customer details
{
    char name[30],address[100],email[30],username[20],password[20],mnum[12];
}sdetails;

void welcome() //This function will be displayed when the Portal is opened
{
    printf("***************WELCOME TO OUR PORTAL***************\n");
    printf("\tSelect from the following options.\n");
    printf("\t1.Display\n\t2.Sign Up\n\t3.Sign In\n\t4.Contact Us\n\t5. Exit\n");
    printf("***************************************************\n");
}


void display()  //This function will display the products available from the file products
{
    FILE *fp;
    struct product p[9];
    int i,shift;
     fp=fopen("products.txt","r");
    if(fp==NULL)
    {
        printf("\nFile cannot be opened.");
        exit(1);
    }
    fread(p,sizeof(struct product),9,fp);
    if(login_status==0)
    {
         printf("\nYOU ARE NOT LOGGED IN. PLEASE LOGIN FIRST.\nPress 3 to move to SIGN IN Menu\n");
         scanf("%d",&shift);
         if(shift==3)
         {
             signin();
         }
         else
            welcome();
    }
    printf("\n**********************************The Products are**********************************\n");
    printf("SNo\t\tProduct Name\t\tPrice\t\tGST\t\tDiscount\n");
    for(i=0;i<9;i++)
    {
        printf("%d\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\n",p[i].sno,p[i].pname,p[i].price,p[i].gst,p[i].discount);
    }
    printf("\n************************************************************************************\n");
    fclose(fp);

}

void signup()
{
    FILE *fp;
    sdetails det1;

    fp = fopen("customers.txt","a+");
    if(fp==NULL)
    {
        printf("\nFile cannot be opened.");
        exit(1);
    }

     printf("***************ENTER DETAILS TO SIGNUP***************\n");
    printf("\tPLEASE ENTER USERNAME:");
    fflush(stdin);
    gets(det1.username);
    printf("\tPLEASE ENTER YOUR PASSWORD:");
    gets(det1.password);
     printf("\tPLEASE ENTER YOUR NAME:");
    gets(det1.name);
    printf("\tPLEASE ENTER ADDRESS:");
    gets(det1.address);
    printf("\tPLEASE ENTER CONTACT NUMBER:");
    gets(det1.mnum);
    printf("\tPLEASE ENTER EMAIL:");
    gets(det1.email);
     fwrite(&det1,sizeof(sdetails),1,fp);
     printf("\t\tSIGNED UP SUCCESSFULLY\n\t\tLOGIN USING YOUR USERNAME AND PASSWORD.");
     signin();

    fclose(fp);
    main();
}


void signin()
{
      FILE *fp;
     char username[50],password[20];
     fp = fopen("customers.txt","r");
    sdetails det1;
    printf("Enter Username:");
    fflush(stdin);
     gets(username);
    printf("Enter Password:");
    fflush(stdin);
    gets(password);

   while(fread(&det1,sizeof(det1),1,fp))
    {
        if(strcmp(username,det1.username)==0 && strcmp(password,det1.password)==0)
        {
            printf("\nLOGIN SUCCESSFUL.\n");
             printf("********************************************YOUR DETAILS ARE********************************************");
            printf("\nName:%s\nAddress:%s\nContact Number:%s\nEmail:%s\nUsername:%s\nPassword:%s",det1.name,det1.address,det1.mnum,det1.email,det1.username,det1.password);
        }
        else
            printf("Please Enter Correct Username and Password.");
    }
    fclose(fp);
}


void contactus()    //This function will return data to contact the customer service.
{
    char key;
    printf("**************************HOW CAN WE HELP YOU**************************\n");
    printf("\t\tHow May I Help You.\n\tOUR HEAD OFFICE:THE COMPANY, SCO-17, DDA MARKET, SECTOR-17, NEW DELHI\n\tMOBILE NUMBER:9999444412\tLANDLINE:011-432432099\n\tEMAIL:thecompany17@gmail.com\n");
    printf("\t\tWe are here for your convenience. Feel Free to Reach.\n");
    printf("**********************************************************************\n");
    printf("Press any keyboard character to return to main menu.\n");
    main();
}


 int main()
{
    fflush(stdin);
    int por; //Initializing variable to input portal choices
    welcome();
    scanf("%d",&por);
    switch(por)
    {
    case 1:
        display(); //Calling Display Function
        break;
    case 2:
        signup(); //Calling Sign up Function
        break;
    case 3:
        signin(); //Calling Sign in Function
        break;
    case 4:
        contactus(); //Calling Contact us Function
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("\nPlease Enter a valid input.\n");
        break;
    }
    return 0;
}

