def dfs(step, n, vis, num):
    if step == n + 1:
        for i in range(1, n + 1):
            print('%d' % num[i], end = '')
        print()
        return 
    for i in range(1, n + 1):
        if not vis[i]:
            vis[i] = True
            num[step] = i
            dfs(step + 1, n, vis, num)
            vis[i] = False

n = int(input())
vis = {}
num = {}
for i in range(1, n + 1):
    vis[i] = False
    num[i] = 0
dfs(1, n, vis, num)