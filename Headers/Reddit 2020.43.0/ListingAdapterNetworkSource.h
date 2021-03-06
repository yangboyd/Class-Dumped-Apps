//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingNetworkSource.h"

@class Listing;

@interface ListingAdapterNetworkSource : ListingNetworkSource
{
    Listing *_listing;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Listing *listing; // @synthesize listing=_listing;
- (id)tags;
- (id)debugDescription;
- (id)defaultParameters;
- (id)parameters;
- (id)beforeID;
- (id)afterID;
- (_Bool)hasMoreContent;
- (void)parseMoreData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)fetchListingDataWithParameters:(id)arg1 correlationId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithService:(id)arg1 listing:(id)arg2;

@end

