//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCGraphene;

@interface SCFriendsFeedsComparisonGrapheneLogger : NSObject <SCTraceEnabled>
{
    id <SCGraphene> _grapheneLogger;
}

- (void).cxx_destruct;
- (void)_logSentSnapsStateMismatch:(id)arg1;
- (void)_logSnapsMismatch:(id)arg1;
- (void)_logSequenceNumberMismatch:(id)arg1;
- (void)_logLastEventUpdateTimestampGreater:(id)arg1;
- (void)_logGroupVersionGreater:(id)arg1;
- (void)_logConversationFeedEntryEquality:(id)arg1;
- (void)_logFeedEntriesOrderComparison:(id)arg1;
- (void)_logFeedEntriesSetComparison:(id)arg1;
- (void)_logOverallDiscrepancy:(id)arg1;
- (void)performInvalidationLoggingWithReason:(long long)arg1 oldFetchContextBeingDropped:(id)arg2 newTriggerType:(long long)arg3;
- (void)performComparisonLoggingWithParams:(id)arg1;
- (id)initWithGrapheneLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

