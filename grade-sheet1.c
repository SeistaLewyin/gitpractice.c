#include<stdio.h>
int main()
{
    int num, i;
    printf("The number of students under consideration: ");
    scanf("%d", &num);
    int mark[num], mark_ind[num][3];
    for(i=0; i<num; i++)
    {
        printf("For student no. %d\n", i+1);
        printf("Enter your marks in Term Test: ");
        scanf("%d", &mark_ind[i][0]);
        printf("Enter your marks in Attendance: ");
        scanf("%d", &mark_ind[i][1]);
        printf("Enter your marks in Assignment: ");
        scanf("%d", &mark_ind[i][2]);
        printf("Enter your marks in Final: ");
        scanf("%d", &mark_ind[i][3]);
        if(mark_ind[i][0]<=20 && mark_ind[i][1]<=10 && mark_ind[i][2]<=10 && mark_ind[i][3]<=60)
        {
            mark[i] = mark_ind[i][0]+mark_ind[i][1]+mark_ind[i][2]+mark_ind[i][3];
        }else{
            printf("Your input is inaccurate\n");
        }
    }
    printf("----------------------------------------------------------\n");
    printf("Serial no.    TT    AT    CE    FE    Total Marks    Grade\n");
    printf("----------------------------------------------------------\n");
    for(i=0; i<num; i++)
    {
             if(mark[i]>79) printf("    %d.        %d    %d     %d     %d         %d         A+", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else if(mark[i]>74) printf("    %d.        %d    %d     %d     %d         %d         A", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else if(mark[i]>69) printf("    %d.        %d    %d     %d     %d         %d         A-", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else if(mark[i]>64) printf("    %d.        %d    %d     %d     %d         %d         B+", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else if(mark[i]>59) printf("    %d.        %d    %d     %d     %d         %d         B", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else if(mark[i]>54) printf("    %d.        %d    %d     %d     %d         %d         B-", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else if(mark[i]>49) printf("    %d.        %d    %d     %d     %d         %d         C+", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else if(mark[i]>44) printf("    %d.        %d    %d     %d     %d         %d         C", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else if(mark[i]>39) printf("    %d.        %d    %d     %d     %d         %d         D", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        else printf("    %d.        %d    %d     %d     %d         %d         F", i+1,mark_ind[i][0],mark_ind[i][1],mark_ind[i][2],mark_ind[i][3],mark[i]);
        printf("\n");
    }
    printf("---------------------------------------------------------\n");
}
