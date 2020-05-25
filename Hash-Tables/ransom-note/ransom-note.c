#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s_node {
    char *s;
    int set;
    struct s_node *next;
};

void init_map(struct s_node *map[]) {
    int i;

    for (i = 0; i < 1000000; ++i)
        map[i] = NULL;
}

int hash_function(char *str) {
    unsigned int i;
    int result;

    result = 0;
    for (i = 0; i < strlen(str); ++i)
        result += str[i];
    return (result);
}

char *clone_string(char *str) {
    char *result;

    result = malloc(sizeof(char) * strlen(str) + 1);
    strcpy(result, str);
    result [strlen(str)] = '\0';
    return (result);
}

struct s_node *store_node(char *str) {
    struct s_node *node;

    node = malloc(sizeof(struct s_node));
    node->s = clone_string(str);
    node->set = 1;
    node->next = NULL;
    return (node);
}

int is_match(struct s_node *beg, char *note) {
    struct s_node *trav;

    trav = beg;
    while (trav)
    {
        if (trav->set)
        {
            if (strcmp(trav->s, note) == 0)
            {
                trav->set = 0;
                return (1);
            }
        }
        trav = trav->next;
    }
    return (0);
}

void checkMagazine(int magazine_count, char** magazine, int note_count, char** note) {
    struct s_node *map[1000000];
    int i;
    int j;
    int counter;
    struct s_node *trav;

    init_map(map);
    for (i = 0; i < magazine_count; ++i)
    {
        j = hash_function(magazine[i]);
        if (map[j] == NULL)
            map[j] = store_node(magazine[i]);
        else
        {
            trav = map[j];
            while (trav->next)
                trav = trav->next;
            trav->next = store_node(magazine[i]);
        }
    }
    counter = 0;
    for (i = 0; i < note_count; ++i)
    {
        j = hash_function(note[i]);
        if (is_match(map[j], note[i]))
            ++counter;
    }
    if (counter == note_count)
        printf("Yes\n");
    else
        printf("No\n");
}

int main(void) {
    char *magazine1[] = {"give", "me", "one", "grand", "today", "night"};
    char *magazine2[] = {"two", "times", "three", "is", "not", "four"};
    char *note1[] = {"give", "one", "grand", "today"};
    char *note2[] = {"two", "times", "two", "is", "four"};
    int magazine_count;
    int note_count;
    
    magazine_count = 6;
    note_count = 4;
    checkMagazine(magazine_count, magazine1, note_count, note1);
    magazine_count = 6;
    note_count = 5;
    checkMagazine(magazine_count, magazine2, note_count, note2);
    return (0);
} 