load_plugin("bMap");

A = map_create([1 2 3], ["zh" "co" "de"]);
B = map_create([1 2 4], ["san" "si" "wu"]);

% disp(A);
% disp(B);

% 字典的加法运算
C = A + B;
disp(C);

% 修改字典的值
map_set(C, 3, "hello");
% 添加新的键值对
map_set(C, 7, "world");
disp(C);

% 获取字典的所有key
keys = map_keys(C);
disp(keys);


% 获取字典的所有values
vals = map_vals(C);
disp(vals);


% 获取字典的大小
m_size = map_size(C);

% 根据字典的keys遍历字典
for i = 1:m_size
    disp(["key: " keys(i) "value: " map_get(C, keys(i))])
end



