#include<stdio.h>
#include<string.h>
int main()

{
	char name[40], department[60],desig[20],gender[10],
	doj[20], contact[10], email_id[30], hobbies[50];
	int basic_sal,incentives=5000,pf=2500,tds=800,lic=2400;
	float hra,ta,da,gross_sal, net_sal;
	
	printf("\nEnter the following details of employee\n");
	printf("\nEnter the name of employee\t\t\t:");
        gets(name);
        
	printf("\nEnter the department of employee\t\t:");        
	gets(department);
	
	printf("\nEnter the desig of employee\t\t\t:");
	gets(desig);
	
	printf("\nEnter the gender of employee\t\t\t:");	
	gets(gender);
	
	printf("\nEnter the doj of employee in dd-mm-yyyy\t\t:");	
	gets(doj);
		
	printf("\nEnter the contact of employee\t\t\t:");
        gets(contact);
        
        printf("\nEnter the hobbies of employee\t\t\t:");
        gets(hobbies);
        
        printf("the details of employees are as follows:");
        printf("\n Name\t\t:%s",name);
        printf("\n Department\t:%s",department);
        printf("\n Desig\t\t:%s",desig);
        fflush(stdin);
        printf("\n Gender\t\t:%s",gender);
        printf("\n Doj\t\t:%s",doj);        
        printf("\n Contact\t:%s",contact); 
        printf("\n Hobbies\t:%s",hobbies);
        
        printf("\n enter the basic salary\n");
        scanf("%d",&basic_sal);
        
        hra=0.4 * basic_sal;
        ta=0.3 * basic_sal;
        ta=0.9 * basic_sal; 
        
        gross_sal = basic_sal + hra + ta + da + incentives;
        net_sal= gross_sal-pf-tds-lic;
        
        printf("\n gross salary\t:%f", gross_sal);
        printf("\n net salary\t:%f", net_sal);
                printf("\n");
        printf("\n\t-----------------------------Salary Certificate--------------------------");
        printf("-\n-");
        printf("\n\t-\t\tThe following details are of employee\t\t\t-");
        printf("\n\t-\t\tName\t\t\t:%s\t\t\t\t-",name);
        printf("\n\t-\t\tDepartment\t\t:%s\t\t\t\t-",department);
        printf("\n\t-\t\tDesignation\t\t:%s\t\t\t\t-",desig);
        fflush(stdin);
        printf("\n\t-\t\tGender\t\t\t:%s\t\t\t\t-",gender);
        printf("\n\t-\t\tDate of joining\t\t:%s\t\t\t\t-",doj);
        printf("\n\t-\t\tcontact\t\t\t:%s\t\t\t\t-",contact);
        printf("\n\t-\t\thobbies\t\t\t:%s\t\t\t\t-",hobbies);
        printf("\n\t-\t\tGross salary\t\t:%f\t\t\t-",gross_sal);
        printf("\n\t-\t\tNet salary\t\t:%f\t\t\t-",net_sal);
        printf("\n\t--------------------------------------------------------------------------\n");
        return 0;

}

		

	 



