//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class FIRMessagingTopicBatch, NSDate, NSMutableArray, NSMutableSet;
@protocol FIRMessagingPendingTopicsListDelegate;

@interface FIRMessagingPendingTopicsList : NSObject <NSSecureCoding>
{
    NSObject<FIRMessagingPendingTopicsListDelegate> *_delegate;
    NSDate *_archiveDate;
    NSMutableArray *_topicBatches;
    FIRMessagingTopicBatch *_currentBatch;
    NSMutableSet *_topicsInFlight;
}

+ (_Bool)supportsSecureCoding;
+ (void)pruneTopicBatches:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *topicsInFlight; // @synthesize topicsInFlight=_topicsInFlight;
@property(retain, nonatomic) FIRMessagingTopicBatch *currentBatch; // @synthesize currentBatch=_currentBatch;
@property(retain, nonatomic) NSMutableArray *topicBatches; // @synthesize topicBatches=_topicBatches;
@property(retain, nonatomic) NSDate *archiveDate; // @synthesize archiveDate=_archiveDate;
@property(nonatomic) __weak NSObject<FIRMessagingPendingTopicsListDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)beginUpdateForCurrentBatchTopic:(id)arg1;
- (_Bool)subscriptionErrorIsRecoverable:(id)arg1;
- (void)resumeOperationsIfNeeded;
- (void)addOperationForTopic:(id)arg1 withAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long numberOfBatches;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

