//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TimedPrefetchRequestDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SXRequestPrefetcher : NSObject <TimedPrefetchRequestDelegate>
{
    _Bool _shouldUsePrefetchBudget;
    _Bool _disablePrefetching;
    NSMutableDictionary *_untaggedRequests;
    NSMutableDictionary *_taggedRequests;
    unsigned long long _resultsPerPage;
    unsigned long long _remainingPrefetchBudget;
}

+ (id)sharedPrefetcher;
@property(nonatomic) _Bool disablePrefetching; // @synthesize disablePrefetching=_disablePrefetching;
@property(nonatomic) _Bool shouldUsePrefetchBudget; // @synthesize shouldUsePrefetchBudget=_shouldUsePrefetchBudget;
@property(nonatomic) unsigned long long remainingPrefetchBudget; // @synthesize remainingPrefetchBudget=_remainingPrefetchBudget;
@property(nonatomic) unsigned long long resultsPerPage; // @synthesize resultsPerPage=_resultsPerPage;
@property(retain, nonatomic) NSMutableDictionary *taggedRequests; // @synthesize taggedRequests=_taggedRequests;
@property(retain, nonatomic) NSMutableDictionary *untaggedRequests; // @synthesize untaggedRequests=_untaggedRequests;
- (void).cxx_destruct;
- (id)removeTimedRequestWithQuery:(id)arg1;
- (void)timedRequestDidStart:(id)arg1;
- (_Bool)timedRequestShouldStart:(id)arg1;
- (void)cancelAllQueries;
- (id)acceptRequestWithQuery:(id)arg1;
- (void)cancelQueriesWithTag:(id)arg1;
- (void)startQueries:(id)arg1 afterDelay:(double)arg2 withTag:(id)arg3;
- (void)startQuery:(id)arg1 afterDelay:(double)arg2 withTag:(id)arg3;
- (void)startQuery:(id)arg1 afterDelay:(double)arg2;
- (void)startQuery:(id)arg1;
- (void)startNewSearchMission;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

