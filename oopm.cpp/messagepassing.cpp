#include <iostream>
using namespace std ;
class tv {
    private:
        bool is on ;
        public:
        void control(bool x) {
            is on = x ;
        }
        void getstatus() {
            if (is on) cout << "TV is ON" ;
            else cout << "TV is OFF";
        }
    };
    class remote{
        public:
        void control TV (TV & a, bool x) 
            a.control(x);
        }
    };
    int main() {
        tv+t1 ;
        remote r1 ;
        r1.control TV(t, true) ;
        t1.getstatus() ;
        return 0;
    }
                