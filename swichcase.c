#include<stdio.h>
void main()
{
	int ch,ans,a,b;
	printf("press 1 : addition");
	printf("\npress 2 : substraction ");
	printf("\npress 3 : multiplication");
	printf("\nprees 4 : division");
	printf("\nenter your choice");
	scanf("%i",&ch);
	
	switch(ch)
	{
		case 1:
		{
		
			printf("enter two numbers");
			scanf("%d%d",&a,&b);
            ans=a+b;
            printf("addition=%d",ans);
            break;
	    }
	       	case 2:
		{
		    printf("enter two numbers");
			scanf("%d%d",&a,&b);
			ans=a-b;
			printf("substraction=%d",ans);
			break;	
		}
	        case 3:
	    {
		   	printf("enter two numbers");
		   	scanf("%d%d",&a,&b);
		   	ans=a*b;
		   	printf("multiplication=%d",ans);
		   	break;		   	
		} 
	    	case 4:
	    {
				
		    printf("enter two numbers");
		    scanf("%d%d",&a,&b);
		    ans=a/b;
		    printf("division=%d",ans);
		    break;
	    }

	     default:
		 {
			printf("enter valid choice..........!");
	     }	 
    }
  		 
}
