int main(object me, string arg)
{
    int *scores = ({ 45, 82, 91, 60, 33, 78 });

    // 1. filter: 过滤出及格的分数 (>= 60)
    int *passed = filter(scores, (: $1 >= 60 :));

    // 2. map: 所有分数加 5 分
    int *boosted = map(passed, (: $1 + 5 :));

    // 3. sort_array: 降序排序（返回正数交换，负数不交换）
    int *sorted = sort_array(boosted, (: $2 - $1 :));

    write(sprintf("原始分数: %O\n", scores));
    write(sprintf("及格提分并降序: %O\n", sorted));

    // 4. 函数指针也可以赋给变量并手动调用（evaluate）
    function calc_dmg = (: ($1 * 2) - $2 :);
    int dmg = evaluate(calc_dmg, 50, 15);
    write(sprintf("伤害计算结果: %d\n", dmg));

    return 1;
}