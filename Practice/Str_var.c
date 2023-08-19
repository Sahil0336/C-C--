struct pqr
{
    int k;
    char ch[25];
};
int main()
{
    struct pqr v1={21,"Hello"};
    struct pqr v2={30,"Hallelujah"};
    void display(struct pqr); 
    printf("\nIn display: \n");  
    display(v1);
    display(v2); 
    printf("\nIn main: \n");
    printf("\n%d %s",v1.k,v1.ch);
    printf("\n%d %s",v2.k,v2.ch);
    return 0;
}
void display(struct pqr t)
{
    printf("\n%d %s",t.k,t.ch);
    t.k=99;
    printf("\n%d %s",t.k,t.ch);
}