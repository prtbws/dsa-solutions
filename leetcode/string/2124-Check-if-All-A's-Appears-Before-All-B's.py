class Solution:
    def checkString(self, s: str) -> bool:
        
        # checka = False
        checkb = False

        for x in s :

            if x == 'a' :

                if checkb :
                    return False

                # checka = True
            else :
                checkb = True

        return True   
