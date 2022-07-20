
bool areAnagram(string &s1, string &s2){
    // Write your code here.
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
  
    sort(s1.begin(), s1.end()); 
    sort(s2.begin(), s2.end()); 
  
    return (s1==s2); 
}
