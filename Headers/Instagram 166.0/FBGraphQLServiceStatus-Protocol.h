//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol FBGraphQLServiceStatus
@property(readonly, nonatomic) struct FBGraphQLAdaptiveSummary adaptiveSummary;
@property(readonly, nonatomic) struct FBConsistencySyncGraphQLSummary consistencySyncSummary;
@property(readonly, nonatomic) struct FBCacheGraphQLSummary cacheSummary;
@property(readonly, nonatomic) struct FBGraphQLRequestSummary httpRequestSummary;
@property(readonly, nonatomic) long long source;
@property(readonly, nonatomic) _Bool isNetworkComplete;
@property(readonly, nonatomic) _Bool isFinal;
@end

