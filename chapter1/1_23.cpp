#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item item1, item2;
    if(std::cin >> item1){
        int num = 1;
        while(std::cin >> item2){
            if(item1.isbn() == item2.isbn()){
                num++;
            }
            else{
                std::cout << item1.isbn() << "��" << num << "�����ۼ�¼" << std::endl;
                item1 = item2;
                num = 1;            
            }
        }
        std::cout << item1.isbn() << "��" << num << "�����ۼ�¼" << std::endl;
    }
    else{
        std::cerr << "error" << std::endl;
    }
    return 0;
}