//Assignment 1

//Question 1
// #include<iostream>
// using namespace std;
// int main(){
//     int first;
//     cout<<"enter the 1st number : ";
//     cin>>first;
//     int second;
//     cout<<"enter the 2st number : ";
//     cin>>second;
//     if(first>second) cout<<"first is greatest";
//     else if(first<second) cout<<"second is greatest";
//     if(first==second) cout<<"both the number are equal";
// }

//Question 2
// #include<iostream>
// using namespace std;
// int main(){
//     float radius;
//     cout<<"enter the radius : ";
//     cin>>radius;
//     float pii=3.1415;
//     float area=pii*radius*radius;
//     float circumfrance=2*pii*radius;
//     cout<<"your area is : "<<area<<endl;
//     cout<<"your circumfrance is : "<<circumfrance<<endl;
//     if(area>circumfrance) cout<<"area is more than the circumfrance";
//     if(area<circumfrance) cout<<"circumfrance is more than the area";
//     if(area==circumfrance) cout<<"area and circumfrance are same";
// }

//Question 3
// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"enter the year : ";
//     cin>>year;
//     if(year%400==0) cout<<"it is a leap year";
//     else if(year%100==0) cout<<"it is not a leap year";
//     else if(year%4==0) cout<<"it is a leap year";
//     else cout<<"it is not a leap year";
// }

//Question 4
// #include<iostream>
// using namespace std;
// int main(){
//     int length;
//     cout<<"enter the length : ";
//     cin>>length;
//     int bredth;
//     cout<<"enter the bredth : ";
//     cin>>bredth;
//     float perimeter=(length+bredth)*2;
//     float area=length*bredth;
//     if(perimeter>area) cout<<"perimeter is more than the area";
//     else if(perimeter<area) cout<<"area is more than the perimeter";
//     else cout<<"both are same";
// }

//Question 5
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter 1st sides of a triangle : ";
//     cin>>a;
//     cout<<"enter 2nd sides of a triangle : ";
//     cin>>b;
//     cout<<"enter 3rd sides of a triangle : ";
//     cin>>c;
//     if(a==b && b==c ) cout<<"this is a equilateral triangle";
//     else if(a!=b && b!=c ) cout<<"this is a scalene triangle";
//     else cout<<"this is a isosceles triangle";
// }

//Question 6
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter marks of A : ";
//     cin>>a;
//     cout<<"enter marks of B : ";
//     cin>>b;
//     cout<<"enter marks of C : ";
//     cin>>c;
//     if(a>=b && b>=c) cout<<"C has least marks";
//     else if(a>=b && b<=c) cout<<"B has least marks";
//     else cout<<"A has least marks";
// }

//Question 7
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"enter x origin value : ";
//     cin>>x;
//     cout<<"enter y origin value : ";
//     cin>>y;
//     if(x==0 && y==0) cout<<"point is at origin";
//     else if(x==0 && y!=0) cout<<"point is at y-axis";
//     else if(y==0 && x!=0) cout<<"point is at x-axis";
//     else cout<<"point is in plane";
// }

//Question 8
// #include<iostream>
// using namespace std;
// int main(){
//     int x1,y1,x2,y2,x3,y3;
//     cout<<"enter 1st point value : ";
//     cin>>x1>>y1;
//     cout<<"enter 2nd point value : ";
//     cin>>x2>>y2;
//     cout<<"enter 3rd point value : ";
//     cin>>x3>>y3;
//     int m1=(y2-y1)/(x2-x1);
//     int m2=(y3-y2)/(x3-x2);
//     if(m1==m2) cout<<"all point lie in a straight line";
//     else cout<<" all point not lie in a straight line ";
// }

//Question 9
// #include<iostream>
// using namespace std;
// int main(){
//     char x;
//     cout<<"enter the character : ";
//     cin>>x;
//     if(x>=65 && x<=90 || (x>=97 && x<=122)) cout<<"it is a alphabat";
//     else if(x>='0' && x<='9') cout<<"it is a digit";
//     else cout<<"it is a special character";
// }

//Question 9
//value of b and c are respectively 300 and 200