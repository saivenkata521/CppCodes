//The following code will print the calendar
#include <bits/stdc++.h>
using namespace std;

int check(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int get_day(int d, int m, int y)
{
	int day;
	if (d < 1 || d > 31 || m < 1 || m > 12 || y < 1583)
		return 0; // In that case we have major error!
	if ((m == 1) || (m == 2))
	{
		m = m + 12;
		--y;
	} // You have to do this correction !!!!
	day = d + (m + 1) * 26 / 10 + y + y / 4 + 6 * (y / 100) + y / 400;
	day = day % 7;
	return day;
}

void print_space(int begn_day)
{
	if (begn_day == 0)      cout << "               ";
	else if (begn_day == 1) cout << "                  ";
	else if (begn_day == 2)	cout << "";
	else if (begn_day == 3)	cout << "   ";
	else if (begn_day == 4)	cout << "      ";
	else if (begn_day == 5)	cout << "         ";
	else if (begn_day == 6)	cout << "            ";
}

void middle_space()
{
	for (int i = 0; i < 33; i++) cout << " ";
}

void print_days()
{
	middle_space();
	cout << "Mo"<< " "<< "Tu"<< " "<< "We"<< " "<< "Th"<< " "<< "Fr"<< " "<< "Sa"<< " "<< "Sun" << endl;
}

int get_days(int month, int year)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		return 31;
	}
	else if (month == 2)
	{
		if (check(year) == 1) return 29;
		else      return 28;
	}
	else return 30;
}

void print_month(int i)
{
	if (i == 1)	cout << "                     ------------------JANUARY------------------" << endl<< endl;
	if (i == 2)	cout << "                     ------------------FEBRUARY-----------------" << endl<< endl;
	if (i == 3) cout << "                     ------------------MARCH--------------------" << endl<< endl;
	if (i == 4)	cout << "                     ------------------APRIL--------------------" << endl<< endl;
	if (i == 5)	cout << "                     ------------------MAY----------------------" << endl<< endl;
	if (i == 6) cout << "                     ------------------JUNE---------------------" << endl<< endl;
	if (i == 7) cout << "                     ------------------JULY---------------------" << endl<< endl;
	if (i == 8) cout << "                     ------------------AUGUST-------------------" << endl<< endl;
	if (i == 9) cout << "                     ------------------SEPTEMBER----------------" << endl<< endl;
	if (i == 10)cout << "                     ------------------OCTOBER------------------" << endl<< endl;
	if (i == 11)cout << "                     ------------------NOVEMBER-----------------" << endl<< endl;
	if (i == 12)cout << "                     ------------------DECEMBER-----------------" << endl<< endl;
}

void month_subpart( int inti1 , int cond1 , int inti2 , int cond2 , int flag , int k , int month , int year ){
	for (int j = inti1 ; j < cond1; j++)
		{
			for (int i = inti2 ; i <= cond2; i++)
			{
				if (k > get_days(month, year))
					break;
				else cout << k;
				if (k < 10) cout << "  ";
				else  cout << " ";
				k += 1;
			}
			cout << endl;
			middle_space();
			if( flag == 0 ) inti2 = 1;
		}
}

void print_month_caldr(int begn_day, int month, int year)
{
	begn_day = get_day(1, month, year);
	print_space(begn_day);
	if (begn_day == 0 || begn_day == 1)
	{
		middle_space();
		int k = 1;
		if (begn_day == 0) begn_day = 6;
		else if (begn_day == 1) begn_day = 7;
		month_subpart( 0 , 6 , begn_day , 7 , 0 , 1 , month , year );
	}
	else
	{
		int k = 1;
		middle_space();
		for (int i = begn_day; i <= 8; i++)
		{
			cout << k;
			if (k < 10) cout << "  ";
			else		cout << " ";
			k += 1;
		}
		cout << endl;
		middle_space();
		month_subpart( 1 , 6 , 1 , 7 , 2 , k , month , year );
	}
}

void print_cal(int begn_day, int month, int date, int year)
{
	int temp = month;
	for (int i = month; i <= 12; i++)
	{
		print_month(i);
		print_days();
		print_month_caldr(begn_day, temp, year);
		cout << endl;
		temp = temp + 1;
	}
}

void print( int day ){

    vector<string> v { "" , "Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"};
    cout<<"The day is ----> "<<v[day]<<endl;

}

int get_day_from_start_day( int startDay , int date , int m , int year ){

    int HowManyDays = get_days( m , year );
    
    for( int i = 1 ;  i <= date ; i++ ){
        startDay++; 
        if( startDay > 7 ){
            startDay = startDay%7;
        }
    }

    return (startDay-1 == 0 ) ? 7 : startDay-1 ;




}


int main()
{

    int flag = 0;
    cout<<"Print Calender                     : -> type 1 Press Enter: \n";
    cout<<"Print Month and day of given date  : -> type 2 Press Enter : \n";
    cout<<"\n\n\n                 Input : ";
    cin>>flag;

    if( flag == 1 ){

        int date = 1, month = 1, year;
        cout <<"\n\n\n                 Enter the year: "; cin >> year;
        cout << endl<< endl<< "                                 WELCOME TO THE YEAR " << year << endl<< endl;
        int begn_day = get_day(date, month, year);
        print_cal(begn_day, month, date, year);

    }
    else if( flag == 2 ){
        
        string d1,m1,y1;
        cout<<"\n\n\n                  Date : ";
        cin>>d1;

        cout<<"\n                      Month : ";
        cin>>m1;
 
        cout<<"\n                          Year : ";
        cin>>y1;

        cout<<endl<<endl<<endl;

        int Date;
        int Month;
        int year;

        if( d1[0] == '0' ) Date = d1[1]-'0';
        else  Date = stoi(d1);

        if( m1[0] == '0' ) Month = m1[1]-'0';
        else Month = stoi(m1);

        int Year = stoi(y1);

       
        print_month(Month);    cout<<endl;

        int StartDayOfMonth = get_day( 1 , Month , Year );

        print_days();

        print_month_caldr( StartDayOfMonth , Month , Year );


        int day = get_day_from_start_day( StartDayOfMonth , Date , Month , Year );
        print(day);

        cout<<endl;

    }

	
   


}
