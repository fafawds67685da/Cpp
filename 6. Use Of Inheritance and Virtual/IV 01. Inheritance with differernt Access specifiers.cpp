class A 
{
    private:
    int a=5;
    void display1()
    {
        cout<<a;
    }      
    
    protected:
    int b=10;
    
    void display2()
    {
        cout<<b;
    }      
    
    public:
    int c=15;
    
    void display3()
    {
        cout<<c;
        
    } 
};


/*
1.	For class B: public A,
only variables b and c, and functions display2 and display3 were accessible.

2.	For class B: private A,
only variable a and function display1 was accessible.

3.	For class B protected A,
Only variable b and function display2 was accessible.  */
