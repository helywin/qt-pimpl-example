# qt-pimpl-example
Qt P-IMPL 例子

具体实现方式可以参考QObject,QObjectPrivate,QWidget,QWidgetPrivate类之间的关系

实现了Private类封装数据和私有槽函数，同时私有类可以继承，实现和上述关系一样的例子，Windows下编译可能需要改cmake或者设置Qt5_DIR变量用来配合find_package查找包

为了能够配合clangd需要cmake执行两次拷贝compile_commands.json到根目录实现vim的语法高亮


参考资料

[https://stackoverflow.com/questions/25250171/how-to-use-the-qts-pimpl-idiom](https://stackoverflow.com/questions/25250171/how-to-use-the-qts-pimpl-idiom)

[https://en.cppreference.com/w/cpp/language/pimpl](https://en.cppreference.com/w/cpp/language/pimpl)
