//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _PMHTTPManagerTaskStateBoxResult {
    _Bool _field1;
    unsigned char _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<CF<__CFRunLoop *>, NSMutableSet<NSString *>*, std::__1::less<CF<__CFRunLoop *>>, std::__1::allocator<std::__1::pair<const CF<__CFRunLoop *>, NSMutableSet<NSString *>*>>> {
    struct __tree<std::__1::__value_type<CF<__CFRunLoop *>, NSMutableSet<NSString *>*>, std::__1::__map_value_compare<CF<__CFRunLoop *>, std::__1::__value_type<CF<__CFRunLoop *>, NSMutableSet<NSString *>*>, std::__1::less<CF<__CFRunLoop *>>, true>, std::__1::allocator<std::__1::__value_type<CF<__CFRunLoop *>, NSMutableSet<NSString *>*>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CF<__CFRunLoop *>, NSMutableSet<NSString *>*>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CF<__CFRunLoop *>, std::__1::__value_type<CF<__CFRunLoop *>, NSMutableSet<NSString *>*>, std::__1::less<CF<__CFRunLoop *>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } __m_;
};

