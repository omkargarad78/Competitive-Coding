class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        final=0
        for i in range(len(operations)):
            if(operations[i]=='--X' or operations[i]=='X--'):
                final-=1
            else:
                final+=1

        return final