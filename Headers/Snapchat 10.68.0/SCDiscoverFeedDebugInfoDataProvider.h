//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SCQueuePerformer;

@interface SCDiscoverFeedDebugInfoDataProvider : NSObject
{
    NSDictionary *_feedTypeToQueryDebugInfo;
    NSDictionary *_feedTypeToRerankDebugInfo;
    SCQueuePerformer *_dataUpdatePerformer;
}

- (void).cxx_destruct;
- (void)_updateRerankDebugInfoWithFeedType:(unsigned long long)arg1 debugHtml:(id)arg2;
- (void)_updateQueryDebugInfoWithFeedType:(unsigned long long)arg1 debugHtml:(id)arg2 shouldAppend:(_Bool)arg3;
- (void)updateRerankDebugInfoWithFeedType:(unsigned long long)arg1 debugHtml:(id)arg2;
- (void)updateQueryDebugInfoWithFeedType:(unsigned long long)arg1 debugHtml:(id)arg2 shouldAppend:(_Bool)arg3;
- (void)debugHtmlWithFeedType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

