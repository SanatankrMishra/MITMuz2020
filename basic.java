


public class basic{
    public static boolean isPalindrome(String str)
	{
		int startIdx = 0;
		int endIdx = str.length() - 1;		
		while(startIdx < endIdx)
		{
			char start = str.charAt(startIdx);
			char end = str.charAt(endIdx);
			if(Character.toLowerCase(start) != Character.toLowerCase(end))
				return false;
			startIdx += 1;
			endIdx -= 1;
		}
		return true;
	}	

    public static void isNumeric(String str)
	{
		int startIdx = 0;
		int endIdx = str.length() - 1;		
		while(startIdx != endIdx)
		{
			char start = str.charAt(startIdx);
			if(Character.valueOf(start) > 65 || Character.valueOf(start) < 90 ){
                System.out.print("This String contains Upper Alphabet.\n");
            }
				
			startIdx += 1;
		}
	}	

    public static void main(String[] args){
        System.out.println("Check Palindrome......\n");
        
        System.out.println("Is racecar a palindrome: "+ isPalindrome("racecar")+ "\n" );
        isNumeric("llephant");
        
    }





}