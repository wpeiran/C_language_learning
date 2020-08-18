// extern int mode;  // 模式类型
// extern double distance; // 出行的距离
// extern double fuel; // 消耗的燃料

int set_mode(int mode); // 获取计算模式
void get_info(int mode, double * distance, double * fuel);    // 获取出行距离和消耗的燃料
void show_info(int mode, double * distance, double * fuel);   // 输出油耗信息