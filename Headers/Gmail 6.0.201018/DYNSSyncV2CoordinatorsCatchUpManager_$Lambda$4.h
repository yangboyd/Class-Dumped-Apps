//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncCallable-Protocol.h"

@class DYNSCommonGroupId, DYNSSyncV2CoordinatorsCatchUpManager, JavaUtilOptional, NSString;

@interface DYNSSyncV2CoordinatorsCatchUpManager_$Lambda$4 : NSObject <ComGoogleCommonUtilConcurrentAsyncCallable>
{
    DYNSSyncV2CoordinatorsCatchUpManager *this$0_;
    DYNSCommonGroupId *val$groupId_;
    JavaUtilOptional *val$groupEntityManagerOptional_;
}

- (void)dealloc;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

