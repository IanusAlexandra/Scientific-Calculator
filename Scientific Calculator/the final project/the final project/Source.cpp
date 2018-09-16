//this project is asimple form of scientific calculator it can done some process like sum , subtract , multiplication , division ,solving equations .....etc 
//start to project and header files and global variabe.
#include <iostream>
#include <string>
#include <process.h>
using namespace std;
const long double PI = 3.141592654;
#define EPSILON 0.0000001 //this using in functions of roots.
//the function 
//=================================the project part============================================//
//this function to calculate mathematical equations like a+b-c*v/b.
void equation( string& equation,char mark[100],int& counter1,int& counter2,string num[100],int& number_that_result_by_convert_from_string_to_integer,float num2[100])
{
	counter1=0;
	for (int i=0;i<equation.length();i++)
		if ((equation[i]=='/')||(equation[i]=='*')||(equation[i]=='-')||(equation[i]=='+'))   
		{
			mark[counter1]=equation[i];
			counter1++;
		}
		 counter2=0;
		num[100];// ⁄—Ì› «·«” —»‰Õ «··Ï »‰Ê÷⁄ ›ÌÂ« «·«—ﬁ«„ ÊÂÏ ·”Â ‘«— ﬁ»· „«  ÕÊ· ·œÌ”Ì„«·
	for (int i=0;i<equation.length();i++)
	{
		if ((equation[i]=='/')||(equation[i]=='*')||(equation[i]=='-')||(equation[i]=='+'))  // Â‰« «‰« ÂŒ“‰ «·«—ﬁ«„ Â⁄—› ‰Â«ÌÂ «·—ﬁ„ „‰ «·⁄·«„«  «·Õ”«»ÌÂ 
		{                                                         
			counter2++;
			continue;
		}
		else 
		{
			num[counter2]+=equation[i];   // ⁄„·ÌÂ «·Ã„⁄ ·„« »  ⁄„· ›Ì ” —‰Ã » ·“ﬁ «·«—ﬁ«„ „⁄ »⁄÷Â« Ê “Ì „« ﬁÊ·  ›Êﬁ ‰Â«ÌÂ «·—ﬁ„ Â  ⁄—›  
			                             // «·«” —Ì‰Ã œÏ «··Ï » Ê÷⁄ «·«—ﬁ«„ ›ÌÂ« ·ﬂ‰Â« ·„  ÕÊ· «·Ï «‰ Ã— ·”Â ‘«—
		}
	}
	number_that_result_by_convert_from_string_to_integer=0; 
	for(int i=0;i<=counter2;i++)//Â‰« «‰« »ÕÊ· «·—ﬁ„ „‰ œ« « ÿÌ» ” —‰Ã · œ« « ÿÌ» «‰  
	{        //“Ì „« ﬁÊ·  ›Êﬁ «‰ «·ﬂÊ„»Ì·— »Ì ⁄«„· „⁄ ” —‰Ã ⁄·Ì «‰Â« «—Ì ‘«— ›⁄·‘«‰ «ÕÊ· ﬂ· «·Ì„‰  «” Œœ„  ‰”   ·Ê» 
		number_that_result_by_convert_from_string_to_integer=0;
		for (int j=0;j<num[i].size();j++)
			number_that_result_by_convert_from_string_to_integer=(number_that_result_by_convert_from_string_to_integer*10)+(num[i][j]-48);//œÌ ÿ—ÌﬁÂ «’·« Ã‰—«· ⁄·‘«‰ «Ã„⁄ —ﬁ„ «ﬂ — „‰ œÃ   
		num2[i]=number_that_result_by_convert_from_string_to_integer;
	}

}	
//the end of the function.
//this function to determine if number is even or odd.
void Even_or_Odd_number()
{
 long int  number_of_even_and_odd;//⁄‘«‰ „Ì‰›⁄‘ ‰œŒ· ﬂ”— 
cout<<"Enter number that you want to determine it :";
cin>>number_of_even_and_odd;
if(number_of_even_and_odd < 0)
 {
 cout<<"Invalid input"<<endl;
 }
else if(number_of_even_and_odd % 2 == 0)
 {
	cout<<"number ["<<number_of_even_and_odd<<"] is even"<<endl;
 }
else if(number_of_even_and_odd % 2 == 1)
 {
	cout<< "number ["<<number_of_even_and_odd<<" ] is odd"<<endl;
 }
}
//end of the function.
//function to calculate the factorial to number.
//„·ÕÊŸÂ ’€Ì—Â ⁄‘«‰ »”»» «‰ «·›«ﬂ Ê—Ì« ·  „ ⁄—› »·Ê‰Ã ·Ê‰Ã ›«·„‘ﬂ·Â «‰ «·«—ﬁ«„ «··Ï »⁄œ «·⁄‘—Ì‰«  Â ÿ·⁄ €·ÿ ÊœÂ „‘ ⁄Ì» ›Ï «·»—‰«„Ã «·„‘ﬂ·Â «‰ «··Ê‰Ã ·Ê‰Ã „‘ ÂÌ” Õ„· «ﬂ — „‰ ﬂœÂ 
void calculate_factorial()
{ 
	long long factorial=1;
	long long number_want_to_calculated_its_factorial;
	cout<<"please,enter the number :";
cin>>number_want_to_calculated_its_factorial;
if(number_want_to_calculated_its_factorial == 0)
{
 cout<<"the factorial to ["<<number_want_to_calculated_its_factorial<<"] is ["<<1<<"]."<<endl;
}
else if(number_want_to_calculated_its_factorial < 0)
{
 cout<<"Invalid input because number entered less than zero."<<endl;
}
else 
{
for(int i = 1 ; i <= number_want_to_calculated_its_factorial ; i++)
   {
      factorial *= i;
   }
   cout<<"the factorial to ["<<number_want_to_calculated_its_factorial<<"] is ["<<factorial<<"]."<<endl;
}
}
//end of function.
//function to determine the prime or not prime.
void prime_numbers()
{long long number_prime_or_not;
 cout<<"Enter number that you want to check :";
 cin>>number_prime_or_not;
 if((number_prime_or_not == 0 )||(number_prime_or_not == 1))
 {
	 cout<<"["<<number_prime_or_not<<"]"<<"is not prime"<<endl;
 }
 else if(number_prime_or_not < 0)
 {
   cout<<"Invalid input"<<endl;
 }
 else {
 for(int i = 2 ; i < number_prime_or_not ; i++)
 {
  if(number_prime_or_not % i == 0)
  {
    cout<<"number ["<<number_prime_or_not<<"]is not prime "<<endl;
    exit(0);

  }

 }

 }

}
//end of the function.
//end of the project.
//====================================the bounus part======================================================// 
//this part related to solve power and calculate any root to numbers.
// this function to solve any integer root to any number 
double power_to_root(double base , double power) //»œ«Ì… «·›«‰ﬂ‘‰ „‰  Õ  
{


	double the_power=1;
	{
	for(int i=1 ; i<=power; i++)
		the_power *=base;
	}
	
	return the_power; 
}
//continue.......
long double any_root(long double number,long double base) 
{
        long double low = 0; 
        long double high = 10000000; 
        long double mid = 0; 
 
        while (high - low > EPSILON) 
		{
                mid = low + (high - low) / 2;
				if (power_to_root(mid , base) > number )
				{
                        high = mid;
                } 
				else 
				{
                        low = mid;
                }    
        }   
        return mid;
}
//end of function.
//this function to call any root function.
void calling_any_root_function()
{
	long double number , base ;
    cout<<"Enter the number :";
	cin>>number;
	cout<<"Enter the base :";
	cin>>base;
	cout<<"The root ("<<base<<")"<<"to"<<number<<"= ("<<any_root(number , base)<<")"<<endl;
}
//this function calculate any integer power to any number double or long double...etc.
long double puplic_power(long double base,long long exponent) 
{   
	long double  power=1;	
	for(int i=1;i<=exponent;i++)
	{
		power *=base;	
	}
 return power;
}
//end of function.
//this function to call puplic power function.
void calling_puplic_power_function()
{
	long double base;
	long long exponent;//⁄„· Â« ·Ê‰Ã ·Ê‰Ã ⁄‘«‰ ﬂœÂ ﬂœÂ «‰« „‘ „Õ «Ã «—ﬁ«„ ⁄‘—ÌÂ ›Ï «·«” 
	cout<<"Enter the base:"<<endl;
	cin>>base;
	cout<<"Enter the exponent:"<<endl;
	cin>>exponent;
	cout<<"The power ("<<exponent<<" )to base"<<base<<"= ("<<puplic_power(base , exponent)<<")"<<endl;
}
//now......this part related to solving equations in two variables ,three variables ....etc as we will see 
//solve two equtions in two variables
void calculate_two_equations()
{
    long double  a_to_x1, b_to_y1, c1, a_to_x2, b_to_y2, c2,the_value_of_x, the_value_of_y;
	cout<<"you want to solve to equations in two variables like these equations"<<endl;
	cout<<"a1nx + b1ny = c1n"<<endl;
	cout<<"a2nx + b2nx = c2n"<<endl;
    cout << "Enter the values for the first equation." << endl;
    cout << "Enter the value for a1" << endl;
    cin >> a_to_x1;
    cout << "Enter the value for b1" << endl;
    cin >>  b_to_y1;
    cout << "Enter the value for c1" << endl;
    cin >> c1;
    cout << "Enter the values for the second equation." << endl;
    cout << "Enter the value for a2" << endl;
    cin >> a_to_x2;
    cout << "Enter the value for b2" << endl;
    cin >> b_to_y2;
    cout << "Enter the value for c2" << endl;
    cin >> c2;
    cout << "Your system of equations is the following:" << endl;
    cout << a_to_x1 << "x+" << b_to_y1 << "y=" << c1 << endl;
    cout << a_to_x2 << "x+" << b_to_y2 << "y=" << c2 << endl;

	if ((a_to_x1 * b_to_y2) - (b_to_y1 * a_to_x2) == 0)
	{
    cout << "The system has no solution." << endl;
    }
else
    {
	the_value_of_x = ((c1 * b_to_y2) - (b_to_y1 * c2))/((a_to_x1 * b_to_y2)-(b_to_y1 * a_to_x2));
	the_value_of_y = ((a_to_x1*c2) - (c1*a_to_x2)) / ((a_to_x1*b_to_y2) - (b_to_y1 * a_to_x2));
    cout << "x=" <<the_value_of_x  << " y=" << the_value_of_y  << endl;
    }
}
//end of the function 
//this function to solve three eqations in three variables.
void three_equations_in_three_variables()
{
long double delta, a1, a2, a3, b1, b2, b3, c1, c2, c3, d1, d2, d3,x,y,z;
cout<<"please follow this shape to solving the three equations "<<"\2"<<"\2"<<"\2"<<"\2"<<"\2"<<"\2"<<endl;
cout<<"a1x + b1y + c1z = d1"<<endl;
cout<<"a2x + b2y + c2z = d2"<<endl;
cout<<"a3x + b3y + c3z = d3"<<endl;
cout<<"Enter a1 :";
cin>>a1;
cout<<"Enter b1 :";
cin>>b1;
cout<<"Enter c1 :";
cin>>c1;
cout<<"Enter d1 :";
cin>>d1;
cout<<"Enter a2 :";
cin>>a2;
cout<<"Enter b2 :";
cin>>b2;
cout<<"Enter c2 :";
cin>>c2;
cout<<"Enter d2 :";
cin>>d2;
cout<<"Enter a3 :";
cin>>a3;
cout<<"Enter b3 :";
cin>>b3;
cout<<"Enter c3 :";
cin>>c3;
cout<<"Enter d3 :";
cin>>d3;
cout<<"so, you have been entered these equations"<<endl;
cout<<a1<<"x"<<"+"<<b1<<"y"<<"+"<<c1<<"z"<<"="<<d1<<endl;
cout<<a2<<"x"<<"+"<<b2<<"y"<<"+"<<c2<<"z"<<"="<<d2<<endl;
cout<<a3<<"x"<<"+"<<b3<<"y"<<"+"<<c3<<"z"<<"="<<d3<<endl;
	delta = (a1*((b2*c3)-(c2*b3))) -( b1*((a2*c3) - (c2*a3)))+(c1*((a2*b3) - (a3*b2)));
	if(delta == 0)
    cout<<"error"<<"\n";
    else{
		x=((d1*((b2*c3) - (c2*b3)))- (b1*((d2*c3) - (c2*d3))) +( c1*((d2*b3) - (d3*b2))))/delta;
		y=((a1*((d2*c3)-(c2*d3)))-( d1*((a2*c3) - (c2*a3)))+(c1*((a2*d3) - (a3*d2))))/delta;
		z=((a1*((b2*d3)-(d2*b3)))-( b1*((a2*d3) - (d2*a3)))+(d1*((a2*b3) - (a3*b2))))/delta;
	cout<<"the first root :"<< x <<endl;
	cout<<"the second root :"<<y<<endl;
	cout<<"the third root : "<<z<<endl;
    }
}
//end of the function.
//this function to solve quadratic equation.
void quadratic_equation()
{
double a , b , c , n , x1 , x2;
cout<<"please, follow this shape to solve quadratic equation."<<endl;
cout<<"ax^2 + bx + c = 0"<<endl;
cout<<"Enter a :";
cin >> a;
if(a==0)
{
cout<<"Math ERROR"<<endl;
}
else
{
cout << "Enter b : ";
cin >> b;
cout << "Enter c : ";
cin >> c;

n = (b*b) - 4*(a)*(c);
if(n >= 0)
{
	x1 = ((-b) + (any_root(n , 2)))/ (2*(a));
	x2 = ((-b) - (any_root(n , 2)))/(2*(a));
cout<<"the equation is ="<<" "<<a<<"x^2+"<<b<<"x+"<<c<<"\n"<<endl;
cout <<"root 1 =  ("<<x1<<") ,"<<"root 2 = ("<<x2<<")"<<"\n";
}
else if(n < 0)
{
 cout<<"the answers have imaginary roots "<<endl;
}
}
}
//end of the function.
//this equation to solve cubism equation.
void cubism_equation()
{
    double a , b , c , d , y , z , x , x1 , q , w , e , r , t , g , h , u , i , f ,x2 , x3;
    cout<<"please, Enter equation like this form "<<endl;
	cout<<"ax^3 + bx^2 + cx + d = 0"<<endl;
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	cout<<"Enter c :";
	cin>>c;
	cout<<"Enter d :";
	cin>>d;
	x=(2*puplic_power(b,3))-9*a*b*c+(27*d*(puplic_power(a,2)));
    q=(pow(b,2))-(3*a*c);
    y=puplic_power(x,2)-(4*(puplic_power(q,3)));
	z=any_root(y , 2);
     u=1/(6*a);
     w=b/(3*a);
     i=any_root(3,2);
     e=1/(3*a);
     t=((x+z)/2);
    r= any_root(t,3);
    g=((x-z)/2);
    if(g<0)
    {
        g=g * (-1);
     h=-(any_root(g,3));
     g=-g;
        }
        else if(g>0)
		{
           h=any_root(g,3);
        }
    x1=-w-(e*r)-(e*h);
    f=-w +(u*r)+(u*h);
    x2=(i*u*r)-(i*u*h);
    x3=-(i*u*r)+(i*u*h);
    if((x2 > 0)&&(x3>0))
	{
   cout<<a<<"x^3"<<"+"<<"("<<b<<"x^2"<<")"<<"+"<<"("<<c<<"x"<<")"<<"+"<<"("<<d<<")"<<"="<<x1<<","<<f<<"+"<<x2<<"i"<<","<<f<<"+"<<x3<<"i"<<"\n";
    }
else if((x2 > 0)&&(x3 < 0))
{
    x3=x3 * (-1);
cout<<a<<"x^3"<<"+"<<"("<<b<<"x^2"<<")"<<"+"<<"("<<c<<"x"<<")"<<"+"<<"("<<d<<")"<<"="<<x1<<","<<f<<"+"<<x2<<"i"<<","<<f<<"-"<<x3<<"i"<<"\n";
}
else if((x2 < 0)&&(x3>0))
{
        x2=x2*-1;
    cout<<a<<"x^3"<<"+"<<"("<<b<<"x^2"<<")"<<"+"<<"("<<c<<"x"<<")"<<"+"<<"("<<d<<")"<<"="<<x1<<","<<f<<"-"<<x2<<"i"<<","<<f<<"+"<<x3<<"i"<<"\n";
}
else if((x2 < 0)&&(x3 < 0))
{
    x2=x2*-1;
    x3=x3*-1;
    cout<<a<<"x^3"<<"+"<<"("<<b<<"x^2"<<")"<<"+"<<"("<<c<<"x"<<")"<<"+"<<"("<<d<<")"<<"="<<x1<<","<<f<<"-"<<x2<<"i"<<","<<f<<"-"<<x3<<"i"<<"\n";
}
}
//end function.
//this function to call the equations department.
void part_equations()
{int select;
 cout<<"Welcome to part of equations here you can solve all systems of equations"<<endl;
 cout<<"please select your process."<<endl;
 cout<<"1- to solve two equations in two variables."<<endl;
 cout<<"2- to solve three equations in three variables."<<endl;
 cout<<"3- to solve quadratic equation."<<endl;
 cout<<"4- to solve cubism equation."<<endl;
 cin>>select;
 if(select == 1)
 {
	 calculate_two_equations();
 }
 else if(select == 2)
 {
	 three_equations_in_three_variables();
 }
 else if(select == 3)
 {
	 quadratic_equation();
 }
 else if(select == 4)
 {
	 cubism_equation();
 }
 else
	 cout<<"Invalid input"<<endl;
}
//end function.
//this part related to inequality.
//this function to solve the first inequality.
void first_inequality()
{
float x,a,b,n;
 cout<<"please select the system that you want "<<endl;
	 cout<<"please,follow these forms to complete your requiremant"<<endl;
    cout << "1- ax + b < n"<<endl;
    cout << "2- ax + b > n"<<endl;
    cout << "3- ax + b >= n"<<endl;
    cout << "4- ax + b <= n"<<endl;
    cin>>x;
if(x==1)
    {
        cout<<"so you have beent  select this inequality  ax + b < n"<<endl;
           cout<<"please,Enter a;";
           cin>>a;
          cout<<"please,Enter b;";
         cin>>b;
         cout<<"Enter n;";
        cin>>n;
		cout<<"now your inequality is "<<endl;
       cout<<a<<"x +"<<b<<"<"<<n<<endl;
        if(a > 0)
         {
          cout<<"x"<<"<"<<(n-b)/a<<endl;
		  cout<<"and the interval to this solution is (-"<<static_cast<unsigned char>(236)<<","<<(n-b)/a<<")"<<endl;
        }
        if(a<0)
          {
              cout<<"x"<<">"<<(n-b)/a<<endl;
			  cout<<"and the interval to this solution is ("<<(n-b)/a<<","<<static_cast<unsigned char>(236)<<")"<<endl;
         }
    }
if(x==2)
{
     cout<<"so you have beent  select this inequality ax + b > n"<<endl;
    cout<<"Enter a;";
        cin>>a;
        cout<<"Enter b;";
        cin>>b;
        cout<<"Enter n;";
        cin>>n;
		cout<<"now your inequality is."<<endl;
       cout<<a<<"x +"<<b<<">"<<n<<endl;
        if(a > 0)
        {
        cout<<"x"<<">"<<(n-b)/a<<endl;
		 cout<<"and the interval to this solution is ("<<(n-b)/a<<","<<static_cast<unsigned char>(236)<<")"<<endl;
        }
        if(a < 0)
        {
              cout<<"x"<<"<"<<(n-b)/a<<endl;
              cout<<"and the interval to this solution is (-"<<static_cast<unsigned char>(236)<<","<<(n-b)/a<<")"<<endl;
        }

}
if(x==3)
{

     cout<<"so you have beent  select this inequality ax + b >= n"<<endl;
            cout<<"Enter a;";
        cin>>a;
        cout<<"Enter b;";
        cin>>b;
        cout<<"Enter n;";
        cin>>n;
       cout<<"now your inequality is."<<endl;
       cout<<a<<"x +"<<b<<">="<<n<<endl;
        if(a>0)
        {
        cout<<"x"<<">="<<(n-b)/a<<endl;
		 cout<<"and the interval to this solution is ["<<(n-b)/a<<","<<static_cast<unsigned char>(236)<<")"<<endl;

        }
        if(a<0)
        {
             cout<<"x"<<"<="<<(n-b)/a<<endl;
              cout<<"and the interval to this solution is (-"<<static_cast<unsigned char>(236)<<","<<(n-b)/a<<"]"<<endl;
			
        }

}
if(x==4)
{
         cout<<"so you have beent  select this inequality  ax + b <= n"<<endl;
          cout<<"Enter a;";
        cin>>a;
        cout<<"Enter b;";
        cin>>b;
        cout<<"Enter n;";
        cin>>n;
        cout<<"now your inequality is "<<endl;
       cout<<a<<"x +"<<b<<"<="<<n<<endl;
        if(a>0)
        {
         cout<<"x"<<"<="<<(n-b)/a<<endl;
		  cout<<"and the interval to this solution is (-"<<static_cast<unsigned char>(236)<<","<<(n-b)/a<<"]"<<endl;
        }
        if(a<0)
        {
			cout<<"x"<<">"<<(n-b)/a<<endl;
			  cout<<"and the interval to this solution is ["<<(n-b)/a<<","<<static_cast<unsigned char>(236)<<")"<<endl;
        }
   }
}
//end of function 
//this function to solve second inequality.
void second_inequality()
{
	int choice;
long double a , b , c , n , x1 , x2;
cout<<"please select the shape of inequality"<<endl;
cout<<"1-ax^2 + bx + c >= 0"<<endl;
cout<<"2-ax^2 + bx + c <= 0"<<endl;
cout<<"3-ax^2 + bx + c > 0"<<endl;
cout<<"4-ax^2 + bx + c < 0"<<endl;
cout<<"Enter the number of your choice:";
cin>>choice;
if(choice == 1)
{
cout<<"Enter a :";
cin >> a;
if(a==0)
{
cout<<"Math ERROR"<<endl;
}
else
{
cout << "Enter b : ";
cin >> b;
cout << "Enter c : ";
cin >> c;

cout<<"so, you entered this inequality :"<<a<<"*x^2 +"<<b<<"+"<<c<<">= 0 ";
n = (b*b) - 4*(a)*(c);
if(n < 0)
{
 cout<<"the answers have imaginary roots "<<endl;
}
else if(n >= 0)
{
	x1 = ((-b) + (any_root(n , 2)))/ (2*(a));
	x2 = ((-b) - (any_root(n , 2)))/(2*(a));
	if(((x1 > 0)&&(x2 > 0))||((x1 < 0)&&(x2 < 0)))//Â‰« ·Ê ﬂ«‰ «·Ã–—Ì‰ „ÊÃ»Ì‰ «Ê ”«·»Ì‰ 
	{
		if(x1 != x2)
		{	
	       cout<<endl;
		   cout<<" The answers to this inequality "<<endl;
	       cout<<"x <="<<x2<<","<<x1<<"<=x"<<endl;
		}
	}
	
	
}
}
}
//=====================================================================================================
else if(choice == 2)
{
cout<<"Enter a :";
cin >> a;
if(a==0)
{
cout<<"Math ERROR"<<endl;
}
else
{
cout << "Enter b : ";
cin >> b;
cout << "Enter c : ";
cin >> c;

cout<<"so, you entered this inequality :"<<a<<"*x^2 +"<<b<<"+"<<c<<"<= 0 ";
n = (b*b) - 4*(a)*(c);
if(n < 0)
{
 cout<<"the answers have imaginary roots "<<endl;
}
else if(n >= 0)
{
	x1 = ((-b) + (any_root(n , 2)))/ (2*(a));
	x2 = ((-b) - (any_root(n , 2)))/(2*(a));
	if(((x1 < 0)&&(x2 < 0))||((x1 > 0)&&(x2 <0))||((x1 > 0)&&(x2 > 0)))
	{
	 cout<<"The answer to this inequality is"<<endl;
	 cout<<"["<<x2<<"] <= X <=["<<x1<<"]"<<endl;
	}
}
}
}
//========================================================================================================
else if(choice == 3)
{
cout<<"Enter a :";
cin >> a;
if(a==0)
{
cout<<"Math ERROR"<<endl;
}
else
{
cout << "Enter b : ";
cin >> b;
cout << "Enter c : ";
cin >> c;

cout<<"so, you entered this inequality :"<<a<<"*x^2 +"<<b<<"+"<<c<<"> 0 ";
n = (b*b) - 4*(a)*(c);
if(n >= 0)
{
	x1 = ((-b) + (any_root(n , 2)))/ (2*(a));
	x2 = ((-b) - (any_root(n , 2)))/(2*(a));
	if(((x1 > 0)&&(x2 > 0))||((x1 < 0)&&(x2 < 0)))//Â‰« ·Ê ﬂ«‰ «·Ã–—Ì‰ „ÊÃ»Ì‰ «Ê ”«·»Ì‰ 
	{
		if(x1 != x2)
		{	
	       cout<<endl;
		   cout<<" The answers to this inequality "<<endl;
	       cout<<"x <"<<x2<<","<<x1<<"< x"<<endl;
		}
	}
}

}
}
//=======================================================================================================
else if(choice == 4)
{
cout<<"Enter a :";
cin >> a;
if(a==0)
{
cout<<"Math ERROR"<<endl;
}
else
{
cout << "Enter b : ";
cin >> b;
cout << "Enter c : ";
cin >> c;

cout<<"so, you entered this inequality :"<<a<<"*x^2 +"<<b<<"+"<<c<<"< 0 ";
n = (b*b) - 4*(a)*(c);
if(n < 0)
{
 cout<<"the answers have imaginary roots "<<endl;
}
else if(n >= 0)
{
	x1 = ((-b) + (any_root(n , 2)))/ (2*(a));
	x2 = ((-b) - (any_root(n , 2)))/(2*(a));
	if(((x1 < 0)&&(x2 < 0))||((x1 > 0)&&(x2 <0))||((x1 > 0)&&(x2 > 0)))
	{
	 cout<<"The answer to this inequality is"<<endl;
	 cout<<"["<<x2<<"] < X < ["<<x1<<"]"<<endl;
	}
}

}

}
}
//end of function.
//this function to call inequalities functions.
void inequalities_department()
{int v;
cout<<"Welcome to inequalities part. "<<endl;
cout<<"please select your process."<<endl;
cout<<"1- to calculate first inequality."<<endl;
cout<<"2- to calculate second inequality."<<endl;
cin>>v;
if(v == 1)
{
	first_inequality();
}
else if(v == 2)
{
	second_inequality();
}
else 
	cout<<"Invalid input"<<endl;
}
//this part related to converting from any base to another.
//this function using to calcualte power that related to converting.
unsigned long result = 0;
int power_to_converting(int base,int power) //«‰« Â‰« „⁄„· ‘ ﬂÊ· ·œ«·Â «·»«Ê— «·⁄«„Â ·«‰ œ«·… «·»«Ê— «·⁄«„Â » Õ”» «·»«Ê— ·«Ï —ﬁ„ ”Ê«¡ ﬂ«‰ «‰ Ã— «Ê œ»· ›⁄‘«‰ „Œ‘‘ ›Ï ﬂÊ‰œ‘‰“ “Ì«œÂ ÊﬂœÂ 
{
	int the_power=1;
	for(int i=1 ; i<=power; i++)
		the_power *=base;
	return the_power; 
}
//continue.....this function convert from any base number to decimal number.
unsigned long convert_from_any_base_to_decimal(string hex , int base1 )
{
	int base;
    for (int i=0; i<hex.length(); i++) 
	{
        if (hex[i]>=48 && hex[i]<=57)
        {
			result += (hex[i]-48)*pow(base1,hex.length()-i-1);//Â‰« ⁄„·‰« «·Õ—ﬂÂ » «⁄  «‰‰« ‰⁄„· «·»«Ê— ÂÊ ÿÊ· «·«” —Ì‰Ã Ê‰‰ﬁ’ «·”»» «‰‰« ·„« »‰œŒ· «·«” —Ì‰Ã «·„›—Ê÷ ·„« »‰ÕÊ· Â‰ÕÊ· „‰ «·Ì„Ì‰ ··‘„«· ›⁄‘«‰ ﬂœÂ Œ·Ì‰« «·»«Ê— »«··»‰À Ê—«Ã⁄ ⁄·Ï  ÕÊÌ· „‰ hex · decimal 
        } 
		else if (hex[i]>=65 && hex[i]<=90) 
		{
			result += (hex[i]-55)*pow(base1,hex.length()-i-1);
        } 
		else if (hex[i]>=97 && hex[i]<=122) 
		{
			result += (hex[i]-87)*pow(base1,hex.length()-i-1);
        }
    }
    return result;
}
//continue...this function used to convert from decimal number to any base else.
void convert_from_decimal_to_any_base(int base , int number)
{int j;
long int arr[1000];
 int i=0 , r;
 while(number!=0)
{
  r = number % base;
  arr[i] = r;
  i++;
  number /= base;
} 
for( j=i-1 ;j>=0 ; j--)//ÕÿÌ‰« «· j = i-1   ⁄‘«‰ ›Ï «Œ— «··Ê» «··Ï ›Êﬁ «·«Ï Â »ﬁÏ “«ÌœÂ Ê«Õœ 
{ 	
	if(arr[j] == 10)
  {
	cout<<"A";
  }
else if (arr[j] == 11)
  {
	 cout<<"B";
  }
else if(arr[j]==12)
  {
   cout<<"C";
  }
else if(arr[j] == 13)
  {
    cout<<"D";
  }
else if(arr[j]==14)
  {
   cout<<"E";
  }
else if(arr[j]==15)
  {
   cout<<"F";
  }
else if(arr[j]==16)
  {
   cout<<"G";
  }
else if(arr[j]==17)
  {
   cout<<"H";
  }
else if(arr[j]==18)
  {
   cout<<"I";
  }
else if(arr[j]==19)
  {
   cout<<"J";
  }
else if(arr[j]==20)
  {
   cout<<"K";
  }
else if(arr[j]==21)
  {
   cout<<"L";
  }
else if(arr[j]==22)
  {
   cout<<"M";
  }
else if(arr[j]==23)
  {
   cout<<"N";
  }
else if(arr[j]==24)
  {
   cout<<"O";
  }
else if(arr[j]==25)
  {
   cout<<"P";
  }
else if(arr[j]==26)
  {
   cout<<"Q";
  }
else if(arr[j]==27)
  {
   cout<<"R";
  }
else if(arr[j]==28)
  {
   cout<<"S";
  }
else if(arr[j]==29)
  {
   cout<<"T";
  }
else if(arr[j]==30)
  {
   cout<<"U";
  }
else if(arr[j]==31)
  {
   cout<<"V";
  }
else if(arr[j]==32)
  {
   cout<<"W";
  }
else if(arr[j]==33)
  {
   cout<<"X";
  }
else if(arr[j]==34)
  {
   cout<<"Y";
  }
else if(arr[j]==35)
  {
   cout<<"Z";
  }
  else 
	cout<<arr[j];
}
cout<<endl;

}
//end of function.
//this function to call converting functions.
void converting_department()
{
	long int base1,base2,length_of_string ;
	unsigned long the_result = 0;
    string input_number;
	cout<<"Welcome to converting part here you can convert numbers from any base to another like from base 5 to base 19 ....etc"<<endl;
	cout<<"Remember that limit of bases from 2 => 36"<<endl;
	cout<<"Enter base1 :";
	cin>>base1;
	cout<<"Enter base2 :";
	cin>>base2;
	cout<<"Enter the number that you want to convert :";
	cin>>input_number;
	length_of_string = input_number.length();
	if(((base1 >= 2)&&(base1 <= 36))&&((base2 >= 2)&&(base2 <= 36)))
	{
	for(int h = 0 ; h < length_of_string ; h++)//Â‰« »·› ⁄·Ï «·«” —Ì‰Ã ⁄‘«‰ «⁄—› «‰ ﬂ· ⁄‰«’— «·«” —Ì‰Ã „ Ê«›ﬁÂ „⁄ «·»«“ «·«Ê·Ï «··Ï „ÕœœÂ« «·ÌÊ“—
	{
		if((input_number[h] >= 48)&&(input_number[h] <= 57))
		{
			if(input_number[h] - 48 >= base1)
			{
			  cout<<"Invalid input "<<endl;
			 // exit(0);
			}
		}
		else if((input_number[h] >= 65)&&(input_number[h] <= 90))
		{
			if(input_number[h] - 55 >= base1)
			{
			 cout<<"INvalid input"<<endl;
			// exit(0);
			}
		
		}
		else if((input_number[h] >= 97)&&(input_number[h] <= 122))
		{
			if(input_number[h] - 87 >= base1)
			{
		      cout<<"Invalid input "<<endl;
		     // exit(0);
			}
		}
	}

	if(base1 == 10)
	{
		for(int i = 0 ; i < length_of_string ; i++)
		{ 
			if(input_number[i] >57)
			{
			  cout<<"Invalid input"<<endl;
			 // exit(0);
			}
			the_result += (input_number[i]-48) *  power_to_converting( 10 , length_of_string - i - 1);
		}
		
		convert_from_decimal_to_any_base(base2 , the_result);
	}
	else
		{ 
			convert_from_any_base_to_decimal(input_number , base1);
	       convert_from_decimal_to_any_base(base2 , result);
			cout<<endl;
	    }
	}
	else 
	{
		cout<<"out of bases "<<endl;
	}
}
//this part related to solve matrix system.
//this function to calcualte the value of 2*2 matrix.
void dual_matrix()
{   long double a1, a2 , a3 , a4 ,result_of_matrix;
    cout<<"please follow instructions."<<endl;
	cout<<"the dual matrix should be like this shape"<<endl;
    cout<<"|a1      a2|"<<endl;
	cout<<"|a3      a4|"<<endl;
cout<<"so,please enter each element in the matrix"<<endl;
cout<<"Enter a1 :";
cin>>a1;
cout<<"Enter a2 :";
cin>>a2;
cout<<"Enter a3 :";
cin>>a3;
cout<<"Enter a4 :";
cin>>a4;
cout<<"you have been entered this matrix "<<endl;
 cout<<"|"<<a1<<"    "<<a2<<"|"<<endl;
 cout<<"|"<<a3<<"    "<<a4<<"|"<<endl;
 result_of_matrix = (a1 * a4 ) - (a2 * a3);
 cout<<"and the value of this matrix is : ("<<result_of_matrix<<")"<<endl;
}
//end function.
//this function to solve triple matrix.
void triple_matrix()
{   long double a11, a21 , a31 , a12 ,a22,a32,a13,a23,a33,result_of_matrix;
	cout<<"the triple matrix should be like this shape"<<endl;
    cout<<"|a11     a21    a31|"<<endl;
	cout<<"|a12     a22    a32|"<<endl;
	cout<<"|a13     a23    a33|"<<endl;
cout<<"so,please enter each element in the matrix"<<endl;
cout<<"Enter a11 :";
cin>>a11;
cout<<"Enter a21 :";
cin>>a21;
cout<<"Enter a31 :";
cin>>a31;
cout<<"Enter a12 :";
cin>>a12;
cout<<"Enter a22 :";
cin>>a22;
cout<<"Enter a32 :";
cin>>a32;
cout<<"Enter a13 :";
cin>>a13;
cout<<"Enter a23 :";
cin>>a23;
cout<<"Enter a33 :";
cin>>a33;
cout<<"you have been entered this matrix "<<endl;
 cout<<"|"<<a11<<"    "<<a21<<"   "<<a31<<"|"<<endl;
 cout<<"|"<<a12<<"    "<<a22<<"   "<<a32<<"|"<<endl;
 cout<<"|"<<a13<<"    "<<a23<<"   "<<a33<<"|"<<endl;
 result_of_matrix = a11 * ((a22 * a33) - (a32 * a23 )) - a21 * ((a12 * a33) - (a32 * a13)) + a31 * ((a12 * a23) - (a22 * a13));
 cout<<"and the value of this matrix is :"<<result_of_matrix<<endl;
}
//end function.
//this function to call matrix functions.
void matrix_department()
{ int matrix_choice;
 cout<<"Welcome to matrix department here you can solve two or three matrix systems."<<endl;
cout<<"please select the process that you want."<<endl;
cout<<"1- To solve 2 * 2 matrix."<<endl;
cout<<"2- To solve 3 * 3 matrix."<<endl;
cin>>matrix_choice;
if(matrix_choice == 1)
{
	dual_matrix();
}
else if(matrix_choice == 2)
{
	triple_matrix();
}
else 
	cout<<"Invalid input."<<endl;

}
//end of function.
//this part related to trigonometric functions and its inverse.
//we use in this algorithm Taylor series//
int COUNTER_OF_POWER;;
//this function to calculate even power or odd power to number as the function requirements. 
double even_or_odd_pow(double thita, double COUNTER_OF_POWER)
{
    double RESULT = 1;
    for (int j=0; j<COUNTER_OF_POWER; j++)
		RESULT *= thita;
	return RESULT;
}
//continue...this function to calculate the factorial 
double fact(double thita) 
{
    double factorial_value = 1;
    for (int i = 1; i<=thita; i++) 
        factorial_value *= i;
    return factorial_value;
}
//continue.....this function to calculate the sine function.
long double sine(double thita)
{
long double the_result = thita;
    double plus_or_negative = -1;
    for ( COUNTER_OF_POWER = 3 ; COUNTER_OF_POWER<=100; COUNTER_OF_POWER +=2)                                                         //start with 3 because the result equal to initial value of thita //AND the counter should increase by 2    it should be odd number
	{
	the_result +=plus_or_negative * (even_or_odd_pow(thita,COUNTER_OF_POWER)/fact(COUNTER_OF_POWER));
    plus_or_negative *= -1;
    }
    return the_result;
}
//continue.....this function to calculate the cosine function.
long double cosine(double x)
{
    long double y = 1;
    double plus_negative = -1;
    for (int counter=2; counter<=100; counter +=2) 
	{
		y+=plus_negative*(even_or_odd_pow(x,counter)/fact(counter));
        plus_negative *= -1;
    }  
    return y;
}
long double tangent(long double thita) 
{
	return (sin(thita)/cos(thita));  
}
long double secant(double thita )
{
return (1 / cos(thita));
}
long double cosecant(double thita)
{
return (1 / sin(thita));
}
long double cotan(double thita)
{
return (1 / tan(thita));
}
//end of function.
//this function to call trigonometrix functions.
void trigonometric_functions_department()
{
	long double thita , z;
	string choose;
	char ch;
	cout<<"Heloo to calculate trignometric functions "<<"\x2"<<"\x2"<<"\x2"<<endl;
	cout<<"kindly follow this in structions to calculate function that you want"<<endl;
	cout<<"choose"<<endl;
	cout<<"s  ========>  sine"<<endl;
	cout<<"c  ========>  cosine"<<endl;
	cout<<"t  ========>  tan"<<endl;
	cout<<"se ========>  secant"<<endl;
	cout<<"cs ========>  cosecant"<<endl;
	cout<<"co ========>  cosecant"<<endl;
	cin>>choose;
	if((choose == "s")||(choose == "S"))
	{
	cout<<"Enter thita in degrees:";
	cin>>thita;
	thita = (thita * PI ) / 180;//«·”ÿ— œÂ ⁄‘«‰ «·ÌÊ“— ÂÌœŒ· «·“«ÊÌÂ »«·—«œÌ«‰ Ê«‰« ÂÕÊ·Â« »«·œ—Ã« 
	z = (thita * 180 )/PI; //«·”ÿ— œÂ ﬂ· «Â„Ì Â «‰Ï «Õÿ «·ﬁÌ„Â «··Ï «·ÌÊ“— „œŒ·Â« ›Ï „ €Ì—  «‰Ï »ÕÌÀ ·„« «⁄„· ”Ï «Ê  Ì»ﬁÏ ﬂÊÌ” ›Ï «·‘ﬂ· 
		cout<<"sin("<<z<<") ="<<sine(thita)<<endl;
	}
	else if((choose == "c")||(choose == "C"))
	{
	cout<<"Enter thita in degrees:";
	cin>>thita;
	thita = (thita * PI ) / 180;
	z = (thita * 180 )/PI; 
		cout<<"cos("<<z<<") ="<<cosine(thita)<<endl;
	}
	else if((choose == "t")||(choose == "T"))
	{
	cout<<"Enter thita in degrees and remember that thita must not be equal to [ -n*"<<static_cast<unsigned char>(227)<<"/2 , n*"<<static_cast<unsigned char>(227)<<"/2 ]"<<endl;
	cin>>thita;
		thita = (thita * PI ) / 180;
	    z = (thita * 180 )/PI; 
		cout<<"tan("<<z<<") ="<<tangent(thita)<<endl;
	}
	else if((choose == "se")||(choose == "SE")||(choose == "sE")||(choose == "Se"))
	{
	cout<<"Enter thita in degrees and remember that thita must not be equal to [ -n*"<<static_cast<unsigned char>(227)<<"/2 , n*"<<static_cast<unsigned char>(227)<<"/2 ]"<<endl;
	cin>>thita;
	thita = (thita * PI ) / 180;
	z = (thita * 180 )/PI; 
		cout<<"sec("<<z<<") ="<<secant(thita)<<endl;
	}
	else if((choose == "cs")||(choose == "CS")||(choose == "cS")||(choose == "Cs"))
	{
	cout<<"Enter thita in degrees:";
	cin>>thita;
	thita = (thita * PI ) / 180;
	z = (thita * 180 )/PI; 
		cout<<"csc("<<z<<") ="<<cosecant(thita)<<endl;
	}
	else if((choose == "co")||(choose == "CO")||(choose == "Co")||(choose == "cO"))
	{
	cout<<"Enter thita in degrees:";
	cin>>thita;
	thita = (thita * PI ) / 180;
	z = (thita * 180 )/PI; 
	cout<<"cot("<<z<<") ="<<cotan(thita)<<endl;
	}
}
//end of function.
//this part related to inverse of trigonometric functions.
int counter_power;
//this function to calculate arcsine
long double sin_inverse(long double thita)
{ int i;
long double result = thita,in,nj,k,l ;
   for(counter_power = 3,i = 1 ; i<=10000,counter_power <= 10000; i++ , counter_power +=2)
   {
	   in =(2*i)-1;
	   nj = (2*i)+1;
	   k=2*i;
	   l=k*nj;
   result = result + ((even_or_odd_pow(thita , counter_power) * in/l));
   }
   return result ;
}
//end of function.
//this function to calculate arccosine.
long double cos_inverse(long double thita)
{ int i;
long double result = thita,in,nj,k,l,arc_cos ;
   for(counter_power = 3,i = 1 ; i<=10000,counter_power <= 10000; i++ , counter_power +=2)
   {
	   in =(2*i)-1 ;
	   nj = (2*i)+1;
	   k=2*i;
	   l=k*nj;
   result = result + ((even_or_odd_pow(thita , counter_power) * in/l));
   
   }
   arc_cos = (PI / 2 ) - result;
   return arc_cos ;
}
//end of function.
//this function to calculate arctan.
long double tan_inverse(double thita)
{	 
int COUNTER_OF_POWER;
long double the_result = thita;
 long int _2n = 3;                                                                            //Â‰««» œÌ‰« » ·« Â ⁄‘«‰ «’·« «·„›—Ê÷ «‰ «·ÀÌ « „ﬁ”Ê„Â ⁄·Ï Ê«Õœ Ì⁄‰Ï «·Õœ «··Ï »⁄œÌÂ ÂÌ»ﬁÏ „ﬁ”Ê„ ⁄·Ï 3 
    double plus_or_negative = -1;
    for ( COUNTER_OF_POWER=3 ; COUNTER_OF_POWER<=100; COUNTER_OF_POWER +=2)                   //start with 3 because the result equal to initial value of thita //AND the counter should increase by 2    it should be odd number
	{
		the_result +=plus_or_negative * (even_or_odd_pow (thita , COUNTER_OF_POWER)/(_2n));
        plus_or_negative *= -1;
		_2n += 2; 
    }  
	return the_result;
}
//end of function.
//this function to calculate arcsec.
long double  secant_inverse(long double thita)
{
	return (cos_inverse(1/thita));
}
//end of function.
//this function to calculate arccsc.
long double  cosecant_inverse(long double thita)
{
  return (sin_inverse(1/thita));
}
//end of function.
//this function to calculate arccot.
long double  cotnagent_inverse(long double thita)
{
  return (tan_inverse(1/thita));
}
//end of function.
//this function related to inverse trigonometric function.
void inverse_trigonometric_functions()
{
	long double thita;
	string choose;
	char ch;
	cout<<"Heloo to calculate inverse trignometric functions "<<"\x2"<<"\x2"<<"\x2"<<endl;
	cout<<"kindly follow this in structions to calculate function that you want"<<endl;
	cout<<"choose"<<endl;
	cout<<"as  ========>  sine inverse"<<endl;
	cout<<"ac  ========>  cosine inverse"<<endl;
	cout<<"at  ========>  tan inverse"<<endl;
	cout<<"ase ========>  secant inverse"<<endl;
	cout<<"acs ========>  cosecant inverse"<<endl;
	cout<<"aco ========>  cotangent inverse"<<endl;
	cin>>choose;
	if((choose == "as")||(choose == "AS")||(choose == "As")||(choose == "aS"))
	{
	    cout<<"Enter the inverse of thita must follow this limit of thita (-1<= x <=1) :";
	    cin>>thita;
	    if((thita < -1)||(thita > 1))
	    {
	      cout<<"Math error thita must be from -1 => 1"<<endl;
	    }
	   else
	   {
		 cout<<"sin^-1("<<thita<<") ="<<sin_inverse(thita)<<endl;
	   }
	}
	else if((choose == "ac")||(choose == "AC")||(choose == "Ac")||(choose == "aC"))
	{
	  cout<<"Enter the inverse of thita must follow this limit of thita (-1<= x <=1) :";
	  cin>>thita;
	   if((thita < -1)||(thita > 1))
	    {
	      cout<<"Math error thita must be from -1 => 1"<<endl;
	    }
	   else  
	   {cout<<"cos^-1("<<thita<<") ="<<cos_inverse(thita)<<endl;}
	}
	else if((choose == "at")||(choose == "AT")||(choose == "At")||(choose == "aT"))
	{
	cout<<"Enter the inverse of thita must be from -1 to 1:";// Â‰« „Õœœ‰«‘ «··Ì„Ì  ··“«ÌÂ ·«‰ ·Ì„Ì  «· «‰ «‰›—” „›ÌÂÊ‘ ÕœÊœ 
	cin>>thita;
	if((thita >= -1)&&(thita <= 1))
	  {
		cout<<"tan^-1("<<thita<<") ="<<tan_inverse(thita)<<endl;
	  }
	else
		cout<<"thita must be from -1 to 1"<<endl;
	}
	else if((choose == "ase")||(choose == "ASE")||(choose == "AsE")||(choose == "ASe"))
	{
	cout<<"Enter inverse of thita :";
	cin>>thita;
		cout<<"sec^-1("<<thita<<") ="<<secant_inverse(thita)<<endl;
	}
	else if((choose == "acs")||(choose == "aCS")||(choose == "acS")||(choose == "aCs"))
	{
	cout<<"Enter inverse of thita:";
	cin>>thita; 
		cout<<"csc^-1("<<thita<<") ="<<cosecant_inverse(thita)<<endl;
	}
	else if((choose == "aco")||(choose == "aCO")||(choose == "aCo")||(choose == "acO"))
	{
	cout<<"Enter inverse of thita :";
	cin>>thita;
	cout<<"cot^-1("<<thita<<") ="<<cotnagent_inverse(thita)<<endl;
	}
}
//end of function.
//this part related to complex numbers and convert from shape to another and sum,subtract,multiply,division.
void complex()
{   int choice1,choice2,choice3,choice4;
long double real_number1 , real_number2 , imaginary_number1 , imaginary_number2,real_result , imaginary_result, conjugate; //«·⁄œœ «·„—«›ﬁ
long double r_polar_form , thita1 , r1 , r2 , thita2,result_of_r, sum_cos_thitas  ,  sum_sin_thitas,value_cos , value_sin;
long double R1 , R2 , THITA1 , THITA2, result_of_R , value_of_THITAS;
    cout<<"Welcome to complex number department."<<endl;
	cout<<"here you can enter two complex numbers and make some mathematical equations like sum,divide .... etc."<<endl;
	cout<<"Which form that you want to use it to enter the complex number "<<endl;
	cout<<"1- rectangular form like a + b * i"<<endl;
	cout<<"2- polar form like r[cos(x) + i * sin(x)]"<<endl;
	cout<<"3- euler form like r[e^thita * i]"<<endl;
	cout<<"please enter your choice "<<endl;
	cin>>choice1;
if(choice1 == 1)
{
  cout<<"you choose the rectangular form."<<endl;
  cout<<"remember that the rectangular form is a + b * i"<<endl;
  cout<<"please enter the real part to the first number :";
  cin>>real_number1;
  cout<<"please enter the imaginary part to the first number :";
  cin>>imaginary_number1;
  cout<<"please enter the real part to the second number :";
  cin>>real_number2;
  cout<<"please enter the imaginary part to the second number :";
  cin>>imaginary_number2;
  cout<<"The two numbers that you enterd them ."<<endl;
  cout<<real_number1<<"+"<<imaginary_number1<<"*i"<<endl;
  cout<<real_number2<<"+"<<imaginary_number2<<"*i"<<endl;cout<<endl;
  cout<<"What the process that you want"<<endl;
  cout<<"1- sum of them."<<endl;
  cout<<"2- subtract."<<endl;
  cout<<"3- multiply them."<<endl;
  cout<<"4- divide them."<<endl;
  cin>>choice2;
  if(choice2 == 1)
  {
	  real_result=real_number1 + real_number2;
      imaginary_result=imaginary_number1 + imaginary_number2;
	  cout<<"sum = "<<real_result<<"+"<<imaginary_result<<"*i"<<endl;
  }
  else if(choice2 == 2)
  {
      real_result=real_number1 - real_number2;
      imaginary_result=imaginary_number1 - imaginary_number2;  
	  cout<<"subtract = "<<real_result<<"-"<<imaginary_result<<"*i"<<endl;
  
  }
  else if(choice2 == 3)
  {
	  real_result = ((real_number1 * real_number2 ) - (imaginary_number1 * imaginary_number2));
	  imaginary_result = ((real_number1 * imaginary_number2 )+(real_number2 * imaginary_number1));
	  cout<<"multiply = "<<real_result<<"+"<<imaginary_result<<"* i "<<endl; 
  }
  else if(choice2 == 4)
  {
	  conjugate = (real_number2 * real_number2 ) + (imaginary_number2 * imaginary_number2);
	  real_result = (real_number1 * real_number2 ) + (imaginary_number1 * imaginary_number2 )  ;
	  long double the_final_real_result = real_result / conjugate;
	  imaginary_result = (real_number2 * imaginary_number1) - (real_number1 * imaginary_number2);
      long double	  the_final_imaginary_result = imaginary_result / conjugate;
	  cout<<"divide = "<<the_final_real_result<<"+"<<the_final_imaginary_result<<"*i"<<endl;
  }
  else
	  cout<<"you should choose from 1 to 4 "<<endl;
}
else if(choice1 == 2)
{
 cout<<"you choose the polar form."<<endl;
 cout<<"remember that the shape to this form is."<<endl;
 cout<<"r[cos(x) + sin(x) * i]"<<endl;
 cout<<"Enter r1 :";
 cin>>r1;
 cout<<"Enter thita 1 must in radians :";
 cin>>thita1;
 cout<<"Enter r2 :";
 cin>>r2;
 cout<<"Enter thita 2 must in radians :";
 cin>>thita2;
 cout<<"so,you eneterd this two numbers."<<endl;
 cout<<r1<<"[cos("<<thita1<<") + sin("<<thita1<<") * i ]"<<endl;
 cout<<r2<<"[cos("<<thita2<<") + sin("<<thita2<<") * i ]"<<endl;
 cout<<"What the process that you want"<<endl;
  cout<<"1- multiply them."<<endl;
  cout<<"2- divide them."<<endl;
  cin>>choice3;
  if(choice3 == 1)
  {
	  result_of_r = r1 * r2 ;
	  sum_cos_thitas = thita1 + thita2;
	  sum_sin_thitas = thita1 + thita2 ;
	  value_cos = cosine(sum_cos_thitas);
	  value_sin = sine(sum_sin_thitas);
	  cout<<"multiply = "<<result_of_r<<"[ "<<value_cos<<"+"<<value_sin<<" * i ]"<<endl;
  }
  else if(choice3 == 2)
  {
   result_of_r = r1 / r2 ;
	  sum_cos_thitas = thita1 - thita2;
	  sum_sin_thitas = thita1 - thita2 ;
	  value_cos = cosine(sum_cos_thitas);
	  value_sin = sine(sum_sin_thitas);
	  cout<<"divide = "<<result_of_r<<"["<<value_cos<<"+"<<value_sin<<" * i]"<<endl;
  }
}
else if(choice1 == 3)
{
 cout<<"you choose euler form."<<endl;
 cout<<"remember that shape of euler form is r[e^thita*i]"<<endl;
 cout<<"Enter R1 :";
 cin>>R1;
 cout<<"Enter thita1 :";
 cin>>THITA1;
 cout<<"Enter thita2 :";
 cin>>THITA2;
 cout<<"the two shapes that you entered."<<endl;
 cout<<R1<<"* [ e^"<<THITA1<<"* i"<<endl;
 cout<<R2<<"* [ e^"<<THITA2<<"* i"<<endl;
 cout<<"What the process that you want"<<endl;
  cout<<"1- multiply them."<<endl;
  cout<<"2- divide them."<<endl;
  cin>>choice4;
  if(choice4 == 1)
  {
	  result_of_R = R1 * R2;
	  value_of_THITAS = THITA1 + THITA2 ; 
	  cout<<"multiply = "<<result_of_R <<"* [ e^"<<value_of_THITAS <<"* i"<<endl;
  }
  else if(choice4 == 2)
  {
   result_of_R = R1 / R2;
	  value_of_THITAS = THITA1 - THITA2 ; 
	  cout<<"division = "<<result_of_R <<"* [ e^"<<value_of_THITAS <<"* i"<<endl;
  }
}
}
//end of function.
int main()
{ int choice_main;
 char choose = 'y';
 do
 {
	cout<<"Heloo to my scientific calculator "<<"\x2"<<"\x1"<<"\x2"<<"\x1"<<"\x2"<<"\x1"<<"\x2"<<"\x1"<<"\x2"<<"\x1"<<endl;
	cout<<"please choose the number of process that you to calculate it "<<"\x1"<<"\x2"<<"\x1"<<"\x2"<<"\x1"<<"\x2"<<"\x1"<<"\x2"<<"\x1"<<"\x2"<<"\x1"<<"\x2"<<endl;
	cout<<"1- To calculate mathematical equations like (a+b-c/d*f)."<<endl;
	cout<<"2- To determine number that even or odd."<<endl;
	cout<<"3- To calculate the factorial to number. "<<endl;
	cout<<"4- To determine the number prime or not prime."<<endl;
	cout<<"5- To calculate any integer root to any number."<<endl;
	cout<<"6- To calculate the power to any number."<<endl;
	cout<<"7- Enter to equation department."<<endl;
	cout<<"8- Enter to inequalities department."<<endl;
	cout<<"9- Enter to converting department."<<endl;
	cout<<"10- Enter to solving matrix department."<<endl;
	cout<<"11- Enter to trigonometric function departmant. "<<endl;
	cout<<"12- Enter to inverse trigonometric function department."<<endl;
	cout<<"13- Enter to complex department."<<endl<<endl<<endl<<endl<<endl;
	cout << "      >> enter you choice : ";
	cin>>choice_main;
	if(choice_main == 1)
	{
		long double the_result;
		string mathematical_equations,  //this string to take all equation from user 
			num[100];//«·«” —Ì‰Ã œÏ «··Ï » Ê÷⁄ «·«—ﬁ«„ ›ÌÂ« ·ﬂ‰Â« ·„  ÕÊ· «·Ï «‰ Ã— ·”Â ‘«—
		cout<<"Enter the mathematical equations like (a + b / c *d) .....etc"<<endl;
		cout >> ">> ";
		cin>>mathematical_equations;
	 int counter1; // this counter to count marks in equation;
		 int counter2; // this counter to count number in equation;
		 int number_that_result_by_convert_from_string_to_integer;
	 char *mark=new char [100]; //this dinamic array to save the marks in it
	 float *num2=new float [100]; //œ«Ì‰«„ﬂ «—«Ï ·Õ›Ÿ «·—ﬁ„ «··Ï ÂÊ »⁄œ «· ÕÊÌ· ·«‰ Ã— 
	 equation(mathematical_equations,mark,counter1,counter2,num,number_that_result_by_convert_from_string_to_integer,num2);
		 the_result=num2[counter2];//Â‰« Œ·Ì‰« «·‰« Ã »ﬁÌ„Â «» œ«∆ÌÂ »«Œ— Õ«ÃÂ ›Ï «·«” —Ì‰Ã ⁄‘«‰ ‰» œÏ „‰ «·«Œ— ··«Ê· 
	 for (int i=counter2;i>=0;i--)//Â‰« «» œÌ‰« »«·ﬂ«Ê‰ — ⁄‘«‰ ‰» œÏ „‰ «·«Œ— ··«Ê· “Ï «·„ÿ·Ê»
	 {
		if(mark[counter1-1]=='/')
			the_result=num2[i-1]/the_result;
		else if (mark[counter1-1]=='*')
			the_result=num2[i-1]*the_result;
		else if (mark[counter1-1]=='-')
			the_result=num2[i-1]-the_result;
		else if (mark[counter1-1]=='+')
			the_result=num2[i-1]+the_result;	
		counter1--;
	}
	cout<<the_result<<endl;
	}
	else if(choice_main == 2)
	{
		Even_or_Odd_number();
	}
	else if(choice_main == 3)
	{
		calculate_factorial();
	}
	else if(choice_main == 4)
	{
		prime_numbers();
	}
	else if(choice_main == 5)
	{
		calling_any_root_function();
	}
	else if(choice_main == 6)
	{
		calling_puplic_power_function();
	}
	else if(choice_main == 7)
	{
		part_equations();
	}
	else if(choice_main == 8)
	{
		inequalities_department();
	}
	else if(choice_main == 9)
	{
		converting_department();
	}
	else if(choice_main == 10)
	{
		matrix_department();
	}
	else if(choice_main ==11)
	{
		trigonometric_functions_department();
	}
	else if(choice_main == 12)
	{
		inverse_trigonometric_functions();
	}
	else if(choice_main == 13)
	{
	 complex();
	}
	else
	{
		cout<<"Unfounded process."<<endl;
	}
	cout<<"do any of these process else. press y to continue."<<endl;
	cin>>choose;
 }while(choose == 'y');
 cout<<"Thanks to use my calculator and see you soon"<<"\x2"<<"\x2"<<"\x2"<<"\x2"<<"\x2"<<endl;
}
    

