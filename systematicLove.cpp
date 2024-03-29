// NOTE: CODE DOES NOT COMPILE! THIS IS ONLY USED FOR REFERENCE OF THE VISUALS 
// SEEN FROM PROJECT DIVA

#include <iostream>
#include <math.h>

const int HEART_SIZE = 20;
const int HALF_SIZE = HEART_SIZE/2;
bool is_in_love (int x, int y);

int main(void)
{
    std::string message = " SYSTEMATIC LOVE ";
    int message_indent = (HALF_SIZE - (message.length()/4) - 1);
    for (int x = 0; x < HEART_SIZE; ++x){
        for(int y = 0; y < HEART_SIZE; ++y){
            std::cout << is_in_love(x, y) ? "vv" : " ";
            if(y == HALF_SIZE){
                if(x == message_indent){
                    std::cout << message.c_str();
                    x += (message.length() / 2);
                }
            }
        }
        std::cout<<"\n";
    }

    return 0;
}

bool is_in_love (int x, int y){
    const float width = 2.2f;
    const float height = 3.0f;
    const float HEART_COEFFICIENT = 0.7;
    
    float check_x = ((static_cast<float>(x) / static_cast<float>(HEART_SIZE)) - 0.5f * width);
    float check_y = ((static_cast<float>(HEART_SIZE - y) / static_cast<float>(HEART_SIZE)) - 0.4f);
    
    float top_y = 0.0;
    float bottom_y = 0.0;
    
    if(check_x >= 0){
        top_y = sqrt(1-(check_x * check_x)) + (HEART_COEFFICIENT * sqrt(check_x));
        bottom_y = -sqrt(1-(check_x * check_x)) + (HEART_COEFFICIENT * sqrt(check_x));
    } else {
        top_y = sqrt(1-(check_x * check_x)) + (HEART_COEFFICIENT * sqrt(check_x));
        bottom_y = -sqrt(1-(check_x * check_x)) + (HEART_COEFFICIENT * sqrt(check_x));
    }

    if ((bottom_y < check_y) && (check_y <=top_y)){
        return true;
    } else {
        return false;
    }
}

