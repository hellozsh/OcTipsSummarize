
int gloablAge = 30;

// @implementation CaptureBlock

struct __CaptureBlock__test_block_impl_0 {
  struct __block_impl impl;
  struct __CaptureBlock__test_block_desc_0* Desc;
  int autoAge; // 值捕获
  int *staticAge; // 以指针形式截获
    // 全局变量没有捕获
  __CaptureBlock__test_block_impl_0(void *fp, struct __CaptureBlock__test_block_desc_0 *desc, int _autoAge, int *_staticAge, int flags=0) : autoAge(_autoAge), staticAge(_staticAge) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};
static void __CaptureBlock__test_block_func_0(struct __CaptureBlock__test_block_impl_0 *__cself) {
  int autoAge = __cself->autoAge; // bound by copy
  int *staticAge = __cself->staticAge; // bound by copy


        NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T_CaptureBlock_756e2f_mi_0,autoAge,(*staticAge),gloablAge);
    }

static struct __CaptureBlock__test_block_desc_0 {
  size_t reserved;
  size_t Block_size;
} __CaptureBlock__test_block_desc_0_DATA = { 0, sizeof(struct __CaptureBlock__test_block_impl_0)};

static void _I_CaptureBlock_test(CaptureBlock * self, SEL _cmd) {

    int autoAge = 10;
    static int staticAge = 20;
    void (*stackBlock)(void) = ((void (*)())&__CaptureBlock__test_block_impl_0((void *)__CaptureBlock__test_block_func_0, &__CaptureBlock__test_block_desc_0_DATA, autoAge, &staticAge));

    ((void (*)(__block_impl *))((__block_impl *)stackBlock)->FuncPtr)((__block_impl *)stackBlock);
}

// @end
