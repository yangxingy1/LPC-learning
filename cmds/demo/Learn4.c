int main(object me, string arg)
{
    object s1 = new("/obj/sword");
    object s2 = new("/obj/sword");

    s1->upgrade(5);
    write(sprintf("剑1 : %s | 攻击力 : %d | 对象ID : %O\n", s1->query_name(), s1->query_atk(), s1));
    write(sprintf("剑2 : %s | 攻击力 : %d | 对象ID : %O\n", s2->query_name(), s2->query_atk(), s2));

    destruct(s1);
    destruct(s2);

    return 1;
}