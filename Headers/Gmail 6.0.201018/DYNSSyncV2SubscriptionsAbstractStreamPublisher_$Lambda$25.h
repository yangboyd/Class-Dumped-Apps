//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilFunctionBiConsumer-Protocol.h"

@class ComGoogleCommonCollectImmutableList_Builder, DYNSCommonTopicId, DYNSSyncV2SubscriptionsAbstractStreamPublisher, NSString;

@interface DYNSSyncV2SubscriptionsAbstractStreamPublisher_$Lambda$25 : NSObject <JavaUtilFunctionBiConsumer>
{
    DYNSSyncV2SubscriptionsAbstractStreamPublisher *this$0_;
    ComGoogleCommonCollectImmutableList_Builder *val$paginationFutures_;
    DYNSCommonTopicId *val$topicId_;
}

- (void)dealloc;
- (id)andThenWithJavaUtilFunctionBiConsumer:(id)arg1;
- (void)acceptWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

