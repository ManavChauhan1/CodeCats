#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct product    //Structure to store and read the products available
{
    int sno;
    char pname[20];
    float price,gst,discount;

};

void welcome() //This function will be displayed when the Portal is opened
{
    printf("***************WELCOME TO OUR PORTAL***************\n");
    printf("\tSelect from the following options.\n");
    printf("\t1.Display\n\t2.Sign Up\n\t3.Sign In\n\t4.Contact Us\n\t5. Exit\n");
    printf("***************************************************\n");
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

void display()  //This function will display the products available
{
    FILE *fp;
    struct product p[9];
    int i;
     fp=fopen("products.txt","r");
    if(fp==NULL)
    {
        printf("\nFile cannot be opened.");
        exit(1);
    }
    fread(p,sizeof(struct product),9,fp);
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

}
void signin()
{

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

