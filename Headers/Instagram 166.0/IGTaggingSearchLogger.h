//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGTaggingSearchLogger : NSObject
{
}

+ (void)logCancelTaggingSearchWithUserSession:(id)arg1 navigationAnalyticsContext:(id)arg2 taggingMode:(long long)arg3 productTaggingSessionID:(id)arg4;
+ (void)logProductTaggingLoadFailureWithUserSession:(id)arg1 taggingSessionId:(id)arg2 sourceID:(id)arg3 sourceType:(id)arg4 errorMessage:(id)arg5 productTaggingFlowType:(long long)arg6 navigationAnalyticsContext:(id)arg7;
+ (void)logProductTaggingLoadSuccessWithUserSession:(id)arg1 taggingSessionId:(id)arg2 sourceID:(id)arg3 sourceType:(id)arg4 sourceName:(id)arg5 resultCount:(long long)arg6 isInitialLoad:(_Bool)arg7 hasMoreResults:(_Bool)arg8 productTaggingFlowType:(long long)arg9 navigationAnalyticsContext:(id)arg10;
+ (void)logOpenProductTaggingSearchWithUserSession:(id)arg1 taggingSessionId:(id)arg2 selectedSourceId:(id)arg3 selectedSourceType:(id)arg4 productTaggingFlowType:(long long)arg5 navigationAnalyticsContext:(id)arg6;
+ (void)logOpenUserTaggingSearchWithUserSession:(id)arg1 module:(id)arg2 priorModule:(id)arg3;

@end

