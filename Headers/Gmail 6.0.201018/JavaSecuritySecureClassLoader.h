//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangClassLoader.h"

@class JavaUtilHashMap;

@interface JavaSecuritySecureClassLoader : JavaLangClassLoader
{
    _Bool initialized_;
    JavaUtilHashMap *pdcache_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)check;
- (id)getProtectionDomainWithJavaSecurityCodeSource:(id)arg1;
- (id)getPermissionsWithJavaSecurityCodeSource:(id)arg1;
- (id)defineClassWithNSString:(id)arg1 withJavaNioByteBuffer:(id)arg2 withJavaSecurityCodeSource:(id)arg3;
- (id)defineClassWithNSString:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaSecurityCodeSource:(id)arg5;
- (id)init;
- (id)initWithJavaLangClassLoader:(id)arg1;

@end

