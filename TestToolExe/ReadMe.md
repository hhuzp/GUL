测试数据格式定义：

多个数据之间使用";"间隔

1、时间格式定义：
标准时间输入格式：yyyy-MM-dd,HH:mm:ss.sss
周内秒输入格式：wwww,ssss.sss
秒输入格式：ss.sssssssss
时间类型：gps/glonass/galileo/bd/utc

时间输出统一以yyyy-MM-dd HH:mm:ss.sss格式输出

2、坐标格式定义：
x,y,z

3、角度格式定义：
度分秒输入格式：dd,mm,ss.sss
度分秒输出格式：88°88′88.88888″
度输入格式：dd.sssssssss
度输出格式：88.888888888°

4、矩阵文件内容格式：（输入输出格式相同）
3,4  // 行,列
1,2,3,4  // 具体数据
5,6,7,8
9,10,11,12

5、星历数据格式
测试输入格式：二进制星历电文的txt文件，并在测试数据输入框中输入时间(年月日格式)
钟差输出格式：与时间的秒格式一致
位置输出格式：与坐标格式一致