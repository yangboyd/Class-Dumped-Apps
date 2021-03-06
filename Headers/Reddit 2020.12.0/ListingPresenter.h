//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ListingNetworkSourceDelegate-Protocol.h"

@class ListingNetworkSource, NSArray, NSString, NSUUID, RedditService, _TtC6Tracer4Span, _TtC6Tracer5Trace;
@protocol ListingPresentable;

@interface ListingPresenter : NSObject <ListingNetworkSourceDelegate>
{
    _Bool _didProvideListingContentToListingPresentable;
    id <ListingPresentable> _presentable;
    RedditService *_service;
    ListingNetworkSource *_listingNetworkSource;
    NSArray *_currentObjects;
    unsigned long long _numPagesFetched;
    _TtC6Tracer5Trace *_activeTrace;
    _TtC6Tracer4Span *_primaryListingFetchSpan;
    NSUUID *_fetchedCorrelationId;
}

@property(retain, nonatomic) NSUUID *fetchedCorrelationId; // @synthesize fetchedCorrelationId=_fetchedCorrelationId;
@property(nonatomic) _Bool didProvideListingContentToListingPresentable; // @synthesize didProvideListingContentToListingPresentable=_didProvideListingContentToListingPresentable;
@property(retain, nonatomic) _TtC6Tracer4Span *primaryListingFetchSpan; // @synthesize primaryListingFetchSpan=_primaryListingFetchSpan;
@property(retain, nonatomic) _TtC6Tracer5Trace *activeTrace; // @synthesize activeTrace=_activeTrace;
@property(nonatomic) unsigned long long numPagesFetched; // @synthesize numPagesFetched=_numPagesFetched;
@property(copy, nonatomic) NSArray *currentObjects; // @synthesize currentObjects=_currentObjects;
@property(retain, nonatomic) ListingNetworkSource *listingNetworkSource; // @synthesize listingNetworkSource=_listingNetworkSource;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <ListingPresentable> presentable; // @synthesize presentable=_presentable;
- (void).cxx_destruct;
- (void)configureWithListingNetworkSource:(id)arg1;
- (unsigned long long)removeObjectFromCurrentObjects:(id)arg1;
- (id)analyticsCorrelationId;
- (void)listingNetworkSourceDidStartFetching:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
@property(readonly, nonatomic) NSString *listingTraceName;
@property(readonly, nonatomic) _TtC6Tracer5Trace *preferredTrace;
- (void)endTracingPagedListingFetch;
- (void)beginTracingPagedListingFetch;
@property(readonly, nonatomic) _Bool isTraced;
- (void)endTracingPrimaryListingFetch;
- (void)beginTracingPrimaryListingFetch;
- (void)fetchMoreContentIfNecessary;
- (void)fetchData;
- (void)presentableWillAppear;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

