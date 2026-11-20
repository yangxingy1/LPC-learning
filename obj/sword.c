private string name;
private int atk;

// 构造函数：对象加载或被 new() 克隆时自动触发
void create() {
    name = "青钢剑";
    atk = 25;
}

string query_name() { return name; }
int query_atk()     { return atk; }

void upgrade(int delta) {
    atk += delta;
}