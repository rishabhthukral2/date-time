#include <iostream.h>
#include <time.h>
#include<conio.h>

void main()
{  clrscr();
       // current date/time based on current system
   time_t now = time(0);
   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout<<"DAY:"<<ltm->tm_mday;
   cout<<"  MON:"<<1+ltm->tm_mon;
   cout<<"  YEAR:"<<1900+ltm->tm_year;
  /*
   cout << "Number of sec since January 1,1970:" << now << endl;
   cout << "Year" << 1900 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
   */
   getch();
}