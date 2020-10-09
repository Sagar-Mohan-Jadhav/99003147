#include <stdio.h>

int hbm() {

	int f, ve=0, mo, in, lo, hr, go, d=1, ver[31], day=0, m=1, tve=0, month, monthcount=1, dated, bi=0, e;
	printf("\nWhich month is it?(ex. For January enter 1, for September enter 9)\n");
	scanf("%d", &month);
	printf("\nWhat is your income per month= ");
	scanf("%d", &in);
	printf("\nMonthly loan amount= ");
	scanf("%d", &lo);
        printf("\nMonthly house rent amount= ");
	scanf("%d", &hr);
	printf("\nSet monthly savings goal= ");
	scanf("%d", &go);
	while(monthcount<13){
	    mo=month+monthcount-1;
	    if(mo>12){
	        mo=month+monthcount-13;
	    }
	    if(mo==1 || mo==3 || mo==5 || mo==7 || mo==8 || mo==10 || mo==12){
	         while(m==1){
	            while(d==1){
	                dated=day+1;
	                printf("\n\nDate- %d-%d", dated, mo);
	                printf("\n\nWhat do you want to do?  press\n");
	                printf("1 - Add/Change todays expense\n2 - Change income\n3 - Change monthly fixed expense(Loan, House rent)\n4 - Change savings goal\n5 - Add/Change bill amount paid today\n6 - Check money balance\n");
	                scanf("%d", &f);
	                if(f==1){
                        printf("\n\nTodays total expense= ");
                        scanf("%d", &ve);
	                }
	                if(f==2){
	                   printf("\n\nChange income to= ");
	                    scanf("%d", &in);
	                }
	                if(f==3){
	                    printf("\n\nNew monthly loan amount= ");
	                    scanf("%d", &lo);
	                    printf("\nNew monthly house rent amount= ");
	                    scanf("%d", &hr);
	                }
	                if(f==4){
	                    printf("\n\nNew savings goal amount= ");
	                    scanf("%d", &go);
	                }
	                if(f==5){
                        printf("\n\nTotal bill amount paid today= ");
                        scanf("%d", &bi);
	                }
	                if(f==6){
	                    printf("\n\nMoney balance= %d", (in-go-lo-hr-tve));
	                }
	                printf("\n\nEnd the day?\n1 - No\n2 - Yes\n");
	                scanf("%d", &d);

	            }
	            ver[day]= ve;
	            tve=tve+ver[day];
	            day=day+1;
	            d=1;
	            e=(tve/day);
	            if((day)>30){
	                m=0;
	                day=0;
	            }
	            }
	        printf("\n\nMONTHLY REPORT-\nMonthly Income- %d\nTotal monthly expense(Loan, House rent, Daily expenses)- %d\nFixed expense(Loan, House rent)- %d\nAvoidable expense(Daily expenses, Bills)- %d\nAverage daily expense- %d\nTotal savings this month(Savings goal+Money balance)- %d", in, (lo+hr+tve), (lo+hr), (tve+bi), e, (in-lo-hr-tve-bi));
	        monthcount=monthcount+1;
	        m=1;
	        tve=0;
	        bi=0;
	        }
	        if(mo==2){
	         while(m==1){
	            while(d==1){
	                dated=day+1;
	                printf("\n\nDate- %d-%d", dated, mo);
	                printf("\n\nWhat do you want to do?  press\n");
	                printf("1 - Add/Change todays expense\n2 - Change income\n3 - Change monthly fixed expense(Loan, House rent)\n4 - Change savings goal\n5 - Add/Change bill amount paid today\n6 - Check money balance\n");
	                scanf("%d", &f);
	                if(f==1){
                        printf("\n\nTodays total expense= ");
                        scanf("%d", &ve);
	                }
	                if(f==2){
	                   printf("\n\nChange income to= ");
	                    scanf("%d", &in);
	                }
	                if(f==3){
	                    printf("\n\nNew monthly loan amount= ");
	                    scanf("%d", &lo);
	                    printf("\nNew monthly house rent amount= ");
	                    scanf("%d", &hr);
	                }
	                if(f==4){
	                    printf("\n\nNew savings goal amount= ");
	                    scanf("%d", &go);
	                }
	                if(f==5){
                        printf("\n\nTotal bill amount paid today= ");
                        scanf("%d", &bi);
	                }
	                if(f==6){
	                    printf("\n\nMoney balance= %d", (in-go-lo-hr-tve));
	                }
	                printf("\n\nEnd the day?\n1 - No\n2 - Yes\n");
	                scanf("%d", &d);

	            }
	            ver[day]= ve;
	            tve=tve+ver[day];
	            day=day+1;
	            d=1;
	            e=(tve/day);
	            if((day)>28){
	                m=0;
	                day=0;
	            }
	            }
	        printf("\n\nMONTHLY REPORT-\nMonthly Income- %d\nTotal monthly expense(Loan, House rent, Daily expenses)- %d\nFixed expense(Loan, House rent)- %d\nAvoidable expense(Daily expenses, Bills)- %d\nAverage daily expense- %d\nTotal savings this month(Savings goal+Money balance)- %d", in, (lo+hr+tve), (lo+hr), (tve+bi), e, (in-lo-hr-tve-bi));
	        monthcount=monthcount+1;
	        m=1;
	        tve=0;
	        bi=0;
	        }
	        if(mo==4 || mo==6 || mo==9 || mo==11){
	         while(m==1){
	            while(d==1){
	                dated=day+1;
	                printf("\n\nDate- %d-%d", dated, mo);
	                printf("\n\nWhat do you want to do?  press\n");
	                printf("1 - Add/Change todays expense\n2 - Change income\n3 - Change monthly fixed expense(Loan, House rent)\n4 - Change savings goal\n5 - Add/Change bill amount paid today\n6 - Check money balance\n");
	                scanf("%d", &f);
	                if(f==1){
                        printf("\n\nTodays total expense= ");
                        scanf("%d", &ve);
	                }
	                if(f==2){
	                   printf("\n\nChange income to= ");
	                    scanf("%d", &in);
	                }
	                if(f==3){
	                    printf("\n\nNew monthly loan amount= ");
	                    scanf("%d", &lo);
	                    printf("\nNew monthly house rent amount= ");
	                    scanf("%d", &hr);
	                }
	                if(f==4){
	                    printf("\n\nNew savings goal amount= ");
	                    scanf("%d", &go);
	                }
	                if(f==5){
                        printf("\n\nTotal bill amount paid today= ");
                        scanf("%d", &bi);
	                }
	                if(f==6){
	                    printf("\n\nMoney balance= %d", (in-go-lo-hr-tve));
	                }
	                printf("\n\nEnd the day?(Change/add todays activities)\n1 - No\n2 - Yes\n");
	                scanf("%d", &d);

	            }
	            ver[day]= ve;
	            tve=tve+ver[day];
	            day=day+1;
	            d=1;
	            e=(tve/day);
	            if((day)>29){
	                m=0;
	                day=0;
	            }
	            }
	        printf("\n\nMONTHLY REPORT-\nMonthly Income- %d\nTotal monthly expense(Loan, House rent, Daily expenses)- %d\nFixed expense(Loan, House rent)- %d\nAvoidable expense(Daily expenses, Bills)- %d\nAverage daily expense- %d\nTotal savings this month(Savings goal+Money balance)- %d", in, (lo+hr+tve), (lo+hr), (tve+bi), e, (in-lo-hr-tve-bi));
	        monthcount=monthcount+1;
	        m=1;
	        tve=0;
	        bi=0;
	        }

	    }

}

