//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ListingAnalyticsProtocol-Protocol.h"
#import "ListingNetworkSourceDelegate-Protocol.h"

@class ListingNetworkSource, NSArray, NSDictionary, NSString, NSUUID, RedditService, _TtC6Reddit26ListingNetworkSourceTracer, _TtC6Tracer4Span, _TtC6Tracer5Trace;
@protocol ListingPresentable;

@interface ListingPresenter : NSObject <ListingNetworkSourceDelegate, ListingAnalyticsProtocol>
{
    _Bool _didProvideListingContentToListingPresentable;
    id <ListingPresentable> _presentable;
    RedditService *_service;
    NSArray *_currentObjects;
    unsigned long long _numPagesFetched;
    ListingNetworkSource *_listingNetworkSource;
    NSUUID *_fetchedCorrelationId;
    _TtC6Tracer5Trace *_activeTrace;
    _TtC6Reddit26ListingNetworkSourceTracer *_listingNetworkSourceTracer;
    _TtC6Tracer4Span *_primaryListingFetchSpan;
}

@property(nonatomic) _Bool didProvideListingContentToListingPresentable; // @synthesize didProvideListingContentToListingPresentable=_didProvideListingContentToListingPresentable;
@property(retain, nonatomic) _TtC6Tracer4Span *primaryListingFetchSpan; // @synthesize primaryListingFetchSpan=_primaryListingFetchSpan;
@property(retain, nonatomic) _TtC6Reddit26ListingNetworkSourceTracer *listingNetworkSourceTracer; // @synthesize listingNetworkSourceTracer=_listingNetworkSourceTracer;
@property(retain, nonatomic) _TtC6Tracer5Trace *activeTrace; // @synthesize activeTrace=_activeTrace;
@property(retain, nonatomic) NSUUID *fetchedCorrelationId; // @synthesize fetchedCorrelationId=_fetchedCorrelationId;
@property(retain, nonatomic) ListingNetworkSource *listingNetworkSource; // @synthesize listingNetworkSource=_listingNetworkSource;
@property(nonatomic) unsigned long long numPagesFetched; // @synthesize numPagesFetched=_numPagesFetched;
@property(copy, nonatomic) NSArray *currentObjects; // @synthesize currentObjects=_currentObjects;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <ListingPresentable> presentable; // @synthesize presentable=_presentable;
- (void).cxx_destruct;
- (unsigned long long)removeObjectFromCurrentObjects:(id)arg1;
@property(readonly, nonatomic) NSDictionary *analyticsScrollEventParams;
@property(readonly, nonatomic) NSDictionary *analyticsScreenViewParams;
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, nonatomic) NSString *analyticsCorrelationId;
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
- (void)reloadContentFromNetworkSource;
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

