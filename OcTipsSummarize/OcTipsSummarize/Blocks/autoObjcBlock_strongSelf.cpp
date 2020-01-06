struct __block_impl {
  void *isa;
  int Flags;
  int Reserved;
  void *FuncPtr;
};
 
#pragma clang assume_nonnull end

// @implementation autoObjcBlock


struct __autoObjcBlock__test_block_impl_0 {
  struct __block_impl impl;
  struct __autoObjcBlock__test_block_desc_0* Desc;
  autoObjcBlock *self; // 说明self是局部，局部变量值截获，如果self用static修饰，会是autoObjcBlock **self
  __autoObjcBlock__test_block_impl_0(void *fp, struct __autoObjcBlock__test_block_desc_0 *desc, autoObjcBlock *_self, int flags=0) : self(_self) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};
static void __autoObjcBlock__test_block_func_0(struct __autoObjcBlock__test_block_impl_0 *__cself) {
  autoObjcBlock *self = __cself->self; // bound by copy


        NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T_autoObjcBlock_2a03c0_mi_0,self);
    }

// copy 内部调用_Block_object_assign对self产生了强引用
static void __autoObjcBlock__test_block_copy_0(struct __autoObjcBlock__test_block_impl_0*dst, struct __autoObjcBlock__test_block_impl_0*src) {_Block_object_assign((void*)&dst->self, (void*)src->self, 3/*BLOCK_FIELD_IS_OBJECT*/);}

// dispose 内部调用_Block_object_dispose堆self进行release
static void __autoObjcBlock__test_block_dispose_0(struct __autoObjcBlock__test_block_impl_0*src) {_Block_object_dispose((void*)src->self, 3/*BLOCK_FIELD_IS_OBJECT*/);}

// 描述里面相比SimpleBlock和CaptureBlock多了copy和dispose方法
/*
  截获了变量的block，在被拷贝到堆上时，会调用block内部的copy函数
  当从堆上移除会调用dispose
 */
static struct __autoObjcBlock__test_block_desc_0 {
  size_t reserved;
  size_t Block_size;
  void (*copy)(struct __autoObjcBlock__test_block_impl_0*, struct __autoObjcBlock__test_block_impl_0*);
  void (*dispose)(struct __autoObjcBlock__test_block_impl_0*);
} __autoObjcBlock__test_block_desc_0_DATA = { 0, sizeof(struct __autoObjcBlock__test_block_impl_0), __autoObjcBlock__test_block_copy_0, __autoObjcBlock__test_block_dispose_0};

static void _I_autoObjcBlock_test(autoObjcBlock * self, SEL _cmd) {

    void (*stackBlock)(void) = ((void (*)())&__autoObjcBlock__test_block_impl_0((void *)__autoObjcBlock__test_block_func_0, &__autoObjcBlock__test_block_desc_0_DATA, self, 570425344));

    ((void (*)(__block_impl *))((__block_impl *)stackBlock)->FuncPtr)((__block_impl *)stackBlock);
}

// @end

 
