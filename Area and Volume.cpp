#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int choice;
    lb:
    {
        cout<<"\n 1. Area of plane shapes\n 2. Volume of solid shapes";
        cout<<"\n\n Enter your choice:";
        cin>>choice;
        system("cls");
    }
    if(choice==1)
    {
     {
        cout<<"\n 1. Square\n 2. Triangle\n 3. Circle\n 4. Rhombus\n 5. Parallelogram\n 6. Rectangle\n 7. Trapezoid";
        cout<<"\n\n Enter your choice:";
        cin>>choice;
        system("cls");
     }
        if(choice==1)
            {
             int A,s;
             cout<<"Enter side:";
             cin>>s;
                {
                A=s*s;
                cout<<"\n\nArea of square is\n\n"<<A;
                cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
                }
             goto lb;
            }

        if(choice==2)
            {
             float A,a,b,o,t;
             cout<<"\n\ Enter length a: ";
             cin>>a;
             cout<<"\n\n Enter length b: ";
             cin>>b;
             cout<<"\n\n Enter angle o: ";
             cin>>o;
                {
                t=(o*0.017453292);
                A=0.5*a*b*sin(t);
                cout<<"\n\n Area of triangle is:"<<A;
                cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
                }
            goto lb;
            }

        if(choice==3)
            {
            float A,r,pi;
            cout<<"\n Enter radius: ";
            cin>>r;
                {
                pi=3.142857;
                A=pi*r*r;
                cout<<"\n\n Area of circle is"<<A;
                cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
                }
            goto lb;
            }

        if(choice==4)
            {
            float A,b,h;
            cout<<"\n Enter base length:";
            cin>>b;
            cout<<"\n\n Enter height:";
            cin>>h;
                {
                A=b*h;
                cout<<"\n\n Area of the Rhombus is "<<A;
                cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
                }
            goto lb;
            }

        if(choice==5)
            {
            float A,b,h;
            cout<<"\n Enter base length:";
            cin>>b;
            cout<<"\n\n Enter height:";
            cin>>h;
                {
                A=b*h;
                cout<<"\n\n Area of parallelogram is"<<A;
                cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
                }
            goto lb;
            }

        if(choice==6)
            {
            float a,b,A;
            cout<<"\n Enter length a:";
            cin>>a;
            cout<<"\n\n Enter length b:";
            cin>>b;
                {
                A=a*b;
                cout<<"\n\n Area of rectangle is"<<A;
                cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
                }
            goto lb;
            }

        if(choice==7)
            {
            float B,b,h,A;
            cout<<"\n Enter length B:";
            cin>>B;
            cout<<"\n\n Enter length b:";
            cin>>b;
            cout<<"\n\n Enter height:";
            cin>>h;
                {
                A=0.5*(B+b)*h;
                cout<<"\n\n Area of Trapezoid is"<<A;
                cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
                }
            goto lb;
            }
    }


    if(choice==2)
    {
     {
        cout<<"\n 1. Cube\n 2. Cuboid\n 3. Sphere\n 4. Right circular cylinder\n 5. Right circular cone";
        cout<<"\n\n Enter your choice:";
        cin>>choice;
        system("cls");
     }
        if(choice==1)
        {
        float V,s;
        cout<<"\n Enter side length:";
        cin>>s;
            {
            V=s*s*s;
            cout<<"\n\n Volume of the cube is"<<V;
            cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
            }
        goto lb;
        }

        if(choice==2)
        {
        float V,l,w,h;
        cout<<"\n Enter length:";
        cin>>l;
        cout<<"\n\n Enter width:";
        cin>>w;
        cout<<"\n\n Enter height:";
        cin>>h;
            {
            V=l*w*h;
            cout<<"\n\n Volume of cuboid is"<<V;
            cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
            }
        goto lb;
        }

        if(choice==3)
        {
        float pi,r,V,n;
        cout<<"\n Enter radius:";
        cin>>r;
            {
            n=1.3333333333;
            pi=3.142857;
            V=n*pi*r*r*r;
            cout<<"\n\n Volume of sphere is"<<V;
            cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
            }
        goto lb;
        }

        if(choice==4)
        {
        float pi,r,V,h;
        cout<<"\n Enter radius:";
        cin>>r;
        cout<<"\n\n Enter height:";
        cin>>h;
            {
            pi=3.142857143;
            V=pi*r*r*h;
            cout<<"\n\n Volume of Cylinder is"<<V;
            cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
            }
        goto lb;
        }

        if(choice==5)
        {
        float n,r,pi,h,V;
        cout<<"\n Enter radius:";
        cin>>r;
        cout<<"\n\n Enter height:";
        cin>>h;
            {
            pi=3.14285714;
            n=0.333333333;
            V=n*pi*r*r*h;
            cout<<"\n\n Volume of Cone is"<<V;
            cout<<"\n\n THANK YOU FOR USING THE PROGRAM\n\n";
            }
        goto lb;
        }
       }
    }

