//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilIterator-Protocol.h"

@class ComGoogleApiClientUtilTypes_1, NSString;

@interface ComGoogleApiClientUtilTypes_1_1 : NSObject <JavaUtilIterator>
{
    ComGoogleApiClientUtilTypes_1 *this$0_;
    int length_;
    int index_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (void)remove;
- (id)next;
- (_Bool)hasNext;
- (id)initWithComGoogleApiClientUtilTypes_1:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

