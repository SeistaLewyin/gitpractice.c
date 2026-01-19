#include<stdio.h>
int main()
{
    int num, i;
    //taking the number of students as input
    printf("The number of students under consideration: ");
    scanf("%d", &num);
    int mark[num], mark_ind[num][3];
    //taking marks in TT, AT, AS, FE as inputs
    for(i=0; i<num; i++)
    {
        printf("For student no. %d\n", i+1);
        TT:
        printf("Enter your marks in Term Test: ");
        scanf("%d", &mark_ind[i][0]);
        if(mark_ind[i][0]<0 || mark_ind[i][0]>20)
        {
            printf("Your input is inaccurate\n");
            goto TT;
        }
        AT:
        printf("Enter your marks in Attendance: ");
        scanf("%d", &mark_ind[i][1]);
        if(mark_ind[i][1]<0 || mark_ind[i][1]>10)
        {
            printf("Your input is inaccurate\n");
            goto AT;
        }
        AS:
        printf("Enter your marks in Assignment: ");
        scanf("%d", &mark_ind[i][2]);
        if(mark_ind[i][2]<0 || mark_ind[i][2]>10)
        {
            printf("Your input is inaccurate\n");
            goto AS;
        }
        FE:
        printf("Enter your marks in Final: ");
        scanf("%d", &mark_ind[i][3]);
        if(mark_ind[i][3]<0 || mark_ind[i][3]>60)
        {
            printf("Your input is inaccurate\n");
            goto FE;
        }
        //calculating grades
        mark[i] = mark_ind[i][0]+mark_ind[i][1]+mark_ind[i][2]+mark_ind[i][3];
    }
    //making grade sheet
    printf("----------------------------------------------------------\n");
    printf("Serial no.    TT    AT    AS    FE    Total Marks    Grade\n");
    printf("----------------------------------------------------------\n");
    //calculating grade
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
    printf("----------------------------------------------------------\n");
}
