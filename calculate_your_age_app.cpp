# include <iostream>
using namespace std;


int main()
{
    cout << "============================\n";
    cout << "== calculate your age app ==\n";
    cout << "============================\n";

    int age;
    cin >> age;
    int age_in_days = age * 360 ;
    int age_in_hours = age_in_days * 24 ;
    int age_in_minutes = age_in_hours * 60 ;
    int age_in_seconds = age_in_minutes * 60 ;

    cout <<"age in years: " << age << "\n";
    cout << "age in days: "<< age_in_days <<"\n";
    cout << "age in hours: "<< age_in_hours <<"\n" ;
    cout << "age in minutes: "<< age_in_minutes <<"\n" ;
    cout << "age in seconds: "<< age_in_seconds <<"\n" ;
    return 0;

}











