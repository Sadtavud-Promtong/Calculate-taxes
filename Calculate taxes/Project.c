#include <stdio.h>
line(int x,char y){
	int i;
	for(i=0;i<=x;i++){
		printf("%c",y);
	}
}
choose(){
	char *more1year = "Available from 1 year";
	char *less1year = "less than 1 year";
	char *noname = "No name on the register";
	int scanch;
	printf("(1)Available from 1 year\n");
	printf("(2)less than 1 year\n");
	printf("(3)No name on the register\n");
	printf("select : ");
	scanf("%d",&scanch);
	if (scanch = 1)
		printf("*%s\n",more1year);
	else if (scanch = 2)
		printf("*%s\n",less1year);
	else if (scanch = 3)
		printf("*%s\n",noname);
	system("cls");
}
taxscan(int numberyear){
	int taxlimit;
    if (numberyear >= 0 && numberyear <= 300000) {
    	taxlimit = numberyear*5/100;
        if (taxlimit>15000) {
            taxlimit = 15000;
		}
	}
	if (numberyear >= 300001 && numberyear <= 500000) {
    	taxlimit = numberyear*10/100;
        if (taxlimit>35000) {
            taxlimit = 35000;
		}
	}
	if (numberyear >= 500001 && numberyear <= 750000) {
    	taxlimit = numberyear*15/100;
        if (taxlimit>72500) {
            taxlimit = 72500;
		}
	}
		if (numberyear >= 750001 && numberyear <= 1000000) {
    	taxlimit = numberyear*20/100;
        if (taxlimit>122500) {
            taxlimit = 122500;
		}
	}
		if (numberyear >= 1000001 && numberyear <= 2000000) {
    	taxlimit = numberyear*25/100;
        if (taxlimit>372500) {
            taxlimit = 372500;
		}
	}
		if (numberyear >= 2000001 && numberyear <= 5000000) {
    	taxlimit = numberyear*30/100;
        if (taxlimit>972500) {
            taxlimit = 972500;
		}
	}	if (numberyear >= 5000001 ) {
    	taxlimit = numberyear*35/100;
	}
    return(taxlimit);
}
sumyr(int sumyear){
	int check;
	if (sumyear <= 1 )
        check = 92;
    else if (sumyear <= 3)
        check = 84;
    else if (sumyear <= 4)
        check = 77;
    else if (sumyear <= 5)
    	check = 71;
    else if (sumyear <= 6)
   	 	check = 65;
    else if (sumyear <= 7)
    	check = 60;
    else if (sumyear <= 8)
        check = 55;
    else 
        check = 50;
    return(check);
}
incometaxcalculation(){
	int day1,day2,month1,month2,year1,year2,sumyear;
	line(100,'=');
	printf("\nInput day :");
	scanf("%d",&day1);
	printf("Input month :");
	scanf("%d",&month1);
    printf("Input year : ");
	scanf("%d",&year1);
	printf("Input day :");
	scanf("%d",&day2);
	printf("Input month :");
	scanf("%d",&month2);
	printf("Input year : ");
	scanf("%d",&year2);
	system("cls");
	choose();
	printf("Day %d Month %d Year%d\n",day1,month1,year1);
	printf("Day %d Month %d Year%d\n",day2,month2,year2);
	sumyear = (year2-year1)+1;
	if(sumyear>10)
	sumyear = 10;
	printf("Number of years held = %d\n",sumyear);	
	int check;
	check = sumyr(sumyear);
	printf("cost rate : %d%%\n",check);  
	int salesprice,appraisalprice;
	line(100,'=');
	printf("\nSalesprice : ");
	scanf("%d",&salesprice);
	printf("Appraisalprice : ");
	scanf("%d",&appraisalprice);
    int yearholding,netincome,numberyear,incomeyear;
    yearholding= appraisalprice*check/100;
    printf("Year of holding : %d\n",yearholding);
    netincome = appraisalprice-yearholding;
    printf("Net income : %d\n",netincome);
    numberyear= netincome/sumyear;
    printf("Number of years held divide : %d\n",numberyear);
	int taxrate,taxlimit;
    taxlimit = taxscan(numberyear);
    printf("taxlimit : %d\n",taxlimit);
    printf("Number of years held  multiply : %d\n",taxlimit*sumyear);
    printf("Appraisal price x 20%% : %d\n",appraisalprice*20/100);
    int withholdtax,revenuestamp,totalpaidtaxone;
    withholdtax = taxlimit*sumyear;
    revenuestamp = appraisalprice/200;
    totalpaidtaxone = revenuestamp+withholdtax;
    printf("Withholding tax : %d\n",withholdtax);
    printf("Revenue stamp : %d\n",revenuestamp);
    printf("Total to be paid : %d\n",totalpaidtaxone);
    line(100,'=');
}
incometaxcalculation2()
{
	int day1,day2,month1,month2,year1,year2,sumyear;
	line(100,'=');
	printf("\nInput day :");
	scanf("%d",&day1);
	printf("Input month :");
	scanf("%d",&month1);
    printf("Input year : ");
	scanf("%d",&year1);
	printf("Input day :");
	scanf("%d",&day2);
	printf("Input month :");
	scanf("%d",&month2);
	printf("Input year : ");
	scanf("%d",&year2);
	system("cls");
	printf("Day %d Month %d Year%d\n",day1,month1,year1);
	printf("Day %d Month %d Year%d\n",day2,month2,year2);
    sumyear = (year2-year1)+1;
	if(sumyear>10)
	sumyear = 10;
	printf("Number of years held = %d\n",sumyear);
	char *more1year2 = "not in the case of being entitled to an exemption";
	char *less1year2 = "In the case of exemption";
	int scanch;
	printf("(1)not in the case of being entitled to an exemption\n");
	printf("(2)In the case of exemption\n");
	printf("select : ");
	scanf("%d",&scanch);
	if (scanch == 1){
		int salesprice,appraisalprice,exemptincome=0;
		line(100,'=');
	        printf("\nSalesprice : ");
	        scanf("%d",&salesprice);
	        printf("Appraisalprice : ");
	        scanf("%d",&appraisalprice);
	        printf("Exemptincome : %d",exemptincome);
	        printf("\nRemaining : %d",appraisalprice);
	        int netincome,numberyear;
	        netincome = appraisalprice*50/100;
	        printf("\nDeducted expenses by 50% : %d",netincome);
	        numberyear = netincome/sumyear;
	        printf("\nDivide the number of years held : %d",numberyear);
	        int taxrate,taxlimit;
            taxlimit = taxscan(numberyear);
            printf("\nIncome tax per year held : %d",taxlimit);
            printf("\nMultiply the number of years held : %d",taxlimit*sumyear);
            printf("\nAppraisal price x 20 percent : %d",appraisalprice*20/100);
            printf("\nwithholding tax : %d",taxlimit*sumyear);
            printf("\nrevenuestamp : %d",appraisalprice/200);
            printf("\nTotal to be paid : %d\n",(taxlimit*sumyear)+(appraisalprice/200));
            line(100,'=');
    }
	else if (scanch == 2){
		int salesprice,appraisalprice,exemptincome,exemptincome2;
		line(100,'=');
	        printf("\nSalesprice : ");
	        scanf("%d",&salesprice);
	        printf("Appraisalprice : ");
	        scanf("%d",&appraisalprice);
	        printf("Exemptincome : ");
	        scanf("%d",&exemptincome2);
	        exemptincome = appraisalprice - exemptincome2;
	        printf("Remaining : %d",exemptincome);
	        int netincome,numberyear;
	        netincome = exemptincome*50/100;
	        printf("\nDeducted expenses by 50% : %d",netincome);
	        printf("\nNetincome : %d",netincome);
	        numberyear = netincome/sumyear;
	        printf("\nDivide the number of years held : %d",numberyear);
	        int taxrate,taxlimit;
            taxlimit = taxscan(numberyear);
            printf("\nIncome tax per year held : %d",taxlimit);
            printf("\nMultiply the number of years held : %d",taxlimit*sumyear);
            printf("\nAppraisal price x 20 percent : %d",appraisalprice*20/100);
            printf("\nwithholding tax : %d",taxlimit*sumyear);
            printf("\nrevenuestamp : %d",appraisalprice/200);
            printf("\nTotal to be paid : %d\n",(taxlimit*sumyear)+(appraisalprice/200));
            line(100,'=');
    }
}
incometaxcalculation3(){
	int salesprice,appraisalprice;
	float totaltobepaid;
	line(100,'=');
	printf("\nRealestatesalesprice : ");
	scanf("%d",&salesprice);
	printf("appraisalprice : ");
	scanf("%d",&appraisalprice);
	if(salesprice>appraisalprice){
		line(100,'=');
		totaltobepaid = salesprice*1/100;
	    printf("\nMultiplyby1percent : 1 percent ");
	    printf("\nWithholdingtax : %.2f baht",totaltobepaid);
	    printf("\nTotal to be paid : %.2f baht\n",totaltobepaid);
	    line(100,'=');
	}
	if(appraisalprice>salesprice){
		line(100,'=');
	    totaltobepaid = appraisalprice*1/100;
    	printf("\nMultiplyby1percent : 1 percent ");
	    printf("\nWithholdingtax : %.2f baht",totaltobepaid);
	    printf("\nTotal to be paid : %.2f baht\n",totaltobepaid);
	    line(100,'=');
    }
    if(appraisalprice==salesprice){
    	line(100,'=');
	    totaltobepaid = appraisalprice*1/100;
    	printf("\nMultiplyby1percent : 1 percent ");
	    printf("\nWithholdingtax : %.2f baht",totaltobepaid);
	    printf("\nTotal to be paid : %.2f baht\n",totaltobepaid);
	    line(100,'=');
    }
}
incometaxcalculation4(){
	int salesprice,appraisalprice;
	float Paysspecificbusinesstax,Paylocaltax,specificbusinesstax;
	line(100,'=');
	printf("\nRealestatesalesprice : ");
	scanf("%d",&salesprice);
	printf("appraisalprice : ");
	scanf("%d",&appraisalprice);
	if(appraisalprice>salesprice){
		line(100,'=');
		Paysspecificbusinesstax = appraisalprice*3/100;
	    printf("\nPays specific business tax at a rate of 3 percent : %.2f baht",Paysspecificbusinesstax);
	    Paylocaltax = Paysspecificbusinesstax*10/100;
        printf("\nPay local tax, another 10 percent of the specific business tax : %.2f baht",Paylocaltax);
	    specificbusinesstax = Paysspecificbusinesstax+Paylocaltax;
	    printf("\nspecific business tax : %.2f baht\n",specificbusinesstax);
	    line(100,'=');
	}
	if(salesprice>appraisalprice){
	    Paysspecificbusinesstax = salesprice*3/100;
	    printf("Pays specific business tax at a rate of 3 percent : %.2f baht",Paysspecificbusinesstax);
	    Paylocaltax = Paysspecificbusinesstax*10/100;
	    printf("\nPay local tax, another 10 percent of the specific business tax : %.2f baht",Paylocaltax);
	    specificbusinesstax = Paysspecificbusinesstax+Paylocaltax;
	    printf("\nspecific business tax : %.2f baht\n",specificbusinesstax);
	    line(100,'=');
    }
    if(appraisalprice==salesprice){
		Paysspecificbusinesstax = appraisalprice*3/100;
	    printf("Pays specific business tax at a rate of 3 percent : %.2f baht",Paysspecificbusinesstax);
	    Paylocaltax = Paysspecificbusinesstax*10/100;
        printf("\nPay local tax, another 10 percent of the specific business tax : %.2f baht",Paylocaltax);
	    specificbusinesstax = Paysspecificbusinesstax+Paylocaltax;
	    printf("\nspecific business tax : %.2f baht\n",specificbusinesstax);
	    line(100,'=');
    }
}
incometaxcalculation5(){
	int saleofrealestate,appraisalprice,stampduty;
	line(100,'=');
	printf("\nIncome from the sale of real estate and give it to others (considered to be sold) : ");
	scanf("%d",&saleofrealestate);
	printf("appraisal price in the registration of rights and juristic acts : ");
	scanf("%d",&appraisalprice);
	if(saleofrealestate>appraisalprice){
		line(100,'=');
		stampduty = saleofrealestate/200;
	    printf("\nstamp duty : %d baht\n",stampduty);
	    line(100,'=');
	}
	if(appraisalprice>saleofrealestate){
		line(100,'=');
	    stampduty = appraisalprice/200;
	    printf("\nstamp duty : %d baht\n",stampduty);
	    line(100,'=');
    }
    if(saleofrealestate==appraisalprice){
    	line(100,'=');
		stampduty = appraisalprice/200;
	    printf("\nstamp duty : %d baht\n",stampduty);
	    line(100,'=');
	}
}

main()
{
	char ch;
	do{
	system("cls");
	int manu;
	line(100,'=');
	printf("\n1.Calculation of personal income tax withholding from the sale of immovable property acquired by means other than inheritance or immovable property acquired by affection");
	printf("\n2.Calculation of personal income tax withholding from the sale of immovable property, inheritance, or immovable property acquired through affection");
	printf("\n3.Calculation of corporate income tax withholding from the sale of real estate");
	printf("\n4.Calculating Specific Business Tax on Real Estate Sales");
	printf("\n5.stamp duty calculation");
	printf("\nEnter 1-5 :");
	scanf("%d",&manu);
	if(manu==1)
	incometaxcalculation();
	if(manu==2)
	incometaxcalculation2();
	if(manu==3)
	incometaxcalculation3();
	if(manu==4)
	incometaxcalculation4();
	if(manu==5)
	incometaxcalculation5();
	printf("\nContinue (Y/N)= ");
	ch=getche();
    }while(ch=='y' || ch=='Y');
}
