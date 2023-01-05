#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    struct Client
    {
        int Client_ID;
        char First_Name[20];
        char Last_Name[20];
        float Bill_Amount;
        struct Client *next;
    };
        int Add_Client (struct Client **cc)
        // Add Function
        {
            int Client_ID;
            float Bill_Amount;
            char First_Name[20];
            char Last_Name[20];
            struct Client *temp,*t;
            temp=malloc(sizeof(struct Client));
            printf("Enter Client's First Name : ");
            fflush(stdin);
            gets(temp->First_Name);
            printf("Enter Client's Last Name : ");
            gets(temp->Last_Name);
            printf("Enter Client's ID : ");
            scanf("%d",&Client_ID);
            temp->Client_ID=Client_ID;
            printf("Enter Bill Amount : $");
            scanf("%f",&Bill_Amount);
            temp->Bill_Amount=Bill_Amount;
            temp->next=NULL;
            if(*cc==NULL)
                *cc=temp;
                else
                {
                t=*cc;
                while(t->next!=NULL)
                t=t->next;
                t->next=temp;
                                }
                                printf("Client Has Been Added\n");

                                     }
     // Delete Function
    int Delete_Client (struct Client **cc,int Cl_ID) {
        struct Client *temp,*t;
        int i=0;
        if(*cc==NULL)
        printf("There is no Client Registered Here :(");
        else
        if((*cc)->Client_ID==Cl_ID)
        {
       temp=*cc;
       *cc=(*cc)->next;
       free(temp);
        }
        else
        {
       temp=*cc;
       while(temp->next!=NULL)
       {
           if(temp->Client_ID==Cl_ID)
           {
            i=1;
            break;

           }
           t=temp;
           temp=temp->next;

       }

    }   if(i!=1)
        printf("Client Deleted :)\n");
       else
       {
           t->next=temp->next;
           free(temp);
       }

    }
    // Show accounts Function
    int Show_Clients (struct Client *cc)
        {
        while(cc)
                {
                printf("First Name : ");
                puts(cc->First_Name);
                printf("Last Name : ");
                puts(cc->Last_Name);
                printf("Client ID : %d\n",cc->Client_ID);
                printf("Bill Amount : %f $\n\n",cc->Bill_Amount);
                cc=cc->next;
                printf("=======================================\n");
                }

    }
    int Search_Client (struct Client *cc,int Cl_ID)
    { int i=0;
    if (cc==NULL)
        printf("There is No Clients Yet :/");
    else {
        while(cc){
            if(cc->Client_ID==Cl_ID){
                i=1;
                break;
            }
            cc=cc->next;
        }
            if (i!=1)
            printf("There is No client With this ID");

             else {
                printf("First Name : ");
                puts(cc->First_Name);
                printf("Last Name : ");
                puts(cc->Last_Name);
                printf("Client ID : %d\n",cc->Client_ID);
                printf("Bill Amount : %f $\n\n",cc->Bill_Amount);
            }
    }



    }
    int timelol (struct Client *cc)
    {
         {
            time_t current_time=time(NULL);
            struct tm*tm=localtime(&current_time);
            printf("%s\n",asctime(tm));


        }
    }
    int Main_Menu (void)
{{
            time_t current_time=time(NULL);
            struct tm*tm=localtime(&current_time);
            printf("%s\n",asctime(tm));

}
    int choice;
    printf("---------------------------------------Clients Management Menu---------------------------------------\n");
    printf("1: Press 1 To Add Client(s)");
    printf("\n2: Press 2 To Delete Client(s)");
    printf("\n3: Press 3 To Show All Clients");
    printf("\n4: Press 4 To Search For A Client");
    printf("\n5: Press 5 To Quit The Program");
    printf("\n=====================================================================================================");
    printf("\n\nEnter your choice : ");
    scanf("%d",&choice);
    return(choice);
}
main()
{ int LOL;
    struct Client *cc=NULL;
    while(1)
    { system("cls");
        switch(Main_Menu())
        {
        case 1:
            printf("-------------------------------------Adding Account-------------------------------------\n");
            Add_Client(&cc);
            timelol(cc);
            break;
        case 2:
            printf("-------------------------------------Deleting Account-------------------------------------\n");
            printf("enter Clinet Id To delete It : ");
            scanf("%d",&LOL);
            Delete_Client(&cc,LOL);
            timelol(cc);
            printf("=======================================\n");
            break;
        case 3:
            printf("\n---------------------------------------Clients History---------------------------------------\n");
            Show_Clients(cc);
            timelol(cc);
            break;
        case 4:
            printf("-------------------------------------Looking For an Account ? -------------------------------------\n");
            printf("Client's ID : ");
            scanf("%d",&LOL);
            Search_Client(cc,LOL);
            break;
        case 5:
            exit(0);

    }

                    getche();
                    }
    }
