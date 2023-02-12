
#include<iostream>
#include<conio.h>
using namespace std;
void line (void);
int main()
{


    int select=1;
    float RUP;


 while(select<=30 && select!=0 )
    {

    cout<<endl<<"\t\t\t CURRENCY CONVERTOR"<<endl;

      cout<<"    ";line(); line();
      cout<<endl;
      cout<<"    ";line();line();
      cout<<endl;
      cout<<endl;

      cout<<endl<<"\t SELECT COUNTRY"<<endl;

line();
      cout<<endl;
      line();
      cout<<endl;
    string coun [30]={"AFGHANISTAN","ARMENIA","AZERBAIJAN","BANGLADESH","CHINA","HONGKONG","INDIA","INDONESIA","IRAN","IRAQ","JAPAN","KUWAIT","MALAYSIA","NEPAL","NORTH KOREA","OMAN","QATAR","RUSSIA","SAUDI ARABIA","SINGAPORE","SOUTH KOREA","SRILANKA","SYRIA","THAILAND","TURKEY","UNITED ARAB EMIRATES","UNITED STATES","UNITED KINGDOM","CANADA","AUSTRALIA"};
    for(int i=0;i<30;i++)
    {
        cout<<i+1<<". "<<coun[i]<<endl<<endl;
    }

    cout<<"ENTER SELECTION (1-30)"<<endl<<endl<<"TO TERMINATE ENTER 0"<<endl<<endl;
    cin>>select;
    cout<<endl;




    switch (select)
    {

 int OPTION;
    case 1:




        cout<<"1. AFGHANI TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO AFGHANI"<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;
         cin>>OPTION;
         cout<<endl;

    if (OPTION==1)
    {

        float AG;
        cout<<"ENTER AFGHANI: ";
        cin>>AG;
        while(AG!=0)
{
        RUP=AG*1.66;
     line(); line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR  "<<endl;
         line(); line();
         cout<<endl;
         cout<<" ENTER AFGHANI: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;

        cin>>AG;

        }
        }
        else if(OPTION==2)
    {
        float AG;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
        while(RUP!=0)
        {


        AG=RUP*0.60;
        line(); line();
        cout<<endl<<"\t\tAFGHANI WILL BE: ";
        cout<<AG<<" AFN"<<endl;
        line(); line();
        cout<<endl;
        cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
    }
    }


    break;



     case 2:

        cout<<"1. ARMENIAN DRAM TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO ARMENIAN DRAM "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

cout<<endl;


    if (OPTION==1)
    {
        float AR;
        cout<<"ENTER ARMENIA DRAM: ";
        cin>>AR;
        while(AR!=0)
        {


        RUP=AR*0.24;
         line(); line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR"<<endl;
         line(); line();
         cout<<endl;
         cout<<" ENTER ARMENIA DRAM: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>AR;
        }

    }
    else if(OPTION==2)
    {
        float AR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
        AR=RUP/0.24;
         line(); line();
        cout<<endl<<"\t\tARMENIA DRAM WILL BE: ";
        cout<<AR<<" AMD"<<endl;
         line(); line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
    }
    }


    break;
     case 3:
        cout<<"1. AZERBAIJANI MANAT TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO AZERBAIJANI MANAT "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;


cout<<endl;

    if (OPTION==1)
    {
        float AZ;
        cout<<"ENTER AZERBAIJANI MANAT: ";
        cin>>AZ;
         while(AZ!=0)
        {
        RUP=AZ*67.89;
         line(); line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line(); line();
         cout<<endl;
         cout<<" ENTER AZERBAIJANI MANAT: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>AZ;

    }
    }
    else if(OPTION==2)
    {
        float AZ;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
        AZ=RUP/67.89;
         line(); line();
        cout<<endl<<"\t\tAZERBAIJANI MANAT WILL BE: ";
        cout<<AZ<<" AZN \n";
         line(); line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 4:
        cout<<"1. BANGLADESHI TAKA TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO BANGLADESHI TAKA "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;


cout<<endl;

    if (OPTION==1)
    {
        float BA;
        cout<<"ENTER BANGLADESHI TAKA: ";
        cin>>BA;
         while(BA!=0)
        {
        RUP=BA*1.39;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER BANGLADESHI TAKA : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>BA;
        }

    }
    else if(OPTION==2)
    {
        float BA;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
        BA=RUP/1.39;
         line();line();
        cout<<endl<<"\t\tBANGLADESHI TAKA WILL BE: ";
        cout<<BA<<" BDT \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
     case 5:
        cout<<"1. CHINESE YUAN TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO CHINESE YUAN "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
        cout<<endl;

if (OPTION==1)
    {
        float CH;
        cout<<"ENTER CHINESE YUAN: ";
        cin>>CH;
         while(CH!=0)
        {
        RUP=CH/0.055;
        line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR\n";
         line();line();
         cout<<endl;
         cout<<" ENTER CHINESE YUAN: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>CH;
        }

    }
    else if(OPTION==2)
    {
        float CH;
        cout<<"ENTER RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    CH=RUP*0.055;
     line();line();
        cout<<endl<<"\t\tCHINESE YUAN WILL BE: ";
        cout<<CH<<" CNY \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }
    break;
    case 6:
        cout<<"1. HONGKONG DOLLAR TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO HONGKONG DOLLAR "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

        cout<<endl;

    if (OPTION==1)
    {
        float HK;
        cout<<"ENTER HONGKONG DOLLAR: ";
        cin>>HK;
         while(HK!=0)
        {
        RUP=HK/0.068;
        line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
        line();line();
        cout<<endl;
        cout<<" ENTER HONGKONG DOLLAR : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>HK;
        }

    }
    else if(OPTION==2)
    {
        float HK;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    HK=RUP*0.068;
     line();line();
        cout<<endl<<"\t\tHONGKONG DOLLAR WILL BE: ";
        cout<<HK<<" HKD \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
     case 7:
        cout<<"1. INDIAN RUPEE TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO INDIAN RUPEE "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

       cout<<endl;


    if (OPTION==1)
    {
        float IP;
        cout<<"ENTER INDIAN RUPEE: ";
        cin>>IP;
         while(IP!=0)
        {
        RUP=IP/0.56;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER INDIAN  RUPEE: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>IP;
        }

    }
    else if(OPTION==2)
    {
        float IP;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    IP=RUP*0.56;
     line();line();
        cout<<endl<<"\t\tINDIAN RUPEE WILL BE: ";
        cout<<IP<<" INR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 8:
        cout<<"1. INDONESIAN RUPIAH TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO INDONESIAN RUPIAH "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;



    if (OPTION==1)
    {
        float ID;
        cout<<"ENTER INDONESIAN RUPIAH: ";
        cin>>ID;
         while(ID!=0)
        {
        RUP=ID/119.18;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER INDONESIAN RUPIAH: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>ID;
        }

    }
    else if(OPTION==2)
    {
        float ID;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    ID=RUP*119.18;
     line();line();
        cout<<endl<<"\t\tINDONESIAN RUPIAH WILL BE: ";
        cout<<ID<<" IDR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 9:
        cout<<"1. IRANIAN RIAL TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO IRANIAN RIAL"<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;



    if (OPTION==1)
    {
        float IR;
        cout<<"ENTER IRANIAN RIAL: ";
        cin>>IR;
         while(IR!=0)
        {
        RUP=IR/327.11;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER IRANIAN RIAL : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>IR;
        }

    }
    else if(OPTION==2)
    {
        float IR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    IR=RUP*327.11;
     line();line();
        cout<<endl<<"\t\tIRANIAN RIAL WILL BE: ";
        cout<<IR<<" IRR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
     case 10:
        cout<<"1. IRAQI DINAR TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO IRAQI DINAR"<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;



    if (OPTION==1)
    {
        float ID;
        cout<<"ENTER IRAQI DINAR: ";
        cin>>ID;
         while(ID!=0)
        {
        RUP=ID/10.32;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER IRAQI DINAR : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>ID;
        }

    }
    else if(OPTION==2)
    {
        float ID;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    ID=RUP*10.32;
     line();line();
        cout<<endl<<"\t\tIRAQI DINAR WILL BE: ";
        cout<<ID<<" IQD \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
     case 11:
        cout<<"1. JAPANESE YEN TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO JAPANESE YEN "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

     if (OPTION==1)
    {
        float JY;
        cout<<"ENTER JAPANESE YEN : ";
        cin>>JY;
         while(JY!=0)
        {
        RUP=JY/0.93;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER JAPANESE YEN : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>JY;
        }

    }
    else if(OPTION==2)
    {
        float JY;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    JY=RUP*0.93;
     line();line();
        cout<<endl<<"\t\tJAPANESE YEN WILL BE: ";
        cout<<JY<<" JPY \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 12:
        cout<<"1. KUWAITI DINAR TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO KUWAITI DINAR "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

cout<<endl;


    if (OPTION==1)
    {
        float KD;
        cout<<"ENTER KUWAITI DINAR : ";
        cin>>KD;
         while(KD!=0)
        {
        RUP=KD/0.0026;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER KUWAITI DINAR : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>KD;
        }

    }
    else if(OPTION==2)
    {
        float KD;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    KD=RUP*0.0026;
     line();line();
        cout<<endl<<"\t\tKUWAITI DINAR WILL BE: ";
        cout<<KD<<" KWD \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 13:
        cout<<"1. MALAYSIAN RINGGIT TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO MALAYSIAN RINGGIT "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;



    if (OPTION==1)
    {
        float MR;
        cout<<"ENTER MALAYSIAN RINGGIT : ";
        cin>>MR;
         while(MR!=0)
        {
        RUP=MR/0.034;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER MALAYSIAN RINGGIT: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>MR;
        }

    }
    else if(OPTION==2)
    {
        float MR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    MR=RUP*0.034;
     line();line();
        cout<<endl<<"\t\tMALAYSIAN RINGGIT WILL BE: ";
        cout<<MR<<" MYR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 14:
        cout<<"1. NEPALESE RUPEE TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO NEPALESE RUPEE "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;



    if (OPTION==1)
    {
        float NR;
        cout<<"ENTER NEPALESE RUPEE : ";
        cin>>NR;
         while(NR!=0)
        {
        RUP=NR/0.90;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<"ENTER NEPALESE RUPEE: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>NR;
        }

    }
    else if(OPTION==2)
    {
        float NR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    NR=RUP*0.90;
     line();line();
        cout<<endl<<"\t\tNEPALESE RUPEE WILL BE: ";
        cout<<NR<<" NPR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 15:
        cout<<"1. NORTH KOREAN WAN TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO NORTH KOREAN WAN "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

cout<<endl;


    if (OPTION==1)
    {
        float NK;
        cout<<"ENTER NORTH KOREAN WAN : ";
        cin>>NK;
         while(NK!=0)
        {
        RUP=NK/7.80;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER NORTH KOREAN WAN : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>NK;
        }

    }
    else if(OPTION==2)
    {
        float NK;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    NK=RUP*7.80;
     line();line();
        cout<<endl<<"\t\tNORTH KOREAN WAN WILL BE: ";
        cout<<NK<<" KPW \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
     case 16:
        cout<<"1. OMANI RIAL TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO OMANI RIAL "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

cout<<endl;


    if (OPTION==1)
    {
        float OR;
        cout<<"ENTER OMANI RIAL : ";
        cin>>OR;
         while(OR!=0)
        {
        RUP=OR/0.00330;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER OMANI RIAL: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>OR;
        }

    }
    else if(OPTION==2)
    {
        float OR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    OR=RUP*0.00330;
     line();line();
        cout<<endl<<"\t\tOMANI RIAL WILL BE: ";
        cout<<OR<<" OMR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 17:
        cout<<"1. QATARI RIAL TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO QATARI RIAL "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

cout<<endl;


    if (OPTION==1)
    {
        float QR;
        cout<<"ENTER QATARI RIAL : ";
        cin>>QR;
         while(QR!=0)

        {
        RUP=QR/0.031;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER QATARI RIAL: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>QR;
        }

    }
    else if(OPTION==2)
    {
        float QR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    QR=RUP*0.0371;
     line();line();
        cout<<endl<<"\t\tQATARI RIAL WILL BE: ";
        cout<<QR<<" QAR \n";
         line();line();
         cout<<endl;
        cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;

        cin>>RUP;
        }
    }

    break;
     case 18:
        cout<<"1. RUSSIAN RUBLE TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO RUSSIAN RUBLE "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;


cout<<endl;

    if (OPTION==1)
    {
        float RR;
        cout<<"ENTER RUSSIAN RUBLE : ";
        cin>>RR;
         while(RR!=0)
        {

        RUP=RR/0.52;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER RUSSIAN RUBLE: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RR;}

    }
    else if(OPTION==2)
    {
        float RR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    RR=RUP*0.52;
 line();line();
        cout<<endl<<"\t\tRUSSIAN RUBLE WILL BE: ";
        cout<<RR<<" RUB \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;}
    }

    break;
     case 19:
        cout<<"1. SAUDI ARABIAN RIYAL TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO SAUDI ARABIAN RIYAL "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

cout<<endl;


    if (OPTION==1)
    {
        float SR;
        cout<<"ENTER SAUDI ARABIAN RIYAL : ";
        cin>>SR;
         while(SR!=0)
        {
        RUP=SR/0.032;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER SAUDI ARABIAN RIYAL : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>SR;}

    }
    else if(OPTION==2)
    {
        float SR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    SR=RUP*0.032;
     line();line();
        cout<<endl<<"\t\tSAUDI ARABIAN RIYAL WILL BE: ";
        cout<<SR<<" SAR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 20:
        cout<<"1. SINGAPORE DOLLAR TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO SINGAPORE DOLLAR "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;


cout<<endl;

    if (OPTION==1)
    {
        float SD;
        cout<<"ENTER SINGAPORE DOLLAR : ";
        cin>>SD;
         while(SD!=0)
        {
        RUP=SD/0.011;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER SINGAPORE DOLLAR : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>SD;
        }

    }
    else if(OPTION==2)
    {
        float SD;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    SD=RUP*0.011;
     line();line();
        cout<<endl<<"\t\tSINGAPORE DOLLAR WILL BE: ";
        cout<<SD<<" SGD \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
     case 21:
        cout<<"1. SOUTH KOREAN WAN TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO SOUTH KOREAN WAN "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;


cout<<endl;

    if (OPTION==1)
    {
        float SK;
        cout<<"ENTER SOUTH KOREAN WAN : ";
        cin>>SK;
         while(SK!=0)
        {
        RUP=SK/9.24;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER SOUTH  KOREAN WAN: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>SK;
        }

    }
    else if(OPTION==2)
    {
        float SK;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    SK=RUP*9.24;
     line();line();
        cout<<endl<<"\t\tSOUTH KOREAN WAN WILL BE: ";
        cout<<SK<<" KRW \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 22:
        cout<<"1. SRILANKAN RUPEE TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO SRILANKAN RUPEE "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;



    if (OPTION==1)
    {
        float SR;
        cout<<"ENTER SRILANKAN RUPEE : ";
        cin>>SR;
         while(SR!=0)
        {
        RUP=SR/1.34;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER SRILANKAN RUPEE: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>SR;}

    }
    else if(OPTION==2)
    {
        float SR;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    SR=RUP*1.34;
     line();line();
        cout<<endl<<"\t\tSRILANKAN RUPEE WILL BE: ";
        cout<<SR<<" LKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 23:
        cout<<"1. SYRIAN POUND TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO SYRIAN POUND "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;



    if (OPTION==1)
    {
        float SP;
        cout<<"ENTER SYRIAN POUND : ";
        cin>>SP;
         while(SP!=0)
        {
        RUP=SP/4.45257;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER SYRIAN POUND : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>SP;}

    }
    else if(OPTION==2)
    {
        float SP;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    SP=RUP*4.45257;
     line();line();
        cout<<endl<<"\t\tSYRIAN POUND WILL BE: ";
        cout<<SP<<" SYP \n";
         line();line();
         cout<<endl;
        cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;}
    }

    break;
    case 24:
        cout<<"1. THAI BAHT TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO THAI BAHT "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;

cout<<endl;

    if (OPTION==1)
    {
        float TB;
        cout<<"ENTER THAI BAHT : ";
        cin>>TB;
         while(TB!=0)
        {
        RUP=TB/0.27;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER THAI BAHT: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>TB;}

    }
    else if(OPTION==2)
    {
        float TB;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    TB=RUP*0.27;
     line();line();
        cout<<endl<<"\t\tTHAI BAHT WILL BE: ";
        cout<<TB<<" THB \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;}
    }

    break;
    case 25:
        cout<<"1. TURKISH LIRA TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO TURKISH LIRA "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;

    if (OPTION==1)
    {
        float TL;
        cout<<"ENTER TURKISH LIRA : ";
        cin>>TL;
         while(TL!=0)
        {
        RUP=TL/0.035;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER TURKISH LIRA : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>TL;}

    }
    else if(OPTION==2)
    {
        float TL;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    TL=RUP*0.035;
     line();line();
        cout<<endl<<"\t\tTURKISH LIRA WILL BE: ";
        cout<<TL<<" TRY \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
        }
    }

    break;
    case 26:
        cout<<"1. UAE DIRHAM TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO UAE DIRHAM "<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;

        cin>>OPTION;
cout<<endl;

    if (OPTION==1)
    {
        float UD;
        cout<<"ENTER UAE DIRHAM : ";
        cin>>UD;
         while(UD!=0)
        {
        RUP=UD/0.032;
         line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR \n";
         line();line();
         cout<<endl;
         cout<<" ENTER UAE DIRHAM: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>UD;}


    }
    else if(OPTION==2)
    {
        float UD;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
         while(RUP!=0)
        {
    UD=RUP*0.032;
     line();line();
        cout<<endl<<"\t\tUAE DIRHAM WILL BE: ";

        cout<<UD<<"  AED \n";
         line();line();
         cout<<endl;
         cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;}
    }

    break;



    case 27:
        cout<<"1. US DOLLAR TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO US DOLLAR"<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;
cin>>OPTION;
cout<<endl;

    if (OPTION==1)
    {

        float UD;
        int OP;
        cout<<"ENTER US DOLLAR: ";
        cin>>UD;
        while(UD!=0)
{
        RUP=UD*115.60;
     line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR  "<<endl;
         line();line();
         cout<<endl;
         cout<<" ENTER US DOLLAR : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>UD;

        }
        }


    else if(OPTION==2)
    {
        float UD;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
        while(RUP!=0)
        {


        UD=RUP/115.60;
        line();line();
        cout<<endl<<"\t\tUS DOLLAR WILL BE: ";
        cout<<UD<<" USD"<<endl;
        line();line();
        cout<<endl;
        cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
    }
    }


    break;


    case 28:



        cout<<"1. BRITISH POUND TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO BRITISH POUND"<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;
cin>>OPTION;

cout<<endl;


    if (OPTION==1)
    {

        float BP;
        int OP;


        cout<<"ENTER BRITISH POUND: ";
        cin>>BP;
        while(BP!=0)
{
        RUP=BP*164.64;
     line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR  "<<endl;
         line();line();
         cout<<endl;
         cout<<" ENTER BRITISH POUND : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>BP;

        }
        }


    else if(OPTION==2)
    {
        float BP;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
        while(RUP!=0)
        {


        BP=RUP/164.64;
        line();line();
        cout<<endl<<"\t\tBRITISH POUND WILL BE: ";
        cout<<BP<<" GBP"<<endl;
        line();line();
        cout<<endl;
        cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
    }
    }


    break;


    case 29:



        cout<<"1. CANADIAN DOLLAR TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO CANADIAN DOLLAR"<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;
cin>>OPTION;
cout<<endl;



    if (OPTION==1)
    {

        float CD;
        int OP;


        cout<<"ENTER CANADIAN DOLLAR: ";
        cin>>CD;
        while(CD!=0)
{
        RUP=CD*91.62;
     line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR  "<<endl;
         line();line();
         cout<<endl;
         cout<<" ENTER CANADIAN DOLLAR : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>CD;

        }
        }


    else if(OPTION==2)
    {
        float CD;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
        while(RUP!=0)
        {


        CD=RUP/91.62;
        line();line();
        cout<<endl<<"\t\tCANADIAN DOLLAR WILL BE: ";
        cout<<CD<<" CAD"<<endl;
        line();line();
        cout<<endl;
        cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
    }
    }


    break;

case 30:



        cout<<"1. AUSTRALIAN DOLLAR TO PAKISTANI RUPEES"<<endl<<endl;
        cout<<"2. PAKISTANI RUPEES TO AUSTRALIAN DOLLAR"<<endl<<endl;
        cout<<"ENTER SELECTION: (1-2)"<<endl;
cin>>OPTION;

cout<<endl;


    if (OPTION==1)
    {

        float AD;
        int OP;



        cout<<"ENTER AUSTRALIAN DOLLAR: ";
        cin>>AD;
        while(AD!=0)
{
        RUP=AD*89.76;
     line();line();
        cout<<endl<<"\t\tPAKISTANI RUPEES WILL BE: "<<RUP<<" PKR  "<<endl;
         line();line();
         cout<<endl;
        cout<<" ENTER AUSTRALIAN DOLLAR : "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>AD;

        }
        }


    else if(OPTION==2)
    {
        float AD;
        cout<<"ENTER PAKISTANI RUPEES:";
        cin>>RUP;
        while(RUP!=0)
        {

        AD=RUP/89.76;
        line();line();
        cout<<endl<<"\t\tAUSTRALIAN DOLLAR WILL BE: ";
        cout<<AD<<" AUD"<<endl;
        line();line();
        cout<<endl;
    cout<<" ENTER PAKISTANI RUPEES: "<<endl<<endl<<"  OR"<<endl<<endl;
         cout<<" BACK = 0"<<endl;
        cin>>RUP;
    }
    }

    break;
    default:
     cout<<"\t\t";line();
     cout<<endl;


    cout<<"\t\t";line();
    cout<<endl;
    cout<<"\t\t\tIT IS INVALID SELECTION:"<<endl<<endl
    <<"\t\t\tPLEASE TRY AGAIN:"<<endl<<endl
    <<"\t\t\tTHANK YOU :";
     cout<<endl;
    cout<<"\t\t";line();
    cout<<endl;
    cout<<"\t\t";line();
    cout<<endl
    <<endl;
    }
}

}

void line(void)
{
    cout<<"-------------------------------------";
}
