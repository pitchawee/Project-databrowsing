#include <stdio.h>
#include <string.h>

struct student 
{
    int ID  ;
    char Name [50];
    float GPA;
    int Year ;
    char Faculty [50];
    char Major [50];
    char University [50];
};

struct student input() //input()
{
    struct student tmp; //tmp
    printf("ID : "); 
    scanf("%d",&tmp.ID); 
    getchar();
    printf("Name : "); 
    gets(tmp.Name);
    printf("GPA : ");
    scanf("%f",&tmp.GPA);
    printf("Year : "); 
    scanf("%d",&tmp.Year);
    printf("Faculty : "); 
    scanf("%s",&tmp.Faculty);
    printf("Major : "); 
    scanf("%s",&tmp.Major);
    printf("University : "); 
    scanf("%s",&tmp.University);
    return tmp;
}

void main()
{
    struct student nisit[3]; //nisit[5]
    int i, x;
    int count [5]={0,0,0,0,0};
    for(i=0 ; i<3 ; i++)
    {
        printf("Enter student #%d information\n",i+1);
        nisit[i] = input() ;
        printf("\n");
    }
    while(1)
    {
        printf("Enter an ID to search (-1 to quit) : ");
        scanf("%d",&x);
        if (x==-1) 
        break;

        for(i=0 ; i<3 ; i++)
        {
            if (x == nisit[i].ID)
            //printf("Name : %s\nGPA : %f\n",nisit[i].Name,nisit[i].GPA);
            {
                printf("Name : %s\n",nisit[i].Name);
                printf("GPA : %.02f\n",nisit[i].GPA);
                printf("Year : %d\n",nisit[i].Year);
                printf("Faculty : %s\n",nisit[i].Faculty);
                printf("Major : %s\n",nisit[i].Major);
                printf("University : %s\n",nisit[i].University);
                
                float GPA = nisit[i].GPA;
        
		        	if(GPA>=4.00)
		        {
		            count[0]+= 1;
		            printf("You have pass\n");
		            printf("Grade A\n");
		        }
		         if(GPA>=3.50 && GPA<4.00)
		        {
		            count[1]+= 1;
		            printf("You have pass\n");
		            printf("Grade B\n");
		        }
		         else if(GPA>=3.00 && GPA<3.50)
		        {
		            count[2]+= 1;
		            printf("You have pass\n");
		            printf("Grade C\n");
		        }
		         else if(GPA>=2.50 && GPA<3.00)
		        {
		            count[3]+= 1;
		            printf("You have pass\n");
		            printf("Grade D\n");
		        }
		         else if(GPA<2.50)
		        {
		            count[4]+= 1;    
		            printf("You retry\n");
		            printf("Grade F\n");
		        }
		
		        printf("Group Grade A : %d\n",count[0]);
		        printf("Group Grade B  : %d\n",count[1]);
		        printf("Group Grade C : %d\n",count[2]);
		        printf("Group Grade D : %d\n",count[3]);
		        printf("Group Grade F  : %d\n",count[4]);
		    }
        
        printf("\n");
    }
    printf("Quit Program !");
}
}
