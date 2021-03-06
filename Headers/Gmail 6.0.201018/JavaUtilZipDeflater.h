//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DalvikSystemCloseGuard, IOSByteArray, JavaUtilZipZStreamRef;

@interface JavaUtilZipDeflater : NSObject
{
    IOSByteArray *buf_;
    int off_;
    int len_;
    int level_;
    int strategy_;
    _Bool setParams_;
    _Bool finish_;
    _Bool finished_;
    JavaUtilZipZStreamRef *zsRef_;
    long long bytesRead_;
    long long bytesWritten_;
    DalvikSystemCloseGuard *guard_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)endWithLong:(long long)arg1;
+ (void)resetWithLong:(long long)arg1;
+ (int)getAdlerWithLong:(long long)arg1;
+ (void)setDictionaryWithLong:(long long)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (long long)init__WithInt:(int)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
- (void)dealloc;
- (int)deflateBytesWithLong:(long long)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
- (void)ensureOpen;
- (void)java_finalize;
- (void)end;
- (void)reset;
- (long long)getBytesWritten;
- (int)getTotalOut;
- (long long)getBytesRead;
- (int)getTotalIn;
- (int)getAdler;
- (int)deflateWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (int)deflateWithByteArray:(id)arg1;
- (int)deflateWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (_Bool)finished;
- (void)finish;
- (_Bool)needsInput;
- (void)setLevelWithInt:(int)arg1;
- (void)setStrategyWithInt:(int)arg1;
- (void)setDictionaryWithByteArray:(id)arg1;
- (void)setDictionaryWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)setInputWithByteArray:(id)arg1;
- (void)setInputWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)init;
- (id)initWithInt:(int)arg1;
- (id)initWithInt:(int)arg1 withBoolean:(_Bool)arg2;

@end

