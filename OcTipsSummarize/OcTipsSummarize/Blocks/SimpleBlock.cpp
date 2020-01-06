// @implementation SimpleBlock

struct __block_impl {
  void *isa; // 由此说明block其实也是一个对象
  int Flags;
  int Reserved;
  void *FuncPtr; // 方法实现
};

struct __SimpleBlock__test_block_impl_0 {
  struct __block_impl impl; // block的实现
  struct __SimpleBlock__test_block_desc_0* Desc; // block的描述
  __SimpleBlock__test_block_impl_0(void *fp, struct __SimpleBlock__test_block_desc_0 *desc, int flags=0) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};

// 该block的方法实现
static void __SimpleBlock__test_block_func_0(struct __SimpleBlock__test_block_impl_0 *__cself) {


        NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T_SimpleBlock_3a3a00_mi_0);
    }

static struct __SimpleBlock__test_block_desc_0 {
  size_t reserved;
  size_t Block_size;
} __SimpleBlock__test_block_desc_0_DATA = { 0, sizeof(struct __SimpleBlock__test_block_impl_0)};

// I表示是实例方法，SimpleBlock是该类的名称，test是方法名
static void _I_SimpleBlock_test(SimpleBlock * self, SEL _cmd) {

    // 创建一个block
    void (*stackBlock)(void) = ((void (*)())&__SimpleBlock__test_block_impl_0((void *)__SimpleBlock__test_block_func_0, &__SimpleBlock__test_block_desc_0_DATA));

    // 调用block下的impl下的FuncPtr(block结构体的首地址就是impl的地址)
    ((void (*)(__block_impl *))((__block_impl *)stackBlock)->FuncPtr)((__block_impl *)stackBlock);
}

// @end
