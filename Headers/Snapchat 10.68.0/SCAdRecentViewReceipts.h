//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface SCAdRecentViewReceipts : NSObject
{
    NSMutableArray *_recentViewReceipts;
    NSMutableDictionary *_recentViewReceiptToViewedTimestamp;
}

- (void).cxx_destruct;
- (void)_dequeueExpiredViewReceipts;
- (id)recentViewReceipts;
- (void)enqueueViewReceipt:(id)arg1;
- (id)init;

@end

