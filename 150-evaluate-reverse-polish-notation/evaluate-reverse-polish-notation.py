class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        number = []
        operator = ['+', '*', '-', '/']
        c = int(tokens[0])
        for i in tokens:
            if i in operator:
                a = int(number.pop())
                b = int(number.pop())
                if i == '+':
                    c = b + a
                elif i == '-':
                    c = b - a
                elif i == '*':
                    c = b * a
                elif i == '/':
                    c = int(b / a)
                number.append(c)
            else :
                number.append(i)
        return (c)