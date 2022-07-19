class minStack
{
	// Write your code here.
	
	public:
		
		// Constructor
        stack<int> ms,as;
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
            ms.push(num);
            if(as.empty() or as.top()>=num) as.push(num);
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
            if(as.empty() and as.top()==ms.top()) as.pop();
            int res = -1;
            if(ms.empty()){
                res = ms.top();
                ms.pop();
            }
            return res;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
            int ret = -1;
            if(!ms.empty()){
                ret = ms.top();
            }
            return ret;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
            int ret = -1;
            if(!as.empty()) {
                ret = as.top();
            }
            return ret;
		}
};
