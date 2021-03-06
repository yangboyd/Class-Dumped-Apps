//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGObjectStores, IGUser;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGUserFeatureSets;

@interface IGDirectPendingInboxNetworker : NSObject
{
    id <IGAPIClient> _apiClient;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGUser *_user;
    IGObjectStores *_objectStores;
    id <IGUserFeatureSets> _featureSets;
}

- (void).cxx_destruct;
- (void)_handlePendingInboxResponse:(id)arg1 threadFilter:(id)arg2 rankedRequestsEnabled:(_Bool)arg3 loadTime:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_remoteFetchInboxDataFromFirstPage:(_Bool)arg1 threadFilter:(id)arg2 pagingCursor:(id)arg3 rankedRequestsEnabled:(_Bool)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)fetchPendingInboxWithSortType:(long long)arg1 fromFirstPage:(_Bool)arg2 withPagingCursor:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (id)initWithAPIClient:(id)arg1 user:(id)arg2 objectStores:(id)arg3 featureSets:(id)arg4 analyticsLogger:(id)arg5;

@end

