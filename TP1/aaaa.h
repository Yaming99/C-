using namespace std;

class ouch
{
    private :
        long a;
    public :
        ouch()
        {
            a = 0;
        }
        ~ouch() {}
        void incr(long n)
        {
            a = a + n;
        }
        void print()
        {
            cout << "a = " << a << endl;
        }
};
