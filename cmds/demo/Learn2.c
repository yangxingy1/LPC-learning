int main(object me, string arg) {
    mapping player = ([
        "name"   : "令狐冲",
        "hp"     : 100,
        "skills" : ([ "独孤九剑": 95, "吸星大法": 60 ]),
    ]);

    // 读取与修改
    player["hp"] -= 20;
    player["mp"] = 50; // 不存在的 key 会自动新增

    // 删除某个 key
    map_delete(player, "mp");

    // 遍历 mapping
    write("=== 角色属性 ===\n");
    foreach (string key, mixed val in player) {
        write(sprintf("%-8s : %O\n", key, val));
    }

    write("=== 角色属性2 ====\n");
    foreach (mixed key, string val in player)
    {
        write(sprintf("%-8s : %O\n", key, val));
    }

    // 检查 key 是否存在（注意区分值为 0 和 key 不存在）
    if (!undefinedp(player["hp"])) {
        write("当前血量存在，值为：" + player["hp"] + "\n");
    }

    return 1;
}