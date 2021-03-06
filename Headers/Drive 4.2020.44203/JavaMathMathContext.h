//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class JavaMathRoundingMode, NSString;

@interface JavaMathMathContext : NSObject <JavaIoSerializable>
{
    int precision_;
    JavaMathRoundingMode *roundingMode_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getRoundingMode;
- (int)getPrecision;
- (id)initWithNSString:(id)arg1;
- (id)initWithInt:(int)arg1 withJavaMathRoundingMode:(id)arg2;
- (id)initWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

