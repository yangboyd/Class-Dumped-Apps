//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGAddFeatureRequestDelegate-Protocol.h>
#import <Instabug/IBGFeatureAddCommentRequestDelegate-Protocol.h>
#import <Instabug/IBGFeatureRequestDelegate-Protocol.h>
#import <Instabug/IBGFeatureSearchRequestDelegate-Protocol.h>
#import <Instabug/IBGFeatureTimelineRequestDelegate-Protocol.h>
#import <Instabug/IBGFeatureVoteRequestDelegate-Protocol.h>

@class IBGFeatureModelPersistanceManager, NSArray, NSString;
@protocol IBGFeatureRequestsDataStoreDelegate;

@interface IBGFeatureRequestsDataStore : NSObject <IBGFeatureRequestDelegate, IBGFeatureTimelineRequestDelegate, IBGFeatureVoteRequestDelegate, IBGFeatureSearchRequestDelegate, IBGFeatureAddCommentRequestDelegate, IBGAddFeatureRequestDelegate>
{
    long long _filter;
    long long _sort;
    id <IBGFeatureRequestsDataStoreDelegate> _delegate;
    IBGFeatureModelPersistanceManager *_persistence;
    NSArray *_searchResults;
}

@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) IBGFeatureModelPersistanceManager *persistence; // @synthesize persistence=_persistence;
@property(nonatomic) __weak id <IBGFeatureRequestsDataStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(nonatomic) long long filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)addFeatureRequestDone:(id)arg1 isSuccess:(_Bool)arg2 featureRequest:(id)arg3;
- (void)addCommentRequestDone:(id)arg1 isSuccess:(_Bool)arg2 comment:(id)arg3;
- (void)featureSearchRequestDone:(id)arg1 isSuccess:(_Bool)arg2 withFeatures:(id)arg3 hasNextPage:(_Bool)arg4;
- (void)featureVoteRequestDone:(id)arg1 isSuccess:(_Bool)arg2 votedUp:(_Bool)arg3 featureRequest:(id)arg4;
- (void)featureTimelineRequestDone:(id)arg1 isSuccess:(_Bool)arg2 featureIdentifier:(int)arg3 comments:(id)arg4;
- (void)featureRequestDone:(id)arg1 isSuccess:(_Bool)arg2 withFeatures:(id)arg3 hasNextPage:(_Bool)arg4;
- (id)mockSearchInArray:(id)arg1 withString:(id)arg2;
- (id)addCommentRequest:(id)arg1 withEmail:(id)arg2;
- (id)searchRequestWithString:(id)arg1 atPage:(unsigned long long)arg2;
- (id)voteRequestOnFeature:(id)arg1 voteUp:(_Bool)arg2;
- (id)featureDetailRequestWithIdentifier:(int)arg1;
- (id)featureRequestsListRequestAtPage:(unsigned long long)arg1;
- (void)pushRequest:(id)arg1;
- (_Bool)isSearchStringEmpty:(id)arg1;
- (_Bool)shouldPurgeForFetchAtPage:(unsigned long long)arg1;
- (void)purgeAll;
- (void)addFeatureRequestWithTitle:(id)arg1 description:(id)arg2 creatorName:(id)arg3 creatorEmail:(id)arg4;
- (void)addCommentToFeature:(id)arg1 withBody:(id)arg2 commenterName:(id)arg3 email:(id)arg4;
- (void)searchFeatureRequestsWithString:(id)arg1 atPage:(unsigned long long)arg2;
- (void)voteOnFeature:(id)arg1 voteUp:(_Bool)arg2;
- (void)fetchFeatureWithIdentifier:(int)arg1;
- (void)fetchFeaturesAtPage:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

