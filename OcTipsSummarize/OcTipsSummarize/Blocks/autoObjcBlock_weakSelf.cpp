#pragma clang assume_nonnull end

// @implementation autoObjcBlock

struct __block_impl {
  void *isa;
  int Flags;
  int Reserved;
  void *FuncPtr;
};

struct __autoObjcBlock__test_block_impl_0 {
  struct __block_impl impl;
  struct __autoObjcBlock__test_block_desc_0* Desc;
  autoObjcBlock *const __weak weakSelf; // 产生弱引用
  __autoObjcBlock__test_block_impl_0(void *fp, struct __autoObjcBlock__test_block_desc_0 *desc, autoObjcBlock *const __weak _weakSelf, int flags=0) : weakSelf(_weakSelf) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};
static void __autoObjcBlock__test_block_func_0(struct __autoObjcBlock__test_block_impl_0 *__cself) {
  autoObjcBlock *const __weak weakSelf = __cself->weakSelf; // bound by copy


        NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T_autoObjcBlock_1f59b6_mi_0,weakSelf);
    }
static void __autoObjcBlock__test_block_copy_0(struct __autoObjcBlock__test_block_impl_0*dst, struct __autoObjcBlock__test_block_impl_0*src) {_Block_object_assign((void*)&dst->weakSelf, (void*)src->weakSelf, 3/*BLOCK_FIELD_IS_OBJECT*/);}

static void __autoObjcBlock__test_block_dispose_0(struct __autoObjcBlock__test_block_impl_0*src) {_Block_object_dispose((void*)src->weakSelf, 3/*BLOCK_FIELD_IS_OBJECT*/);}

static struct __autoObjcBlock__test_block_desc_0 {
  size_t reserved;
  size_t Block_size;
  void (*copy)(struct __autoObjcBlock__test_block_impl_0*, struct __autoObjcBlock__test_block_impl_0*);
  void (*dispose)(struct __autoObjcBlock__test_block_impl_0*);
} __autoObjcBlock__test_block_desc_0_DATA = { 0, sizeof(struct __autoObjcBlock__test_block_impl_0), __autoObjcBlock__test_block_copy_0, __autoObjcBlock__test_block_dispose_0};

static void _I_autoObjcBlock_test(autoObjcBlock * self, SEL _cmd) {


    __attribute__((objc_ownership(weak))) __typeof(self)weakSelf = self;

    void (*mallocBlock)(void) = ((void (*)())&__autoObjcBlock__test_block_impl_0((void *)__autoObjcBlock__test_block_func_0, &__autoObjcBlock__test_block_desc_0_DATA, weakSelf, 570425344));

    ((void (*)(__block_impl *))((__block_impl *)mallocBlock)->FuncPtr)((__block_impl *)mallocBlock);

}

// @end
 
