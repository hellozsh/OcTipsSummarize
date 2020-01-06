struct __Block_byref_autoAge_0 {
  void *__isa;
__Block_byref_autoAge_0 *__forwarding; // 一个指向自身的指针，
 int __flags;
 int __size;
 int autoAge;
};

// 在用__blcok修饰auto变量的时候，会生成一个结构体，这个结构体内部根据strong还是weak强引用或弱引用这个指针
struct __Block_byref_obj_1 {
  void *__isa;
__Block_byref_obj_1 *__forwarding; // 一个指向自身的指针
 int __flags;
 int __size;
 void (*__Block_byref_id_object_copy)(void*, void*); // 相对于普通类型，对象类型多了copy和dispose方法
 void (*__Block_byref_id_object_dispose)(void*);
 NSObject *obj;
};

struct ____BlockBlock__test_block_impl_0 {
  struct __block_impl impl;
  struct ____BlockBlock__test_block_desc_0* Desc;
  __Block_byref_autoAge_0 *autoAge; // by ref
  __Block_byref_obj_1 *obj; // by ref
  ____BlockBlock__test_block_impl_0(void *fp, struct ____BlockBlock__test_block_desc_0 *desc, __Block_byref_autoAge_0 *_autoAge, __Block_byref_obj_1 *_obj, int flags=0) : autoAge(_autoAge->__forwarding), obj(_obj->__forwarding) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};
static void ____BlockBlock__test_block_func_0(struct ____BlockBlock__test_block_impl_0 *__cself) {
  __Block_byref_autoAge_0 *autoAge = __cself->autoAge; // bound by ref
  __Block_byref_obj_1 *obj = __cself->obj; // bound by ref

// 访问的时候调用包装成的结构体下的__forwarding指向的结构体下的成员
        NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_5398fc_mi_0,(autoAge->__forwarding->autoAge),(obj->__forwarding->obj));
    }
static void ____BlockBlock__test_block_copy_0(struct ____BlockBlock__test_block_impl_0*dst, struct ____BlockBlock__test_block_impl_0*src) {_Block_object_assign((void*)&dst->autoAge, (void*)src->autoAge, 8/*BLOCK_FIELD_IS_BYREF*/);_Block_object_assign((void*)&dst->obj, (void*)src->obj, 8/*BLOCK_FIELD_IS_BYREF*/);}

static void ____BlockBlock__test_block_dispose_0(struct ____BlockBlock__test_block_impl_0*src) {_Block_object_dispose((void*)src->autoAge, 8/*BLOCK_FIELD_IS_BYREF*/);_Block_object_dispose((void*)src->obj, 8/*BLOCK_FIELD_IS_BYREF*/);}

static struct ____BlockBlock__test_block_desc_0 {
  size_t reserved;
  size_t Block_size;
  void (*copy)(struct ____BlockBlock__test_block_impl_0*, struct ____BlockBlock__test_block_impl_0*);
  void (*dispose)(struct ____BlockBlock__test_block_impl_0*);
} ____BlockBlock__test_block_desc_0_DATA = { 0, sizeof(struct ____BlockBlock__test_block_impl_0), ____BlockBlock__test_block_copy_0, ____BlockBlock__test_block_dispose_0};

static void _I___BlockBlock_test(__BlockBlock * self, SEL _cmd) {

    __attribute__((__blocks__(byref))) __Block_byref_autoAge_0 autoAge = {(void*)0,(__Block_byref_autoAge_0 *)&autoAge, 0, sizeof(__Block_byref_autoAge_0), 10};

    __attribute__((__blocks__(byref))) __Block_byref_obj_1 obj = {(void*)0,(__Block_byref_obj_1 *)&obj, 33554432, sizeof(__Block_byref_obj_1), __Block_byref_id_object_copy_131, __Block_byref_id_object_dispose_131, ((NSObject *(*)(id, SEL))(void *)objc_msgSend)((id)((NSObject *(*)(id, SEL))(void *)objc_msgSend)((id)objc_getClass("NSObject"), sel_registerName("alloc")), sel_registerName("init"))};


    void (*mallocBlock)(void) = ((void (*)())&____BlockBlock__test_block_impl_0((void *)____BlockBlock__test_block_func_0, &____BlockBlock__test_block_desc_0_DATA, (__Block_byref_autoAge_0 *)&autoAge, (__Block_byref_obj_1 *)&obj, 570425344));

    ((void (*)(__block_impl *))((__block_impl *)mallocBlock)->FuncPtr)((__block_impl *)mallocBlock);

}

// @end
