#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int INFO;
    struct NODE *LINK;
};
void FindLocation(struct NODE *START, int ITEM)
{
    struct NODE *PTR, *SAVE, *LOC;

    if(START==NULL)
    {
        LOC=NULL;
        return;
    }

    if(ITEM<START->INFO)
    {
         LOC=NULL;
        return;
    }

    else
    {
        SAVE=START;
        PTR=START->LINK;
        while(PTR!=NULL)
        {
            if(ITEM<PTR->INFO)
            {
                LOC=SAVE;
                break;
            }
            SAVE=PTR;
            PTR=PTR->LINK;
        }
        if(PTR==NULL)
        {
            LOC=SAVE;
        }
    }
    if(LOC!=NULL)
    {
        printf("Location contain INFO: %d\n", LOC->INFO);
    }
    else
    {
        printf("Location is NULL");
    }
}
int main()
{
    struct NODE *START, *N1, *N2, *N3;
    int ITEM;

    N1= malloc(sizeof (struct NODE));
    N2= malloc(sizeof (struct NODE));
    N3= malloc(sizeof (struct NODE));

    START=N1;
    N1->INFO=10;
    N1->LINK=N2;
    N2->INFO=20;
    N2->LINK=N3;
    N3->INFO=30;
    N3->LINK=NULL;

    printf("Enter the value of ITEM: ");
    scanf("%d", &ITEM);

    FindLocation(START, ITEM);
}

