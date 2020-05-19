#include <stdio.h>
#include <string.h>
struct Person{
    char name[15];
    int birth;
    char tel[20];
};

int main(void) {
    struct Person p[15], t;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
        scanf("%s%d%s", p[i].name, &p[i].birth, p[i].tel);
    for (int i = 0; i < n; i ++) {
        for (int j = i + 1; j < n; j ++) {
            if (p[i].birth > p[j].birth) {
                strcpy(t.name, p[i].name);
                t.birth = p[i].birth;
                strcpy(t.tel, p[i].tel);
                strcpy(p[i].name, p[j].name);
                p[i].birth = p[j].birth;
                strcpy(p[i].tel, p[j].tel);
                strcpy(p[j].name, t.name);
                p[j].birth = t.birth;
                strcpy(p[j].tel, t.tel);
            }
        }
    }
    for (int i = 0; i < n; i ++)
        printf("%s %d %s\n", p[i].name, p[i].birth, p[i].tel);
    return 0;
}