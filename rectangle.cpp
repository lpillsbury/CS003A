#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle{
     public:
        virtual void display(){
            std::cout << _width << " " << _height << std::endl;
        }
        void setvars(int h,int w) {
            _height = h;
            _width = w;
        }
        int width() {
            return _width;
        }
        int height() {
            return _height;
        }
     private:
        int _height;
        int _width;
 };
 
 class RectangleArea: Rectangle{
     public:
        void read_input(){
            int h, w;
            std::cin >> h >> w;
            setvars(h,w);
        }
        void display(){
            _rectArea = height() * width();
            std::cout << _rectArea << std::endl;
        }
    private:
        int _rectArea;
 };


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}