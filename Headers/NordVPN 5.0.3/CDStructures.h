//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct CLSMachOFile {
    int fd;
    unsigned long long mappedSize;
    void *mappedFile;
};

struct CLSMachOSlice {
    void *startAddress;
    int cputype;
    int cpusubtype;
};

struct Cache;

struct Cleanup {
    CDUnknownFunctionPointerType _field1;
    void *_field2;
    void *_field3;
    struct Cleanup *_field4;
};

struct Comparator;

struct DB {
    CDUnknownFunctionPointerType *_field1;
};

struct Env;

struct FilterPolicy;

struct GAIReachabilityApi {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct Iterator {
    CDUnknownFunctionPointerType *_field1;
    struct Cleanup _field2;
};

struct Logger;

struct NSMutableDictionary {
    Class _field1;
};

struct NSNumber {
    Class _field1;
};

struct Options {
    struct Comparator *_field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    struct Env *_field5;
    struct Logger *_field6;
    unsigned long long _field7;
    int _field8;
    struct Cache *_field9;
    unsigned long long _field10;
    int _field11;
    unsigned long long _field12;
    int _field13;
    _Bool _field14;
    struct FilterPolicy *_field15;
};

struct ReadOptions {
    _Bool verify_checksums;
    _Bool fill_cache;
    struct Snapshot *snapshot;
};

struct Snapshot;

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct WriteBatch {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> rep_;
};

struct WriteOptions {
    _Bool sync;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _base1_2list {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *__data_;
                    unsigned long long __size_;
                    unsigned long long __cap_;
                } __l;
                struct __short {
                    char __data_[23];
                    struct {
                        unsigned char __size_;
                    } ;
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct gzFile_s {
    unsigned int _field1;
    char *_field2;
    long long _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
} CDStruct_e24ffa00;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    void **_field1;
    int *_field2;
    char *_field3;
} CDStruct_e1a27b1c;

typedef struct {
    char *_field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_4355734a;

typedef struct {
    char *_field1;
    void *_field2;
    _Bool _field3;
    void *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
} CDStruct_1e2a2a70;

typedef struct {
    void *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
} CDStruct_9d607ac6;

typedef struct {
    char _field1[33];
    _Bool _field2;
    CDStruct_e24ffa00 _field3;
    CDStruct_e24ffa00 _field4;
    struct {
        void *_field1;
        unsigned long long _field2;
        void *_field3;
        void *_field4;
        void *_field5;
    } _field5;
    struct CLSMachOSlice _field6;
    long long _field7;
} CDStruct_fad71a87;

