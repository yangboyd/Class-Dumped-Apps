//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNetSocketAddress.h"

@class JavaNetInetSocketAddress_InetSocketAddressHolder;

@interface JavaNetInetSocketAddress : JavaNetSocketAddress
{
    JavaNetInetSocketAddress_InetSocketAddressHolder *holder_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createUnresolvedWithNSString:(id)arg1 withInt:(int)arg2;
+ (id)checkHostWithNSString:(id)arg1;
+ (int)checkPortWithInt:(int)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isUnresolved;
- (id)getHostString;
- (id)getHostName;
- (id)getAddress;
- (int)getPort;
- (void)readObjectNoData;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (id)initWithInt:(int)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (id)initWithInt:(int)arg1;
- (id)init;

@end

