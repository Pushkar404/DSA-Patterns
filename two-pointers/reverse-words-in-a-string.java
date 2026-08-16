class Solution {
      public static void reverseString(StringBuilder args, int i, int j) {
            while (i < j){
                  char temp = args.charAt(i);
                  args.setCharAt(i, args.charAt(j));
                  args.setCharAt(j, temp);
                  i++;
                  j--;
            }   
      } 
      public String reverseWords(String s) {

            int l = 0, 
                r = s.length() - 1;

            /* s = "   hello   world   "
                    l                 r
            */
            // find the first non space char
            while (l< s.length() && s.charAt(l) == ' '){
                  l = l+1;
            }
            // find the last non space char
            while (r >= 0 && s.charAt(r) == ' '){
                  r = r-1;
            }

            /* s = "   hello   world   "
                       l           r
            */
            // have a mutable stringbuilder
            StringBuilder sb = new StringBuilder();
            // remove extra spaces
            while( l <= r){
                  if (s.charAt(l) != ' '){
                        sb.append(s.charAt(l));
                        l = l + 1;

                  }
                  else {
                        // ignoring extra spaces
                        int n = sb.length() - 1;
                        if (sb.charAt(n) != ' ' ){
                              sb.append(" ");
                        }
                        l = l + 1;
                  }
            }
            // sb = "hello world"

            // reverse the complete string
            int i = 0, j = sb.length() - 1;
            reverseString(sb, i, j);
            // sb = "dlrow olleh"       

            // reverse individual word
            int start = 0,
                end = 0;
            while ( start < sb.length()){
                  while (end < sb.length() && sb.charAt(end) != ' '){
                        end++;
                        /* sb = "hello world" 
                                 s
                                      e
                        */
                  }
                  // reverse current word
                  int p1 = start,
                      p2 = end - 1;
                  reverseString(sb, p1, p2);
                  // sb = "world olleh"

                  start = end + 1;
                  end = start;

            }
            // Time: O(n) Space: O(n)
            return sb.toString();
      }
}