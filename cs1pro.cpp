#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
#define agri 370
#define resi 650
using namespace std;
char g;
int k,a,str;
fstream fin,fout,ok;
class property
{
    private:
     struct
     {
       float price;
       int code,si;
       char address[100],name[50],siz[20],type[50];
     }pa;
    public:
    void getflat()
    {
      cout<<"\n*Property Code = ";
      cin>>pa.code;
      cout<<"\nProperty Name = ";
      cin.getline(pa.name,50);
      cin.getline(pa.name,50);
      cout<<"\nType = ";
      cin.getline(pa.type,50);
      cout<<"\nSize = ";
      cin.getline(pa.siz,20);
      cout<<"\nAddress = ";
      cin.getline(pa.address,50);
      cout<<"\nPrice = ";
      cin>>pa.price;
    }
    void getplot()
    {
      cout<<"\n*Property Code = ";
      cin>>pa.code;
      cout<<"\nProperty Name = ";
      cin.getline(pa.name,50);
      cin.getline(pa.name,50);
      cout<<"\nType = ";
      cin.getline(pa.type,50);
      cout<<"\nDimension(sq.ft) = ";
      cin>>pa.si;
      cout<<"\nAddress = ";
      cin.getline(pa.address,50);
      cin.getline(pa.address,50);
      /*cout<<"\nPrice = ";
      cin>>pa.price;*/
    }
    void gethouse()
    {
      cout<<"\n*Property Code = ";
      cin>>pa.code;
      cout<<"\nProperty Name = ";
      cin.getline(pa.name,50);
      cin.getline(pa.name,50);
      cout<<"\nType = ";
      cin.getline(pa.type,50);
      cout<<"\nBuild Area = ";
      cin.getline(pa.siz,20);
      cout<<"\nAddress = ";
      cin.getline(pa.address,50);
      cout<<"\nPrice = ";
      cin>>pa.price;
    }
    int getcode()
    {
        return pa.code;
    }
    void showflat()
    {
      cout<<"\n*Property Code = "<<pa.code;
      cout<<"\nProperty Name = "<<pa.name;
      cout<<"\nType = "<<pa.type;
      cout<<"\nSize = "<<pa.siz;
      cout<<"\nAddress = "<<pa.address;
      cout<<"\nPrice = "<<pa.price;
    }
    void showplot()
    {
      cout<<"\n*Property Code = "<<pa.code;
      cout<<"\nProperty Name = "<<pa.name;
      cout<<"\nType = "<<pa.type;
      cout<<"\nDimension = "<<pa.siz;
      cout<<"\nAddress = "<<pa.address;
      cout<<"\nPrice = ";
      if(strcmp(pa.type,"Agriculture")==0)
      {
      cout<<pa.si*agri;
      }
      else
      {
      cout<<pa.si*resi;
      }
    }
    void showhouse()
    {
      cout<<"\n*Property Code = "<<pa.code;
      cout<<"\nProperty Name = "<<pa.name;
      cout<<"\nType = "<<pa.type;
      cout<<"\nBuild Area = "<<pa.siz;
      cout<<"\nAddress = "<<pa.address;
      cout<<"\nPrice = "<<pa.price;
    }

};
int main()
{
  property obj1,obj2,obj3;
  p:
  cout<<endl<<setw(80)<<"***** ' Welcome To Ash Flinstones ' *****";
  cout<<endl<<endl<<" ~INTRODUCTION :\n\n  We are an independent property selling company which has a vision to give the people an innovative and easy way to search property....\n\n ~ABOUT:\nAsh Flinstones Inc. was established in the year 2001 under the leadership of Mr. Aditya Kumar Dubey.\nSince then, the company has never looked back and is moving forward with an un-fathomable speed spreading its influnce over the real-estate business and helping common people find their ideal house and property. ";
  cout<<endl<<endl<<"\n --> Press 'Y' to continue -- ";
  cin>>g;
  if(g=='y'||g=='Y')
  {
  bac:
  cout<<setw(65)<<"MAIN MENU"<<endl;
  cout<<"1.Property File creation.\n2.Add new Property data.\n3.Delete a Property record.\n4.Search and Display Property.\n5.See all properties.\n6.Go Back <--\n7.Quit.";
  cout<<endl<<"\n\n * Enter Your Choice -- ";
  cin>>k;
  if(k==1)
  {
      cout<<setw(65)<<"\nFILE CREATION ";
            cout<<"\n\n1.Plots.\n2.Flats.\n3.Individual Houses.\n4.Go back.";
            cout<<"\n\n---> Enter Your Choice -- ";
            cin>>a;
            if(a==1)
            {
                   fout.open("plot.dat",ios::out|ios::binary);
                   fout.close();
                   cout<<"\nFile has been created";
                   cout<<"\n\n * Press 'Y' to go back to main menu - ";
                   cin>>g;
                   goto bac;
            }
            if(a==2)
            {
                   fout.open("flat.dat",ios::out|ios::binary);
                   fout.close();
                   cout<<"\nFile has been created";
                   cout<<"\n\n * Press 'Y' to go back to main menu - ";
                   cin>>g;
                   goto bac;
            }
            if(a==3)
            {
                    fout.open("house.dat",ios::out|ios::binary);
                    fout.close();
                    cout<<"\nFile has been created";
                    cout<<"\n\n * Press 'Y' to go back to main menu - ";
                    cin>>g;
                    goto bac;
            }
            if(a==4)
            {
                goto bac;
            }
  }
  if(k==2)
  {
            cout<<"UPDATE Property's RECORDS";
            cout<<"\n\n1.Plots.\n2.Flats.\n3.Individual Houses.\n4.Go back.";
            cout<<"\n\n---> Enter Your Choice -- ";
            cin>>a;
            if(a==1)
            {
                    fout.open("plot.dat",ios::app|ios::binary);
                    do
                    {
                     obj1.getplot();
                     fout.write((char*)&obj1,sizeof(obj1));
                     cout<<"\nDo you wish to add more data?(y/n) = ";
                     cin>>g;
                    }while(g=='Y'||g=='y');
                    fout.close();
                    goto bac;
            }
            if(a==2)
            {
                     fout.open("flat.dat",ios::app|ios::binary);
                     do
                    {
                     obj1.getflat();
                     fout.write((char*)&obj1,sizeof(obj1));
                     cout<<"\nDo you wish to add more data?(y/n) = ";
                     cin>>g;
                    }while(g=='Y'||g=='y');
                    fout.close();
                    goto bac;
            }
            if(a==3)
            {
                    fout.open("house.dat",ios::app|ios::binary);
                    do
                    {
                     obj1.gethouse();
                     fout.write((char*)&obj1,sizeof(obj1));
                     cout<<"\nDo you wish to add more data?(y/n) = ";
                     cin>>g;
                    }while(g=='Y'||g=='y');
                    fout.close();
                    goto bac;
            }
            if(a==4)
            {
                goto bac;
            }
  }
  if(k==3)
  {
            cout<<"  --->>  Want to delete record of : ?";
            cout<<"\n\n1.Plots.\n2.Flats.\n3.Individual Houses.\n4.Go back.";
            cout<<"\n\n---> Enter Your Choice -- ";
            cin>>a;
            if(a==1)
            {
                fin.open("plot.dat",ios::in|ios::binary);
                        cout<<"\nProperty Code = ";
                        cin>>str;
                        ok.open("temp.dat",ios::out|ios::binary);
                        while(fin.read((char*)&obj2,sizeof(obj2)))
                        {
                            if(obj2.getcode()==str)
                            {
                                ok.write((char*)&obj2,sizeof(obj2));
                            }
                        }
                        fin.close();
                        ok.close();
                        remove("plot.dat");
                        rename("temp.dat","plot.dat");
                        cout<<"\nData Deleted.";
                        cout<<"\nPress 'Y' to go back to main menu - ";
                        cin>>g;
                        goto bac;
            }
            if(a==2)
            {
                        cout<<"\nProperty Code = ";
                        cin>>str;
                        fin.open("flat.dat",ios::in|ios::binary);
                        ok.open("temp.dat",ios::out|ios::binary);
                        while(fin.read((char*)&obj3,sizeof(obj3)))
                        {
                            if(obj3.getcode()==str)
                            {
                                ok.write((char*)&obj3,sizeof(obj3));
                            }
                        }
                        fin.close();
                        ok.close();
                        remove("flat.dat");
                        rename("temp.dat","flat.dat");
                        cout<<"\nData Deleted.";
                        cout<<"\nPress 'Y' to go back to main menu - ";
                        cin>>g;
                        goto bac;
            }
            if(a==3)
            {
                        cout<<"\nProperty Code = ";
                        cin>>str;
                        fin.open("house.dat",ios::in|ios::binary);
                        ok.open("temp.dat",ios::out|ios::binary);
                        while(fin.read((char*)&obj3,sizeof(obj3)))
                        {
                            if(obj3.getcode()==str)
                            {
                                ok.write((char*)&obj3,sizeof(obj3));
                            }
                        }
                        fin.close();
                        ok.close();
                        remove("house.dat");
                        rename("temp.dat","house.dat");
                        cout<<"\nData Deleted.";
                        cout<<"\nPress 'Y' to go back to main menu - ";
                        cin>>g;
                        goto bac;
            }
            if(a==4)
            {
                goto bac;
            }
  }
  if(k==4)
  {
      cout<<"\n  --->> Looking For : ?";
            cout<<"\n\n1.Plots.\n2.Flats.\n3.Individual Houses.\n4.Go back.";
            cout<<"\n\n---> Enter Your Choice -- ";
            cin>>a;
            if(a==1)
            {
                fin.open("plot.dat",ios::in|ios::binary);
                       cout<<"\nProperty Code = ";
                       cin>>str;
                       while(fin.read((char*)&obj2,sizeof(obj2)))
                       {
                         if(obj2.getcode()==str)
                         {
                           cout<<"\n*Record Found.";
                           cout<<"\nDo you want to see the record?(Press any key and return key) - ";
                           cin>>g;
                           obj2.showplot();
                         }
                         else
                         {
                            cout<<"\n\n*Record not found.";
                         }
                       }
                       fin.close();
                       cout<<"\n ** Press 'Y' to go back to main menu - ";
                        cin>>g;
                        goto bac;
            }
            if(a==2)
            {
                       fin.open("flat.dat",ios::in|ios::binary);
                       cout<<"\nProperty Code = ";
                       cin>>str;
                       while(fin.read((char*)&obj2,sizeof(obj2)))
                       {
                           if(obj2.getcode()==str)
                           {
                            cout<<"\n*Record Found.";
                            cout<<"\nDo you want to see the record?(Press any key and return key) - ";
                            cin>>g;
                            obj2.showflat();
                           }
                           else
                           {
                            cout<<"\n\n*Record not found.";
                           }
                       }
                       fin.close();
                       cout<<"\n ** Press 'Y' to go back to main menu - ";
                       cin>>g;
                       goto bac;
            }
            if(a==3)
            {
                fin.open("house.dat",ios::in|ios::binary);
                       cout<<"\nProperty Code = ";
                       cin>>str;
                       while(fin.read((char*)&obj2,sizeof(obj2)))
                       {
                        if(obj2.getcode()==str)
                            {
                                cout<<"\n*Record Found.";
                                cout<<"\nDo you want to see the record?(Press any key and return key) - ";
                                cin>>g;
                                obj2.showhouse();
                            }
                         else
                            {
                                cout<<"\n\n*Record not found.";
                            }
                       }
                       fin.close();
                       cout<<"\nPress 'Y' to go back to main menu - ";
                       cin>>g;
                       goto bac;

            }
            if(a==4)
            {
                goto bac;
            }
  }
  if(k==5)
  {
            cout<<"\n  --->> See List of : ?";
            cout<<"\n\n1.Plots.\n2.Flats.\n3.Individual Houses.\n4.Go back.";
            cout<<"\n\n---> Enter Your Choice -- ";
            cin>>a;
            if(a==1)
            {
               fin.open("plot.dat",ios::in|ios::binary);
               while(fin.read((char*)&obj2,sizeof(obj2)))
               {
                  obj2.showplot();
                  cout<<"\n";
               }
                       fin.close();
                       cout<<"\nPress 'Y' to go back to main menu - ";
                       cin>>g;
                       goto bac;
            }
            if(a==2)
            {
               fin.open("flat.dat",ios::in|ios::binary);
               while(fin.read((char*)&obj2,sizeof(obj2)))
               {
                  obj2.showflat();
                  cout<<"\n";
               }
                       fin.close();
                       cout<<"\nPress 'Y' to go back to main menu - ";
                       cin>>g;
                       goto bac;

            }
            if(a==3)
            {
               fin.open("house.dat",ios::in|ios::binary);
               while(fin.read((char*)&obj2,sizeof(obj2)))
               {
                  obj2.showhouse();
                  cout<<"\n";
               }
                       fin.close();
                       cout<<"\nPress 'Y' to go back to main menu - ";
                       cin>>g;
                       goto bac;
            }
            if(a==4)
            {
              goto bac;
            }
  }
  if(k==6)
  {
      goto p;
  }
  if(k==7)
  {
      //break;
  }
}
  else
  {
    //break;
  }
  return (0);
}
