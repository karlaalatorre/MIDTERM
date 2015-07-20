//Mark E. Lehr
//July 13th, 2015
//Menu to be used for the midterm
//homework and midterm, etc....

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>//for letters
#include <iostream>// using I/O
#include <iomanip>//for set precision
using namespace std;

//Global Constants

//Function Prototypes
string o[]={"","One","Two","Three","Four","Five","Six",

                     "Seven","Eight","Nine","Ten","Eleven",

                     "Twelve","Thirteen","Fourteen","Fifteen",

                     "Sixteen","Seventeen","Eighteen","Nineteen",};

    string t[]={"Twenty","Thirty","Forty","Fifty","Sixty",

                     "Seventy","Eighty","Ninety",};

    string h="Hundred";
//If the number for the check entered is greater than 999 or less than 1
    string NUMB(int a){

        if ((a<1)||(a>999))
        {
            return "The check value you entered is not between $1 and $999.\n";
        }
        else if (a>=100)
        {
            int b=a/100;
            return o[b] + " " + h + " " + NUMB(a - b * 100); 
        }
        else if (a >= 20)
        {
            int ltdgt = a / 10;
            int rtdgt = a % 10;
            return t[ltdgt - 2] + " " + o[rtdgt];
        }
        else (a >= 0);{
            return o[a];
        }
    }
    
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
    //Declare variables Here!
    int a;//the odd number that user will enter
    int b=1;//initialize the number 
    int c;
    cout<<""
            ""
            ""<<endl;
    //Initialize values Here
    cout<<"Enter an odd number:"<<endl;
    cin>>a;
    cout<<""
            ""
            ""<<endl;
        //For loop begins here!
	for(int d=a;d>0;d--) 
        {
		//arranging the numbers in order
            if(d>=b)
            {
			c=a-d;//third value being valued
			for(int e=0; e<c;e++) 
                        {
				cout<< " ";//all of these are to make the X form
			}
			cout << d;
			for(int f=0;f<(d - 2 - c); f++) 
                        {
				cout<<" ";
			}
			if (d!=b) 
                        {
				cout<<b;
			}
		}
		else 
                {
			c = a-b;
			for(int g=0;g<c;g++) 
                        {
				cout<<" ";
			}
			cout<<b;
			for(int h=0;h<(b - 2 -c);h++) 
                        {
				cout<<" ";
			}
			cout<<d;
		}
		
		cout<<endl;
		b++;//making the number greater 
	}
    cout<<""
            ""
            ""<<endl;
}

//Solution to problem 2
void problem2(){
    cout<<"In problem # 2"<<endl<<endl;
    cout<<""
            ""
            ""<<endl;
    //declare variables
    char fst;//first character that user will type
    char scn;//second character
    char thr;//third character
    char fth;//forth character
 
    //Initialize variables
    cout<<"Please enter a 4 digit number: ";
    cin>>fst>>scn>>thr>>fth;
   //switch starts here 
    cout<<fst<<"  ";
    switch (fst){
        case '0':cout<<" "<<endl;
        break;
        case '1':cout<<"*"<<endl;
        break;
        case '2':cout<<"**"<<endl;
        break;
        case '3':cout<<"***"<<endl;
        break;
        case '4':cout<<"****"<<endl;
        break;
        case '5':cout<<"*****"<<endl;
        break;
        case '6':cout<<"******"<<endl;
        break;
        case '7':cout<<"*******"<<endl;
        break;
        case '8':cout<<"********"<<endl;
        break;
        case '9':cout<<"*********"<<endl;
        break;
        default:cout<<"?"<<endl;
    }
    cout<<scn<<"  ";
    switch (scn){
        case '0':cout<<" "<<endl;
        break;
        case '1':cout<<"*"<<endl;
        break;
        case '2':cout<<"**"<<endl;
        break;
        case '3':cout<<"***"<<endl;
        break;
        case '4':cout<<"****"<<endl;
        break;
        case '5':cout<<"*****"<<endl;
        break;
        case '6':cout<<"******"<<endl;
        break;
        case '7':cout<<"*******"<<endl;
        break;
        case '8':cout<<"********"<<endl;
        break;
        case '9':cout<<"*********"<<endl;
        break;
        default:cout<<"?"<<endl;
    }
    cout<<thr<<"  ";
    switch (thr){
        case '0':cout<<" "<<endl;
        break;
        case '1':cout<<"*"<<endl;
        break;
        case '2':cout<<"**"<<endl;
        break;
        case '3':cout<<"***"<<endl;
        break;
        case '4':cout<<"****"<<endl;
        break;
        case '5':cout<<"*****"<<endl;
        break;
        case '6':cout<<"******"<<endl;
        break;
        case '7':cout<<"*******"<<endl;
        break;
        case '8':cout<<"********"<<endl;
        break;
        case '9':cout<<"*********"<<endl;
        break;
        default:cout<<"?"<<endl;
    }
    cout<<fth<<"  ";
    switch (fth){
        case '0':cout<<" "<<endl;
        break;
        case '1':cout<<"*"<<endl;
        break;
        case '2':cout<<"**"<<endl;
        break;
        case '3':cout<<"***"<<endl;
        break;
        case '4':cout<<"****"<<endl;
        break;
        case '5':cout<<"*****"<<endl;
        break;
        case '6':cout<<"******"<<endl;
        break;
        case '7':cout<<"*******"<<endl;
        break;
        case '8':cout<<"********"<<endl;
        break;
        case '9':cout<<"*********"<<endl;
        break;
        default:cout<<"?"<<endl;
    }
    cout<<""
            ""
            ""<<endl;
}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
    //Declare Variables Here
    string mmddyy;//date for the check
    string frstNM;//name of the payee  FIRST NAME
    string lstNM;//name of the payee LAST NAME
    float dlr;
    string acctA;//name of the person receiving the check FIRST
    string acctB;//LAST
    string city;//CITY AND STATE TO FILL THE CHECK
    string street;//STREET NAME FOR CHECK
    int number;//NUMBER FOR CHECK
    int zip;//ZIP CODE FOR CHECK
   
    //Initialize Values
     cout<<"Fill your check here: .\n";
     cout<<"Enter date (mm/dd/yy): ";
     cin>>mmddyy;
     cout<<"Payee (First, Last): ";
     cin>>frstNM>>lstNM;
     cout<<"Enter $ amount of check ($1-$999, no cents): ";
     cin>>dlr;
     cout<<"Your Name (First, Last): ";
     cin>>acctA>>acctB;
     cout<<"Enter street number and name: "<<endl;
     cin>>number>>street;
     cout<<"Enter city, state "<<endl;
     cin>>city;
     
    //Outputs Unknown here
    cout<<endl;
    cout<<acctA<<" "<<acctB<<endl;
    cout<<number<<" "<<street<<endl;
    cout<<city<<"                                   "<<"Date:"<<mmddyy<<endl;
    cout<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Pay to the Order of:  "<<frstNM<<" "<<lstNM<<setw(20)<<"$ "<<dlr<<endl;
    cout<<endl;
    cout<<NUMB(dlr)<<" and no/100s Dollars\n";
    cout<<endl;
    cout<<"BANK OF CSC5\n";
    cout<<endl;
    cout<<"FOR:  GOTTA PAY THE RENT                      "<<acctA<<" "<<acctB<<endl;
   

}


//Solution to problem 4
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
    cout<<""
            ""
            ""<<endl;
    //Declare variables here!
    int chce;//choice chosen by the user
    int hours;//hours the user will be using the package
    float total;//monthly bill

    float A = 16.85;//choice 1
    float B = 23.85;//choice 2
    float C = 29.55;//choice 3
    float D = 0.80;//additional hours for 1
    float E = 0.70;//additional hours for 2

    //Display the menu for the user
    cout << "                   ----ISP SUBSCRIPTIONS----"<<endl;
    cout<<"                 Choose your monthly subscription"<<endl;
    cout<<""
            ""
            ""<<endl;
    cout << "1. $16.85 per month. 5 hours access. Additional Hours are $0.80"<<endl;
    cout << "2. $23.85 per month. 15 hours access. Additional hours are $0.70"<<endl;
    cout << "3. $29.55 per month. Unlimited access."<<endl;
    cout<<""
            ""<<endl;
    cout << "Enter your choice: ";
    cin >> chce;//choice entered by the user
    
    //initialize values here!
    if (chce >=1 && chce <=3)
    {
    cout << "How many hours would you access: ";
    cin >> hours;

    //Begin switch for choice made
    switch (chce)
    {
        case 1://choice 1
        {
        total=A+(hours-5)*D;
        break;
        }
        case 2: //choice 2
        {
        total=B+(hours - 15)*E;
        break;
        }

        case 3://choice 3 
        {
        total=C;
        break;
        }
        //if user types a different number than 1,2 or 3
        default:
        cout<<"ERROR"<<endl;
        cout << "Choose a package from 1 to 3. Re-Run the program";
    }//end of switch
    
        //output results here!
        cout << "Your monthly bill would be: $"<<total<<endl;
    }//END OF "IF"
    
    //IF USER PROVIDES A DIFFERENT NUMBER
        else if (chce !=3)
        {
        cout << "Choose a package from 1 to 3. Re-Run the program.";
        }
    //Exit stage right!
    cout<<""
            ""
            ""<<endl;
}

//Solution to problem 5
void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
    cout<<""
            ""
            ""<<endl;
    //declare variables
    float ttl;//amount of profit made
    int payR;//rate payment
    int hours;//hours worked
    
    //Ask for hours and rate of payment to user
    cout<<"How many hours did you worked?: ";
    cin>>hours;
    cout<<"What is your rate payment?: ";
    cin>>payR;
    
    //Initialize values
    if(hours<=20)//if the hours is equal or less, rate payment is the same
    {
        ttl=payR*hours;
    }
    else if(hours<=40)//more than 20 hours but less than 40 is rate and a half
    {
        ttl=(20*payR)+(1.5*payR*(hours-20));
    }
    else
    {
        ttl=(20*payR)+(1.5*20*payR)+(2*payR*(hours-40));//more than 40 is double
    }
   
    cout<<setprecision(2)<<fixed;
    cout<<"Gross pay is $"<<ttl<<endl;

    cout<<""
            ""
            ""<<endl;
}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
    //Declare variables
        float a;//number chosen by user
        float b;//number of term entered by the user
        float c;
        float d;
        float e=1.0f;

        //input values here!
        cout<<"Enter a number here: "<<endl;
        cin>>a;
        cout<<"How many terms would you like to calculate?: "<<endl;
        cin>>b;

        //output unknowns here
        for (int i=1;i<=b;++i)
        {
            a+=(b-i)/(e*=a);
        }

        d=b+c;
        cout<<d<<endl;
        //Exit stage right!
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}