#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>

using namespace std;

 double deg2rad(double deg)
 {

     return (deg/180)*M_PI;

 }


double rad2deg(double rad)
 {

     return (rad/M_PI)*180;

 }
double findXComponent(double lengthX1,double lengthX2,double rad1,double rad2)
{
    return (lengthX1*cos(rad1))+(lengthX2*cos(rad2));

}

double findYComponent(double lengthY1,double lengthY2,double rad1,double rad2)
{
    return (lengthY1*sin(rad1))+(lengthY2*sin(rad2));

}

double pythagoras(double xcomp,double ycomp)
{
    return sqrt(pow(xcomp,2)+pow(ycomp,2));
   
}
void showResult(double result_vec_length,double result_vec_direction)
{
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"Length of the resultant vector = "<<result_vec_length<<endl;
    cout<<"Direction of the resultant vector (deg) = "<<result_vec_direction<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

}




int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
