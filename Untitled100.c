#include<stdio.h>
int main()
{
    int num, i;
    printf("The number of students under consideration: ");
    scanf("%d", &num);
    int mark[num];
    for(i=0; i<num; i++)
    {
        printf("Enter the marks: ");
        scanf("%d", &mark[i]);
    }
    printf("----------------------------\n");
    printf("Serial no.    Mark     Grade\n");
    printf("----------------------------\n");
    for(i=0; i<num; i++)
    {
        if(i<9 && mark[i]<100)
        {
             if(mark[i]>79) printf("    %d.         %d        A+", i+1, mark[i]);
        else if(mark[i]>74) printf("    %d.         %d        A", i+1, mark[i]);
        else if(mark[i]>69) printf("    %d.         %d        A-", i+1, mark[i]);
        else if(mark[i]>64) printf("    %d.         %d        B+", i+1, mark[i]);
        else if(mark[i]>59) printf("    %d.         %d        B", i+1, mark[i]);
        else if(mark[i]>54) printf("    %d.         %d        B-", i+1, mark[i]);
        else if(mark[i]>49) printf("    %d.         %d        C+", i+1, mark[i]);
        else if(mark[i]>44) printf("    %d.         %d        C", i+1, mark[i]);
        else if(mark[i]>39) printf("    %d.         %d        D", i+1, mark[i]);
        else printf("    %d.         %d        F", i+1, mark[i]);
        printf("\n");
        }else if(i>=9 && mark[i]<100)
        {
             if(mark[i]>79) printf("   %d.          %d        A+", i+1, mark[i]);
        else if(mark[i]>74) printf("   %d.          %d        A", i+1, mark[i]);
        else if(mark[i]>69) printf("   %d.          %d        A-", i+1, mark[i]);
        else if(mark[i]>64) printf("   %d.          %d        B+", i+1, mark[i]);
        else if(mark[i]>59) printf("   %d.          %d        B", i+1, mark[i]);
        else if(mark[i]>54) printf("   %d.          %d        B-", i+1, mark[i]);
        else if(mark[i]>49) printf("   %d.          %d        C+", i+1, mark[i]);
        else if(mark[i]>44) printf("   %d.          %d        C", i+1, mark[i]);
        else if(mark[i]>39) printf("   %d.          %d        D", i+1, mark[i]);
        else printf("   %d.          %d        F", i+1, mark[i]);
        printf("\n");
        }else if(mark[i]==100)
        {
             if(mark[i]>79) printf("    %d.        %d         A+", i+1, mark[i]);
        else if(mark[i]>74) printf("    %d.        %d         A", i+1, mark[i]);
        else if(mark[i]>69) printf("    %d.        %d         A-", i+1, mark[i]);
        else if(mark[i]>64) printf("    %d.        %d         B+", i+1, mark[i]);
        else if(mark[i]>59) printf("    %d.        %d         B", i+1, mark[i]);
        else if(mark[i]>54) printf("    %d.        %d         B-", i+1, mark[i]);
        else if(mark[i]>49) printf("    %d.        %d         C+", i+1, mark[i]);
        else if(mark[i]>44) printf("    %d.        %d         C", i+1, mark[i]);
        else if(mark[i]>39) printf("    %d.        %d         D", i+1, mark[i]);
        else printf("    %d.        %d         F", i+1, mark[i]);
        printf("\n");
        }
    }
    printf("----------------------------\n");

}
