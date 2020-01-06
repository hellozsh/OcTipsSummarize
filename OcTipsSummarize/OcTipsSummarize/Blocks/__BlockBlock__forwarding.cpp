/* @end */

#pragma clang assume_nonnull end

// @implementation __BlockBlock
 
struct __Block_byref_autoAge_0 {
  void *__isa;
__Block_byref_autoAge_0 *__forwarding;
 int __flags;
 int __size;
 int autoAge;
};
struct __Block_byref_obj_1 {
  void *__isa;
__Block_byref_obj_1 *__forwarding;
 int __flags;
 int __size;
 void (*__Block_byref_id_object_copy)(void*, void*);
 void (*__Block_byref_id_object_dispose)(void*);
 Person *obj;
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


        NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_b0d141_mi_0,(autoAge->__forwarding->autoAge),(obj->__forwarding->obj));
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

    __attribute__((__blocks__(byref))) __Block_byref_obj_1 obj = {(void*)0,(__Block_byref_obj_1 *)&obj, 33554432, sizeof(__Block_byref_obj_1), __Block_byref_id_object_copy_131, __Block_byref_id_object_dispose_131, ((Person *(*)(id, SEL))(void *)objc_msgSend)((id)((Person *(*)(id, SEL))(void *)objc_msgSend)((id)objc_getClass("Person"), sel_registerName("alloc")), sel_registerName("init"))};


    void (*mallocBlock)(void) = ((void (*)())&____BlockBlock__test_block_impl_0((void *)____BlockBlock__test_block_func_0, &____BlockBlock__test_block_desc_0_DATA, (__Block_byref_autoAge_0 *)&autoAge, (__Block_byref_obj_1 *)&obj, 570425344));

    ((void (*)(__block_impl *))((__block_impl *)mallocBlock)->FuncPtr)((__block_impl *)mallocBlock);

}


struct __Block_byref_autoAge_2 {
  void *__isa;
__Block_byref_autoAge_2 *__forwarding;
 int __flags;
 int __size;
 int autoAge;
};

struct ____BlockBlock__forwardTest_block_impl_0 {
  struct __block_impl impl;
  struct ____BlockBlock__forwardTest_block_desc_0* Desc;
  Person *obj;
  __Block_byref_autoAge_2 *autoAge; // by ref
  ____BlockBlock__forwardTest_block_impl_0(void *fp, struct ____BlockBlock__forwardTest_block_desc_0 *desc, Person *_obj, __Block_byref_autoAge_2 *_autoAge, int flags=0) : obj(_obj), autoAge(_autoAge->__forwarding) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};

// 拷贝到堆上的话，block方法里访问的autoAge就是堆上的autoAge，由于堆上的autoAge指向自身，最终拿到的值还是自身
static void ____BlockBlock__forwardTest_block_func_0(struct ____BlockBlock__forwardTest_block_impl_0 *__cself) {
  __Block_byref_autoAge_2 *autoAge = __cself->autoAge; // bound by ref
  Person *obj = __cself->obj; // bound by copy

 
           (autoAge->__forwarding->autoAge) = 20;
           NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_b0d141_mi_3,(autoAge->__forwarding->autoAge),obj);
           NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_b0d141_mi_4,&(autoAge->__forwarding->autoAge));
       }
static void ____BlockBlock__forwardTest_block_copy_0(struct ____BlockBlock__forwardTest_block_impl_0*dst, struct ____BlockBlock__forwardTest_block_impl_0*src) {_Block_object_assign((void*)&dst->autoAge, (void*)src->autoAge, 8/*BLOCK_FIELD_IS_BYREF*/);_Block_object_assign((void*)&dst->obj, (void*)src->obj, 3/*BLOCK_FIELD_IS_OBJECT*/);}

static void ____BlockBlock__forwardTest_block_dispose_0(struct ____BlockBlock__forwardTest_block_impl_0*src) {_Block_object_dispose((void*)src->autoAge, 8/*BLOCK_FIELD_IS_BYREF*/);_Block_object_dispose((void*)src->obj, 3/*BLOCK_FIELD_IS_OBJECT*/);}

static struct ____BlockBlock__forwardTest_block_desc_0 {
  size_t reserved;
  size_t Block_size;
  void (*copy)(struct ____BlockBlock__forwardTest_block_impl_0*, struct ____BlockBlock__forwardTest_block_impl_0*);
  void (*dispose)(struct ____BlockBlock__forwardTest_block_impl_0*);
} ____BlockBlock__forwardTest_block_desc_0_DATA = { 0, sizeof(struct ____BlockBlock__forwardTest_block_impl_0), ____BlockBlock__forwardTest_block_copy_0, ____BlockBlock__forwardTest_block_dispose_0};

static void _I___BlockBlock_forwardTest(__BlockBlock * self, SEL _cmd) {

    // 只要一用__block修饰，就会产生一个结构体，这个结构体内部有这个变量
    __attribute__((__blocks__(byref))) __Block_byref_autoAge_2 autoAge = {(void*)0,(__Block_byref_autoAge_2 *)&autoAge, 0, sizeof(__Block_byref_autoAge_2), 10};

    Person *obj = ((Person *(*)(id, SEL))(void *)objc_msgSend)((id)((Person *(*)(id, SEL))(void *)objc_msgSend)((id)objc_getClass("Person"), sel_registerName("alloc")), sel_registerName("init"));

    // 由于没有copy到堆上，所以这个这个结构体在栈上，他的__forwarding也指向在栈上的自己
    int *p = &(autoAge.__forwarding->autoAge);
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_b0d141_mi_1,p);
    {
       NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_b0d141_mi_2,&(autoAge.__forwarding->autoAge));

       void (*stackBlock)(void) = ((void (*)())&____BlockBlock__forwardTest_block_impl_0((void *)____BlockBlock__forwardTest_block_func_0, &____BlockBlock__forwardTest_block_desc_0_DATA, obj, (__Block_byref_autoAge_2 *)&autoAge, 570425344));

        // 当这个变量被block copy到堆上后，这个结构体在堆上也会复制到堆上一份，这个时候相当于这个变量在栈上有一块地址，堆上有一块地址
        // 这个时候autoAge的__forwarding指向了堆区的那个结构体，那个结构体的__forwarding指向了自身
        // 这样即使是访问栈区的autoAge，拿到的值是堆区的值，堆区的autoAge，拿到的值是堆区的autoAge
       void (*mallocBlock)(void) = (void (*)())((id (*)(id, SEL))(void *)objc_msgSend)((id)stackBlock, sel_registerName("copy"));
       
        
        NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_b0d141_mi_5,stackBlock,stackBlock,mallocBlock,mallocBlock);

        ((void (*)(__block_impl *))((__block_impl *)stackBlock)->FuncPtr)((__block_impl *)stackBlock);
        ((void (*)(__block_impl *))((__block_impl *)mallocBlock)->FuncPtr)((__block_impl *)mallocBlock);

        ((void (*)(id, SEL))(void *)objc_msgSend)((id)mallocBlock, sel_registerName("release"));

        ((void (*)(__block_impl *))((__block_impl *)stackBlock)->FuncPtr)((__block_impl *)stackBlock);

        ((void (*)(id, SEL))(void *)objc_msgSend)((id)obj, sel_registerName("release"));
    }

    // 堆上的block释放，栈上的也释放后，访问栈上的autoAge根据__forwarding打印了堆上autoAge的值
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_b0d141_mi_6,&(autoAge.__forwarding->autoAge));
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_l__t022w2xd7z9_3hrsqg0c8szh0000gn_T___BlockBlock_b0d141_mi_7,p,*p);
}

// @end
 
