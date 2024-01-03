#include<stdio.h>

struct marks{
	
	int roll_no;
	char stu_name[100];
	float chem_marks,maths_marks,phy_marks;
	
};

void main()
{
	
	struct marks m[5];
	
	int i;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Student = %d\n",i+1);
		printf("Enter Student Roll No. = ");
		scanf("%d",&m[i].roll_no);
		printf("Enter Student Name = ");
		scanf("%s",&m[i].stu_name);
		printf("Enter Chemistry marks = ");
		scanf("%f",&m[i].chem_marks);
		printf("Enter Maths Marks = ");
		scanf("%f",&m[i].maths_marks);
		printf("Enter Physics marks = ");
		scanf("%f",&m[i].phy_marks);
	}
	
	printf("\n\n------ Student Details ------\n\n");
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Student = %d\n",i+1);
		printf("Studet Roll No. = %d\n",m[i].roll_no);
		printf("Studet Name = %s\n",m[i].stu_name);
		printf("Chemistry marks = %f\n",m[i].chem_marks);
		printf("Maths Marks = %f\n",m[i].maths_marks);
		printf("Physics marks = %f\n",m[i].phy_marks);
		
		float percentage = (m[i].chem_marks + m[i].maths_marks + m[i].phy_marks)/300.0*100;
	    printf("Percentage = %f\n", percentage);
	}
	
}