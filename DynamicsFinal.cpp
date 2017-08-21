#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#define PI 3.14159265
using namespace std; 
//Ballistic pendulum calculator
//input values given in a problem, values not given mark with 'N'.
//A single value marked 'D' will be the desired outcome the progeram will calculate for.  
//If enough information is provided to solve, an answer will be given
//If enough information is not provided to solve, It will not provide an answer. 

string vbullet;
double vb;
string vimpact;
double vi;
string theta;
double degrees;
string mpendulum;
double mp;
string mbullet;
double mb;
string lengthpendulum;
double length;
string xfpendulum;
double xfp;
string yfpendulum;
double yfp;

void vbullet1 ()
{
 
double vb=(mb+mp)/(mb)*sqrt(2*9.81*(length-length*cos(degrees*PI/180)));
cout << "The velocity of the bullet before impact is: " << vb << endl;
}
void vimpact1()
{
double vi=sqrt(2*9.81*(length-length*cos(degrees*PI/180)));
cout << "The velocity of the bullet and pendulum immediately after impact is: " << vi << endl;

}
void mpendulum1()
{
double mp = mb* (vb/(sqrt(2*9.81*(length-length*cos(degrees*PI/180)))));
cout << "The mass of the pendulum is: " << mp << endl; 
}
void mbullet1()
{
double mb = (1/(vb/(sqrt(2*9.81*(length-length*cos(degrees*PI/180))))-1)*mp) ;
cout << "The mass of the bullet is: " <<mb << endl; 
}
void lengthpendulum1()
{
double length = pow(vb*mb/(mb+mp),2.0)/(2*9.81*(1-cos(degrees*PI/180)));
cout << "The length of the pendulum is: " << length << endl;  
}
//functions if given y displacement and/or x displacement
void vbullet2 ()
{
double vb=(mb+mp)/(mb)*sqrt(2*9.81*(yfp));
cout << "The velocity of the bullet before impact is: " << vb << endl;	
}
void vimpact2()
{
double vi=sqrt(2*9.81*(yfp));
cout << "The velocity of the bullet and pendulum immediately after impact is: " << vi << endl;
}
void mpendulum2()
{
double mp = mb* (vb/(sqrt(2*9.81*(yfp))));
cout << "The mass of the pendulum is: " << mp << endl; 
}
void mbullet2()
{
double mb = (1/(vb/(sqrt(2*9.81*(yfp)))-1)*mp) ;
cout << "The mass of the bullet is: " <<mb << endl; 
}
void lengthpendulum2()
{
double length = sqrt(pow(xfp,2.0)+pow(yfp,2.0));
cout << "The length of the pendulum is: " << length << endl; 
}
void lengthpendulum3 ()
{
double length=xfp/sin(degrees*PI/180);
cout << "The length of the pendulum is: " << length << endl; 
}
void lengthpendulum4 ()
{
double length=yfp/cos(degrees*PI/180);
cout << "The length of the pendulum is: " << length << endl; 
}
void vbullet3 ()
{
double vb=(mb+mp)/(mb)*sqrt(2*9.81*(xfp/sin(degrees*PI/180)-xfp/sin(degrees*PI/180)*cos(degrees*PI/180)));
cout << "The velocity of the bullet before impact is: " << vb << endl;
}
void vimpact3()
{
double vi = sqrt(2*9.81*(xfp/sin(degrees*PI/180)-xfp/sin(degrees*PI/180)*cos(degrees*PI/180)));
cout << "The velocity of the bullet and pendulum immediately after impact is: " << vi << endl;
}
void mpendulum3 ()
{
double mp = mb* (vb/(sqrt(2*9.81*(xfp/sin(degrees*PI/180)-xfp/sin(degrees*PI/180)*cos(degrees*PI/180)))));
cout << "The mass of the pendulum is: " << mp << endl; 
}
void mbullet3 ()
{
double mb = (1/(vb/(sqrt(2*9.81*(xfp/sin(degrees*PI/180)-xfp/sin(degrees*PI/180)*cos(degrees*PI/180))))-1)*mp) ;
cout << "The mass of the bullet is: " <<mb << endl; 
}
void lengthpendulum5()
{
double length=pow(vi,2.0)/(2*9.81*(1-cos(degrees*PI/180)));
cout << "The length of the pendulum is: " << length << endl;
}
void yfpendulum1()
{
double yfp=length*cos(degrees*PI/180);
cout << "The y displacement of the pendulum is: " << yfp << endl;
}
void yfpendulum2()
{
double yfp=pow(vi,2)/(2*9.81);
cout << "The y displacement of the pendulum is: " << yfp << endl;
}
void yfpendulum3()
{
double yfp=pow(((vb*mb)/(mb+mp)),2.0)/(2*9.81);
cout << "The y displacement of the pendulum is: " << yfp << endl;
}
void xfpendulum1()
{
double xfp=length*sin(degrees*PI/180);
cout << "The x displacement of the pendulum is: " << xfp << endl;
}
void xfpendulum2()
{
double xfp=pow(vi,2.0)*sin(degrees*PI/180)/(2*9.81*(1-cos(degrees*PI/180)));
cout << "The x displacement of the pendulum is: " << xfp << endl;
}
void xfpendulum3()
{
double xfp=pow(((vb*mb)/(mb+mp)),2.0)*sin(degrees*PI/180)/(2*9.81*(1-cos(degrees*PI/180)));
cout << "The x displacement of the pendulum is: " << xfp << endl;
}
int main() {

	//Introduction to program
	
	cout << "This is a program that will calculate the value of a specified variable in a ballistic pendulum problem.\n\n"; 
	cout << "For each input, specify either the value of the variable, 'N' if it is not specified, or \n 'D' if it is the desired variable in the problem. \n\n";
	
	{//INPUTS DIALOG 
	cout << "Enter the velocity of the bullet (in m/s)before impact: ";
	cin >> vbullet;
	cout << endl << "The velocity of the bullet entered was " << vbullet << " m/s.\n\nEnter the velocity of the bullet and the pendulum together immediately after impact: ";
	cin >> vimpact;
	cout << "\n The velocity after impact entered was " << vimpact << " m/s. \n\nEnter the angle (in degrees) of the pendulum when it stops after impact: ";
	cin >> theta; 
	cout << "\n The angle entered was " << theta << " degrees.\n\nEnter the mass of the pendulum (in kilograms): ";
	cin >> mpendulum; 
	cout << "\n The pendulum mass entered was " << mpendulum << " kg.\n\nEnter the mass of the bullet (in kilograms): ";
	cin >> mbullet; 
	cout << "\n The bullet mass entered was " << mbullet << " kg\n\nEnter the length of the pendulum (in meters): ";
	cin >> lengthpendulum; 
	cout << "\n The pendulum length entered was " << lengthpendulum << " m.\n\nEnter the x displacement of the pendulum (in meters): ";
	cin >> xfpendulum; 
	cout << "\nThe x displacement entered was " << xfpendulum << " m.\n\nEnter the y displacement of the pendulum (in meters): ";
	cin >> yfpendulum;
	cout << "\nThe y displacement entered was " << yfpendulum << " m." <<endl<<endl; 
	}
	
	
	//given lengthpendulum, theta, mbullet, mpendulum, desired vbullet
	
	//functions if given length, theta

	//conditions based on input
	if ((vbullet=="D") && (lengthpendulum!="N") && (theta !="N") && (mbullet!="N" )&& (mpendulum!="N"))	
	{
	length = stod (lengthpendulum);
	degrees = stod (theta);
	mb = stod (mbullet);
	mp = stod (mpendulum);
	vbullet1() ;
	}
	else if ((vimpact=="D")&&(lengthpendulum!="N")&&(theta!="N"))
	{
	length = stod (lengthpendulum);
	degrees = stod (theta);
	vimpact1();
	}
	else if ((vbullet != "N")&& (lengthpendulum!="N")&&(theta !="N" )&& (mbullet!="N" )&& (mpendulum =="D"))	
	{
	vb = stod (vbullet);
	length = stod(lengthpendulum);
	degrees = stod(theta);
	mb = stod(mbullet);
	
	mpendulum1() ;  
	}
	else if ((vbullet != "N") && (lengthpendulum!="N") &&(theta !="N") && (mbullet =="D" )&& (mpendulum !="N"))
	{
	vb = stod (vbullet);
	length = stod(lengthpendulum);
	degrees = stod(theta);
	mp = stod (mpendulum);
	
	mbullet1() ;
	}
	else if ((vbullet != "N") && (lengthpendulum == "D")&&(theta !="N") && (mbullet!="N") && (mpendulum !="N"))	
	{
	vb = stod (vbullet);
	degrees = stod(theta);
	mb = stod(mbullet);
	mp = stod (mpendulum);
	
	lengthpendulum1(); 
	}
	//if conditions include x or y displacement
	else if ((vbullet=="D") && (yfpendulum != "N") && (mbullet!="N")&&(mpendulum!="N"))
	{
	yfp=stod(yfpendulum);
	mb=stod(mbullet);
	mp=stod(mpendulum);
	vbullet2();
	}
	else if ((vimpact=="D")&&(yfpendulum!="N"))
	{
	yfp=stod(yfpendulum);
	vimpact2();
	}
	else if ((vbullet != "N") && (yfpendulum !="N") && (mbullet !="N")&& (mpendulum=="D"))
	{
	vb=stod(vbullet);
	yfp=stod(yfpendulum);
	mb=stod(mbullet);
	mpendulum2();
	}
	else if ((vbullet != "N")&& (yfpendulum !="N")&&(mbullet=="D")&&(mpendulum!="N"))
	{
	vb=stod(vbullet);
	yfp=stod(yfpendulum);
	mp=stod(mpendulum);
	mbullet2();
	}
	else if ((lengthpendulum=="D")&&(xfpendulum!="N")&&(yfpendulum!="N"))
	{
	xfp=stod(xfpendulum);
	yfp=stod(yfpendulum);
	lengthpendulum2();
	}
	else if ((lengthpendulum=="D") &&(xfpendulum!="N")&&(theta!="N"))
	{
	degrees=stod(theta);
	xfp=stod(xfpendulum);
	lengthpendulum3();
	}
	else if ((lengthpendulum=="D")&&(yfpendulum!="N")&&(theta!="N"))
	{
	degrees=stod(theta);
	yfp=stod(yfpendulum);
	lengthpendulum4();
	}
	else if ((vbullet=="D")&& (xfpendulum!="N")&&(theta!="N")&&(mbullet!="N")&&(mpendulum!="N"))
	{
	xfp = stod (xfpendulum);
	degrees = stod (theta);
	mb = stod (mbullet);
	mp = stod (mpendulum);
	vbullet3() ;
	}
	else if ((vimpact=="D")&&(xfpendulum!="N")&&(theta!="N"))
	{
	xfp=stod(xfpendulum);
	degrees=stod(theta);
	vimpact3();
	}
	else if ((vbullet!="N")&& (xfpendulum!="N")&&(theta!="N")&&(mbullet!="N")&&(mpendulum=="D"))
	{
	vb = stod (vbullet);
	xfp = stod(xfpendulum);
	degrees = stod(theta);
	mb = stod(mbullet);
	
	mpendulum3() ;
	}
	else if ((vbullet!="N")&& (xfpendulum!="N")&&(theta!="N")&&(mbullet=="D")&&(mpendulum!="N"))
	{
	vb = stod (vbullet);
	xfp = stod(xfpendulum);
	degrees = stod(theta);
	mp = stod (mpendulum);
	
	mbullet3() ;
	}
	else if ((lengthpendulum=="D")&&(vimpact!="N")&&(theta!="N"))
	{
	vi=stod(vimpact);
	degrees=stod(theta);
	lengthpendulum5();	
	}
	else if ((yfpendulum=="D")&&(lengthpendulum!="N")&&(theta!="N"))
	{
	length=stod(lengthpendulum);
	degrees=stod(theta);
	yfpendulum1();
	}
	else if ((yfpendulum=="D")&&(vimpact!="N"))
	{
	vi=stod(vimpact);
	yfpendulum2();
	}	
	else if ((yfpendulum=="D")&&(vbullet!="N")&&(mbullet!="N")&&(mpendulum!="N"))
	{
	vb=stod(vbullet);
	mb=stod(mbullet);
	mp=stod(mpendulum);
	yfpendulum3();
	}
	else if ((xfpendulum=="D")&&(lengthpendulum!="N")&&(theta!="N"))
	{
	length=stod(lengthpendulum);
	degrees=stod(theta);
	xfpendulum1();
	}
	else if ((xfpendulum=="D")&&(vimpact!="N")&&(theta!="N"))
	{
	vi=stod(vimpact);
	degrees=stod(theta);
	xfpendulum2();
	}
	else if ((xfpendulum=="D")&&(vbullet!="N")&&(mpendulum!="N")&&(theta!="N"))
	{
	vb=stod(vbullet);
	mp=stod(mpendulum);
	degrees=stod(theta);
	xfpendulum3();
	}	
	else if ((vbullet=="N")&& (xfpendulum=="N")&&(theta=="N")&&(mbullet=="N")&&(mpendulum=="N")&&(xfpendulum=="N")&&(yfpendulum=="N")&&(vimpact=="N"))
	{
		cout << "So I guess there is no problem here?";
	}
	else if ((vbullet=="D")&& (xfpendulum=="D")&&(theta=="D")&&(mbullet=="D")&&(mpendulum=="D")&&(xfpendulum=="D")&&(yfpendulum=="D")&&(vimpact=="D"))
	{
		cout << "???? Maybe you are using the wrong calculator?";
	}
	else {
		cout << "Invalid inputs";
	}
	return 0; 
}
