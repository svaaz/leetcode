    def lengthOfLongestSubstring(s: str) -> int:
        wordcount={}
        length =0
        oldlength =0
        temp =0
        i=0
        while i < len(s):
            word=s[i]
            print(word, end="")
            if word not in wordcount:
                wordcount[word] = i
                length+=1
                i=i+1
            else:
                
                temp =i
                i = wordcount[word]+1
                wordcount={}
                #wordcount[word] = temp
                if (oldlength<length):
                    oldlength = length
                length=0
                
                
            print(length, end="")
            
        if (oldlength<length):
            oldlength = length      
        return oldlength
                
    print(lengthOfLongestSubstring("abcdebbbbb") )             
    print(lengthOfLongestSubstring("bbbbb") )            
    print(lengthOfLongestSubstring("aab") )             
    print(lengthOfLongestSubstring("dvdf") ) 
