//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFSTwitterLocation;
@protocol TFNTwitterPlaceFetcherOperation;

@protocol TFNTwitterPlaceFetcher <NSObject>
- (id <TFNTwitterPlaceFetcherOperation>)searchPlacesWithLocation:(TFSTwitterLocation *)arg1 query:(NSString *)arg2 queryType:(long long)arg3 response:(void (^)(TFSTwitterPlaceResponse *, NSError *))arg4;
- (id <TFNTwitterPlaceFetcherOperation>)fetchPlacesWithLocation:(TFSTwitterLocation *)arg1 queryType:(long long)arg2 includeLatLonParams:(_Bool)arg3 response:(void (^)(TFSTwitterPlaceResponse *, NSError *))arg4;
@end

