#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
    cout<<"First commit."<<endl;
    cout<<"New file."<<endl;
    cout<<"second commit"<<endl;
    Mat A,B,add;
    namedWindow("new window");
    A=imread("./1.png");
    B=imread("./1_edge.png");
    addWeighted(A,0.5,B,0.5,100.0,add);
    imshow("new window",add);
    waitKey(3000);
    return 0;
}
