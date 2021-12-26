//This programs is used to store the product details in the file using file handling.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct product
{
    int sno;
    char name[20];
    float price,gst,discount;
};
int main()
{
    FILE *fp;
    struct product p[10];
    int i;
    /*fp=fopen("products.txt","w");
     if(fp==NULL)
    {
        printf("\nFile cannot be opened.");
        exit(1);
    }
    printf("Enter 10 Product details:\n");
    for(i=0;i<10;i++)
    {
        printf("\nEnter Sno for Product %d:",i+1);
        scanf("%d",&p[i].sno);
        printf("\nEnter Name for Product %d:",i+1);
        fflush(stdin);
        gets(p[i].name);
        printf("\nEnter Price for Product %d:",i+1);
        scanf("%f",&p[i].price);
        printf("\nEnter GST percentage for Product %d:",i+1);
        scanf("%f",&p[i].gst);
        printf("\nEnter Discount for Product %d:",i+1);
        scanf("%f",&p[i].discount);
    }
    fwrite(p,sizeof(struct product),10,fp);
    printf("\nData is Stored Successfully");
    fclose(fp);  */
    fp=fopen("products.txt","r");
    if(fp==NULL)
    {
        printf("\nFile cannot be opened.");
        exit(1);
    }
    fread(p,sizeof(struct product),10,fp);
    printf("\n********************The Products are********************\n");
    printf("SNo\t\tProduct Name\t\tPrice\t\tGST\t\tDiscount\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\n",p[i].sno,p[i].name,p[i].price,p[i].gst,p[i].discount);
    }
    fclose(fp);
    return 0;
}
