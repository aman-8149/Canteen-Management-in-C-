#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
#include<fstream>

int total=0;
int grandt,t=0;

class mainsystem{
  string a,b,c,d;
  public:
      void premium();
      void reg();
      void login();
      void bill();
      void order();
      void categories();
};
class cards:public mainsystem{
 string high,middle,low;
 public:
     void platinum();
     void gold();
     void silver();
};

//****************************************************** PREMIUM SECTION ***************************************//
void mainsystem:: premium()
{
      cout<<"\n \t \t \t \t "<<"Enter your PREMIUM CARD NUMBER";
      cin>>d;
      if(d=="AM223" || d=="AM001" || d=="AM9920")
      {
          total=total-(total*20/100);
          t=20;
      }
}


//*************************************************** DISCOUNT CARD SECTION ***********************************//
void cards::platinum()
{
      cout<<"\n \t \t \t \t "<<"Enter your PREMIUM CARD NUMBER of Platinum";
      cin>>high;
      if(high=="AM223" || high=="AM001" || high=="AM9920")
      {
          total=total-(total*15/100);
          t=15;
      }
}

void cards::gold()
{
      cout<<"Enter your PREMIUM CARD NUMBER Gold";
      cin>>high;
      if(high=="AM223" || high=="AM001" || high=="AM9920")
      {
          total=total-(total*10/100);
          t=10;
      }
}

void cards::silver()
{
      cout<<"Enter your PREMIUM CARD NUMBER SILVER";
      cin>>high;
      if(high=="AM223" || high=="AM001" || high=="AM9920")
      {
          total=total-(total*5/100);
          t=5;
      }
}
//****************************************************** REGISTRATION FUNCTION***********************************//
void mainsystem::reg(){
  cout<<"\n \t \t \t \t "<<"***********************REGISTRATION PAGE ****************************"<<endl;
  string u,pa,user,pass;
  int p;
  cout<<"\n \t \t \t \t "<<"Enter username: ";
  cin>>user;
  cout<<"\n \t \t \t \t "<<"Enter password: ";
  cin>>pass;
  ofstream outfile;
  outfile.open("database.txt");
  outfile<<user<<endl;
  outfile<<pass;
  cout<<"Registration successful"<<endl;
  getch();
  outfile.close();
  system("cls");
  cout<<"\n \t \t \t \t "<<"***********************LOGIN PAGE ****************************"<<endl;
  login();
}

//*******************************************************LOGIN FUNCTION****************************************************//
void mainsystem::login(){
   string u,pa,user,pass;
   int p;
   cout<<"\n \t \t \t \t "<<"Enter username: ";
   cin>>user;
   cout<<"\n \t \t \t \t "<<"Enter password: ";
   cin>>pass;
   ifstream infile;
   infile.open("database.txt");
   while(infile>>u>>pa)
   {
       if(u==user && pa==pass)
       {
           p=1;
       }
   }
   infile.close();
   if(p==1)
   {
       cout<<"\n \t \t \t \t "<<"Login successful!!!!!! PRESS ANY KEY TO PROCEED";
       getch();
   }
   else
   {
       cout<<endl<<"\n \t \t \t \t "<<"**** OOPS!!!!!!!!!!! Enter proper username and password ****"<<endl;
      exit(1);
   }
}


 //***************************************************** ORDER SECTION ***********************************//
void mainsystem::order()
{
   char a,b,c,x;
   int d;
   ofstream infile;
   infile.open("test.txt");
   do{
        cout<<"\n \n \n \n \t \t  ********************* WELCOME TO ORDER SECTION OF A FOOD **********************";
        cout<<"\n \n \n \t \t \t \t \t >>>>>>MENU FOR ORDER<<<<<<<<<";
        cout<<"\n \n \t \t \t \t \t 1.IDILI SAMBHAR      : RS 36";
        cout<<"\n \t \t \t \t \t 2.MISSAL PAV (2PAV)  : RS 48";
        cout<<"\n \t \t \t \t \t 3.SADA DOSA          : RS 40";
        cout<<"\n \t \t \t \t \t 4.UTTAPAM            : RS 48";
        cout<<"\n \t \t \t \t \t 5.SABUDANA VADA      : RS 55";
        cout<<"\n \t \t \t \t \t 6.LASSI              : RS 20";
        cout<<"\n \t \t \t \t \t 7.CHEESE SANDWICH    : RS 60";
        cout<<"\n \t \t \t \t \t 8.CLUB SANDWICH      : RS 85";
        cout<<"\n \t \t \t \t \t 9.POTATO MASALA GRIL : RS 90";
        cout<<"\n \t \t \t \t \t 10.PANEER MASALA GRIL: RS 95";
        cout<<"\n \t \t \t \t \t 11.CHEESE PIZZA      : RS 105";
        cout<<"\n \t \t \t \t \t 12.MASHROOM PIZZA    : RS 110 \n ";
        cout<<"ENTER YOUR CHOICE OF FOOD ITEMS:- ";
        cin>>d;
    switch(d)
    {
            case 1:cout<<"1.IDILI SAMBHAR      : RS 36";
                   infile<<"\n  \t \t \t \t \t \t 1.IDILI SAMBHAR      : RS 36\n";
                   x=36;
                   total=total+x;
                   break;
            case 2:cout<<"2.MISSAL PAV (2PAV)  : RS 48";
                   infile<<"\n \t \t \t \t \t \t 2.MISSAL PAV (2PAV)  : RS 48\n";
                   x=48;
                   total=total+x;
                   break;
            case 3:cout<<"3.SADA DOSA          : RS 40";
                   infile<<"\n \t \t \t \t \t \t 3.SADA DOSA          : RS 40\n";
                   x=40;
                   total=total+x;
                   break;
            case 4:cout<<"4.UTTAPAM            : RS 48";
                   infile<<"\n \t \t \t \t \t \t 4.UTTAPAM            : RS 48\n";
                   x=48;
                   total=total+x;
                   break;
            case 5:cout<<"5.SABUDANA VADA      : RS 55";
                   infile<<"\n \t \t \t \t \t \t 5.SABUDANA VADA      : RS 55\n" ;
                   x=55;
                   total=total+x;
                   break;
            case 6:cout<<"6.LASSI              : RS 20";
                   infile<<"\n \t \t \t \t \t \t 6.LASSI              : RS 20\n";
                   x=20;
                   total=total+x;
                   break;
            case 7:cout<<"7.CHEESE SANDWICH    : RS 60";
                   infile<<"\n \t \t \t \t \t \t 7.CHEESE SANDWICH    : RS 60\n" ;
                   x=60;
                   total=total+x;
                   break;
            case 8:cout<<"8.CLUB SANDWICH      : RS 85";
                   infile<<"\n \t \t \t \t \t \t 8.CLUB SANDWICH      : RS 85\n" ;
                   x=85;
                   total=total+x;
                   break;
            case 9:cout<<"9.POTATO MASALA GRIL : RS 90";
                   infile<<"\n \t \t \t \t \t \t 9.POTATO MASALA GRIL : RS 90\n";
                   x=90;
                   total=total+x;
                   break;
            case 10:cout<<"10.PANEER MASALA GRIL: RS 95";
                   infile<<"\n \t \t \t \t \t \t 10.PANEER MASALA GRIL: RS 95\n";
                   x=95;
                   total=total+x;
                   break;
            case 11:cout<<"11.CHEESE PIZZA      : RS 105";
                   infile<<"\n \t \t \t \t \t \t 11.CHEESE PIZZA      : RS 105\n";
                   x=105;
                   total=total+x;
                   break;
            case 12:cout<<"12.MASHROOM PIZZA    : RS 110 \n";
                   infile<<"\n \t \t \t \t \t \t 12.MASHROOM PIZZA    : RS 110\n";
                   x=110;
                   total=total+x;
                   break;
            case 13: break;
            default :cout<<"\n enter the valid number";
                     break;
        }


        grandt=total;
        cout<<"\n  FOR EXIT GIVE INPUT AS 13 \n \n ";

   }while(d!=13);
infile.close();
}

 //********************************************************  BILL SECTION ************************************//
void mainsystem::bill()
{
   ifstream outfile;
   outfile.open("test.txt");

    char ch;
    cout<<"\n \n \n \n \t \t \t \t ********************** MAURYA HOTELS ********************";
    cout<<"\n \n \t \t \t \t \t\t Building NO.2,Hinduja Apartment,\n \t \t \t \t \t \t \tBandra(W) Dist:Thane \n \t \t \t \t \t \t \t   PIN:4000111 \n \t \t \t \t \t \t    MOBILE: 8777888991/022-1488";
    cout<<"\n  \t \t \t \t===========================================================\n \n ";
    while(outfile)
   {
       outfile.get(ch);
       cout<<ch;
   }
    cout<<"\n \t \t \t \t  \t \t \t \tTOTAL  = "<<grandt<<"/- RS\n";
    cout<<"\n \t \t \t \t \t \t \t       discount= "<<t<< "  percent" ;
    cout<<"\n \t \t \t \t  \t \t \t    ____________________________\n";
    cout<<"\n  \t \t \t \t \t \t \t      GRAND TOTAL= "<<total<<" /- RS";
    cout<<"\n \t \t \t \t \t \t \t    ____________________________ \n \n ";
    cout<<"\n   \t \t \t \t \t   THANK YOU FOR VISITING!!!!!!!!!!!!";
    cout<<"\n  \t \t \t \t===========================================================\n \n ";
    outfile.close();
}

//********************************************************** HOME SECTION *******************************************//
void home()
{
    cout<<"\n \n \n \t \t \t****************************WELCOME TO MAURYA HOTEL************************************";
    cout<<"\n \n \n \t \t \t \t \t  1.FOR AN ORDER OF A FOOD PRESS A";
    cout<<"\n \n \t \t \t \t \t  2.TO SEE THE COLLECTION OF FOOD ITEMS PRESS C";
    cout<<"\n \n \t \t \t \t \t  3.TO SEE FAMOUS FOOD OF THE OUR HOTEL PRESS F";
    cout<<"\n \n \t \t \t \t \t  4.TO EXIT FROM THIS PRESS E";
    cout<<"\n \n \n \t \t \t \t \t PRESS YOUR CHOICE    ";
}

//**********************************************************FAMOUS RECIPE ***********************************************//
void famous()
{
    cout<<"\n \n  \t \t \t ***************************** FAMOUS SECTION **************************",
    cout<<"\n \n \n  \t \t \t \t \t \t 1.POTATO MASALA GRIL : RS 90";
    cout<<"\n \t \t \t \t \t \t 2.PANEER MASALA GRIL : RS 95";
    cout<<"\n \t \t \t \t \t \t 3.SABUDANA VADA      : RS 55";
    cout<<"\n \t \t \t \t \t \t 4.LASSI              : RS 20 \n \n";
}

void mainsystem::categories()
{
   int cat,ca;
   char ord;
   cards c,p;
   cout<<"\n \n  \t \t \t ***************************** CATEGORIES SECTION **************************";
 do{
    cout<<"\n \n \n \n \t \t \t \t \t \t 1.SNACKS";
    cout<<"\n \t \t \t \t \t \t 2.DOSA'S";
    cout<<"\n \t \t \t \t \t \t 3.FAST FOODS";
    cout<<"\n \t \t \t \t \t \t 4.SANDWICHES";
    cout<<"\n \t \t \t \t \t \t 5.GRILLED SANDWICHES";
    cout<<"\n \t \t \t \t \t \t 6.PIZZA";
    cout<<"\n \n IF YOU WANT TO ORDER CLICK B IF NO CLICK N";
    ord=getch();
      if(ord==66 || ord==98)
     {
       order();
       system("cls");
        char q;
       cout<<"\n \n \n \n \t \t \t \t**************** GET DISCOUNTS *************************";
       cout<<"\n \n \n \n \t \t \t \t1. IF you are premium member press Y";
       cout<<"\n \t \t \t \t 2. If you had a shop discount card press D \n";
       cout<<"\n \t \t \t \t IF YOU DON'T HAVE ANYTHIG PRESS ANY KEY \n";
        q=getch();
        if(q==89 || q==121)
        {
            c.premium();
        }
        else if(q==68 || q==100)
        {
             cout<<"\n \t \t \t \t "<<"1. PLATINUM"<<endl;
             cout<<"\n \t \t \t \t "<<"2. GOLD"<<endl;
             cout<<"\n \t \t \t \t "<<"3. SILVER"<<endl;
             cout<<"\n \t \t \t \t "<<" ENTER CARD THAT YOU HAVE"<<endl;
            cin>>ca;
            switch(ca)
            {
                case 1: c.platinum();
                      break;
                case 2: c.gold();
                        break;
                case 3: c.silver();
                default:cout<<"INVALID INPUT"<<endl;

            }
        }
        else
        {
            bill();
        }

        system("cls");

        bill();
       break;
     }
      else
     {
       cout<<"\n ENTER YOUR CHOICE OF CATEGORIES";
       cin>>cat;
       cout<<"\n INPUT 7 TO EXIT";
      switch(cat)
     {
       case 1:cout<<"\n \t \t \t \t \t \t 1.IDILI SAMBHAR      : RS 36";
              cout<<"\n \t \t \t \t \t \t 2.MISSAL PAV (2PAV)  : RS 48";
              cout<<"\n \t \t \t \t \t \t INPUT 7 TO EXIT";
              break;
       case 2:cout<<"\n \t \t \t \t \t \t 1.SADA DOSA          : RS 40";
              cout<<"\n \t \t \t \t \t \t 2.UTTAPAM            : RS 48";
              cout<<"\n \t \t \t \t \t \t INPUT 7 TO EXIT";
              break;
       case 3:cout<<"\n \t \t \t \t \t \t 1.SABUDANA VADA      : RS 55";
              cout<<"\n \t \t \t \t \t \t 2.LASSI              : RS 20";
              cout<<"\n \t \t \t \t \t \t INPUT 7 TO EXIT";
              break;
       case 4:cout<<"\n \t \t \t \t \t \t 1.CHEESE SANDWICH    : RS 60";
              cout<<"\n \t \t \t \t \t \t 2.CLUB SANDWICH      : RS 85";
              cout<<"\n \t \t \t \t \t \t INPUT 7 TO EXIT";
              break;
       case 5:cout<<"\n \t \t \t \t \t \t 1.POTATO MASALA GRIL : RS 90";
              cout<<"\n \t \t \t \t \t \t 2.PANEER MASALA GRIL: RS 95";
              cout<<"\n \t \t \t \t \t \t INPUT 7 TO EXIT";
              break;
       case 6:cout<<"\n \t \t \t \t \t \t 1.CHEESE PIZZA      : RS 105";
              cout<<"\n \t \t \t \t \t \t 2.MASHROOM PIZZA    : RS 110 \n";
              cout<<"\n \n \n \t \t \t \t \t \t INPUT 7 TO EXIT \n \n \n ";
              break;
       case 7:break;
       default:printf("enter proper category number .......");
               break;
      }
    }
  }while(cat!=7);
}

int main()
{
    int a,l,r;
    cards m;

//********************************************** LOGIN AND REGISTRATION PAGE ***************************************//
    cout<<"\n \n\n\n\n\n\n\n\t\t\t \t \t \t"<<"1. REGISTER"<<endl;
    cout<<"\n \t \t \t \t\t\t"<<"2. Login"<<endl;
    cin>>a;
    switch(a)
    {
        case 1: system("cls");
                m.reg();
               break;
        case 2: system("cls");
                cout<<"\n \t \t \t \t "<<"***********************LOGIN PAGE ****************************"<<endl;
                m.login();
                break;
        default:exit(1);
    }

//********************************************** HOME ***************************************//
    system("cls");
    char k;
     home();
    k=getch();
    system("cls");
    if(k==65||k==97)
    {
        //********************************************** ORDER ***************************************//
        m.order();
        system("cls");

        //**********************************************DISCOUNT SECTION***************************************//
         cout<<"\n \t \t \t \t "<<"1. ENTER 1 FOR DISCOUNT WITH PREMIUM CARD"<<endl;
         cout<<"\n \t \t \t \t "<<"2. ENTER 2 FOR DISCOUNT WITH DISCOUNT CARDS"<<endl;
        cin>>l;
        if(l==1)
        {
            system("cls");
            m.premium();
        }
        else if(l==2)
        {
            system("cls");
            cout<<"ENTER THE CARD THAT YOU HAVE"<<endl;
            cout<<"1. PLATINUM"<<endl;
            cout<<"2. GOLD"<<endl;
            cout<<"3. SILVER"<<endl;
            cin>>r;
            if(r==1)
            {
                m.platinum();
            }
            else if(r==2)
            {
                m.gold();
            }
            else if(r==3)
            {
                m.silver();
            }
            else
            {
                cout<<"NO SUCH CARD AVAILABLE PRESS ANY KEY TO PROCEED";
                getch();
            }
        }
        else
        {
            cout<<"PRESS ANY KEY TO PROCEED FOR BILL";
            getch();
        }
        system("cls");
         m. bill();
    }
    else if(k==67 || k==99)
    {
        system("cls");
        m.categories();
    }
    else if(k==70 || k==102)
    {
        system("cls");
        famous();
    }
}
