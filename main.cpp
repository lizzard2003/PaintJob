#include <iostream>

int main() {

    double rooms,sqFt,paint_cost;
    double gallonOFpaint,laborHours,paintCost,laborCost,TotalCost;


    std::cout << "Enter number of rooms: ";
    std::cin>>rooms;
    std::cout<<"Enter square feet of wall space in each room:";
    std::cin>>sqFt;
    std::cout<< "Cost of Paint:";
    std::cin>>paint_cost;
    std::cout<<std::endl;
    std::cout<<"Painting UR Walls Inc. Invoice"<<std::endl;
    std::cout<<"-------------------------------"<<std::endl;
    gallonOFpaint=sqFt/160*rooms;
    std::cout<<"You will need:"<<" "<< gallonOFpaint <<" "<< "gallons of paint"<<std::endl;
    laborHours=gallonOFpaint*3;
    std::cout<<"You will require :"<<" "<<laborHours<<" "<<"hours of labor"<<std::endl;
    paintCost=paint_cost*gallonOFpaint;
    std::cout<<"Cost of paint: "<<" "<<paintCost<<" "<<std::endl;
    laborCost=laborHours*28;
    std::cout<<"Labor Cost: "<<" "<<laborCost<<" "<<std::endl;
    TotalCost=laborCost+paintCost;
    std::cout<<"Total cost:"<<" "<<TotalCost<<" ";



}