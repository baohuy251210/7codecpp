import sys
def get_string(): return sys.stdin.readline().strip()


s = get_string()
p = s
t = 'antimatter'
stack = []
size = 0
cur = ''
it = 0
start = -1
end = -1
rem = []
# for i in range(len(s)):
#     cur = t[it]
#     if s[i] == cur:
#         stack.append((s[i], i, it))
#         it += 1
#         if s[i] == 'r':
#             # if len(stack[0:len(stack)-10]) <= 0:
#             start = stack[-10]
#             end = stack[-1]
#             rem.append((start[1], end[1]))
#             # print(start, end)
#             stack = stack[0:len(stack)-10]
#             if (len(stack) > 0):
#                 it = stack[-1][2]+1
#             else:
#                 it = 0
#     else:
#         # stack = stack[0:len(stack)-it-1]
#         it = 0
#         cur = t[it]
#         if s[i] == cur:
#             stack.append((s[i], i, it))
#             it += 1
for i in range(len(s)):
    stack.append((s[i]))
    if stack[-1] == 'r':
        ss = ''.join(stack[-10:])
        if ss == 'antimatter':
            stack = stack[0:len(stack)-10]
        # print(ss)

    # print(stack, cur)
print(''.join(stack))
