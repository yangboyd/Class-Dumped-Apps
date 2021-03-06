//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGTaggingProductSearchDataSource-Protocol.h>

@class IGShoppingNavigationAnalyticsContext, IGShoppingSearchProductListDataSourceConfig, IGShoppingSearchProductResponse, IGStatefulNetworker, IGUserSession, NSSet, NSString;
@protocol IGShoppingSearchProductListDataSourceDelegate;

@interface IGShoppingSearchProductListDataSource : NSObject <IGTaggingProductSearchDataSource>
{
    IGUserSession *_userSession;
    IGShoppingSearchProductListDataSourceConfig *_config;
    IGStatefulNetworker *_networker;
    IGShoppingSearchProductResponse *_dataModel;
    NSString *_selectedSourcePk;
    NSString *_query;
    NSSet *_suggestedItemIds;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    NSString *_taggingSessionId;
    long long _surfaceType;
    id <IGShoppingSearchProductListDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingSearchProductListDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logSearchEventWithIsSuccess:(_Bool)arg1 initialLoad:(_Bool)arg2;
- (void)_requestFeedWithAction:(long long)arg1 isPullToRefresh:(_Bool)arg2;
- (void)_feedResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_fetchStateUpdated:(id)arg1;
- (_Bool)shouldHandleFetchFailureGracefully;
- (id)fetchState;
- (id)productSource;
- (_Bool)isLoading;
- (id)filteredResults;
- (void)tryLoadingMoreResults;
- (void)filterWithQuery:(id)arg1 isPullToRefresh:(_Bool)arg2;
- (id)rankToken;
- (long long)numberOfProducts;
- (_Bool)moreResultsAvailable;
- (id)initWithUserSession:(id)arg1 taggingSessionId:(id)arg2 config:(id)arg3 surfaceType:(long long)arg4 suggestedItemIds:(id)arg5 navigationAnalyticsContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

