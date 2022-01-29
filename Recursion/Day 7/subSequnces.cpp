void solve(string str , string output, int i , vector<string> &ans)
{
    // base case 
    
    if(i >= str.length())
    {
        if(output.length()> 0){
        ans.push_back(output);
        }
        return;
    }
    // exclude
    
    solve(str, output , i+1, ans);
    
    //include 
    
//     char element = str(index);
    output.push_back(str[i]);
    solve(str, output, i+1 , ans);
    
}

vector<string> subsequences(string str){
	
	// Write your code h
    
	vector<string> ans;
    
    string output = "";
    int index = 0;
    
    solve(str, output , index , ans);
    
    return ans;
}
