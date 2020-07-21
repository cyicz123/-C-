# 第十二次实验报告
## 第十二次实验内容
![第十二次实验内容](http://photo.cyicz123.com/Flb0CUJEnbeWSEmm461DRPc1m7_7)
## 第一题实验结果截图
![12_1](http://photo.cyicz123.com/Fn4B0RkkrlMp3x7IqnNH6ExAQRhN)
派生类对象的构造函数会在基类构造函数工作后工作，析构函数顺序相反。
## 第二题实验结果截图
![12_2_1](http://photo.cyicz123.com/FhTUWQiMBAgK3oB0sRuJStAggoGa)
### 倒三角二义性问题
两个基类B1 B2都有show()成员函数,那么派生类调用show()函数时就会出现二义性问题，编译器不知道show()函数是哪一个基类的成员函数。

这里可以用区域限定符(::)来解决二义性问题。如下：
```C++
int main()
{
    D d;//定义派生类对象d
    //d.show()     错 编译出错，出现二义性问题。
    d.B1::show() //正确
    return 0;
}

```
![12_2_2](http://photo.cyicz123.com/Fg2kn-D8Zf-WKGsdbhqIOhFmAd2L)
### 恐怖菱形问题
有基类A，又有两个A的派生类B、C，最后类D又继承类B、C。

A中有成员函数display()，那么B、C都继承了display()，那么D中便同时存在B继承A的display()和C继承A的display()，那么当D的实例调用display()的时候就不知道该调用B的display()还是C的display()，就导致了二义性。如下图：
![12_2_graph](http://photo.cyicz123.com/FkTMxzqlKLrCZcn1VPm_Fv_lHKVE)

既可以用域限定符解决问题，也可以用虚基类来解决。将共同的基类设置为虚基类，这时从不同的路径继承过来的同名数据成员在内存中就只有一个拷贝，同一个函数名也只有一个映射。
![12_2_3](http://photo.cyicz123.com/FndCOIc8NgPLFKK9_Chq8d7TG-bx)
```C++
class B1:public B0
class B2:public B0
class D:public B1,public B2//使用 D d;d.display()报错

class B1:virtual public B0
class B2:virtual public B0
class D:public B1,public B2//使用 D d;d.display() 没问题

```
![12_2_4](http://photo.cyicz123.com/FhIAug9wcn11d1xV0Crf_7LNyv13)