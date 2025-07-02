#include<stdio.h>
int main()
{
	char name[50],date[20];
	int opt;                                                                   //name=account holder name ; date=bill payment date
	double amt,ded,coa;                                                                          //ded=amount deducted; amt=final amount after dedcting; coa=current outstanding amount
	long long int cn,cvv;                                                                         //cn=card number; cvv=cvv number
	printf("\t\t----------------Credit Card bill payment -------------------\n");
	printf("               Enter your credit card number(14 digits)   : ");
	scanf("%lld",&cn);
	printf("                                          cvv(4 digits)   : ");
	scanf("%lld",&cvv);
	printf(" Current outstanding amount[maximum amount is 1 lakh]     : ");
	scanf("%lf",&coa);
	printf("                              Enter card holder name      : ");                                         //printing account holder details
	scanf("%s",&name);
	printf("\n\t\t      card holder name : %s                                \n",name);
	printf("____________________________________________________________________\n" );
	printf("                            credit card details                     |\n");
	printf("____________________________________________________________________|\n");
	printf("|Card Number                        :  %lld               |\n",cn);
	printf("|CVV                                :  %lld                         |\n",cvv);
	printf("|Current Outstanding  Amount        :  %.2lf                     |\n",coa);
	printf("____________________________________________________________________|\n");
	printf("Check whether the details given above are correct[type 1 for yes , 0 for no] :");
	scanf("%d",&opt);
	if(opt==1)
	{
	printf("\n                                           Enter today date: ");
	scanf("%s",date);
	printf("How much amount do you want to pay[minimum amount is 10000]? ");
	scanf("%lf",&ded);
	amt=coa-ded;                                                                                                                                                                            //calculating amount deducted
	printf("Payment Successful!!!!\n");                                                                                                                                       //printing  final bill statement
	printf(" ___________________________________________________________________\n");
	printf(" -----------------------Final Bill  Statement ----------------------|\n",name);
	printf("|___________________________________________________________________|\n");
	printf("|Card  Number                     : %lld                  |\n",cn);
	printf("|CVV                              : %lld                            |\n",cvv);
	printf("|Bill Date                        : %s                      |\n",date);
	printf("|Current  Outstanding  Amount     : %.2lf                        |\n",coa);
	printf("|Deducted  Amount                 : %.2lf                        |\n",ded);
	printf("|Final  Balance                   : %.2lf                        |\n",amt);
	printf("|___________________________________________________________________|\n"); 
	}
	else if(opt==0)
	{
	printf("please enter your details again :");
	}
	return 0;
}
	             


	                 	             

	                 	             

	                 	             

	                 	             

	                 	             

	                 	             

	                              

	                 	             

	              
	             

	                 
	             

	                 
	