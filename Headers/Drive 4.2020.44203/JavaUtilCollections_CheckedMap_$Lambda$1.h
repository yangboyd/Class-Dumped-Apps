//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilFunctionBiFunction-Protocol.h"

@class JavaUtilCollections_CheckedMap, NSString;
@protocol JavaUtilFunctionBiFunction;

@interface JavaUtilCollections_CheckedMap_$Lambda$1 : NSObject <JavaUtilFunctionBiFunction>
{
    JavaUtilCollections_CheckedMap *this$0_;
    id <JavaUtilFunctionBiFunction> val$func_;
}

- (void)dealloc;
- (id)andThenWithJavaUtilFunctionFunction:(id)arg1;
- (id)applyWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

