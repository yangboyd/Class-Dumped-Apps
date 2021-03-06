//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class IOSIntArray, NSString;

@interface ComGoogleCommonPrimitivesImmutableIntArray : NSObject <JavaIoSerializable>
{
    IOSIntArray *array_;
    int start_;
    int end_;
}

+ (void)initialize;
+ (id)builder;
+ (id)builderWithInt:(int)arg1;
+ (id)copyOfWithJavaUtilStreamIntStream:(id)arg1;
+ (id)copyOfWithJavaLangIterable:(id)arg1;
+ (id)copyOfWithJavaUtilCollection:(id)arg1;
+ (id)copyOfWithIntArray:(id)arg1;
+ (id)ofWithInt:(int)arg1 withIntArray:(id)arg2;
+ (id)ofWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6;
+ (id)ofWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
+ (id)ofWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (id)ofWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (id)ofWithInt:(int)arg1 withInt:(int)arg2;
+ (id)ofWithInt:(int)arg1;
+ (id)of;
- (void)dealloc;
- (id)trimmed;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)asList;
- (id)subArrayWithInt:(int)arg1 withInt:(int)arg2;
- (id)toArray;
- (id)stream;
- (void)forEachWithJavaUtilFunctionIntConsumer:(id)arg1;
- (_Bool)containsWithInt:(int)arg1;
- (int)lastIndexOfWithInt:(int)arg1;
- (int)indexOfWithInt:(int)arg1;
- (int)getWithInt:(int)arg1;
- (_Bool)isEmpty;
- (int)length;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

