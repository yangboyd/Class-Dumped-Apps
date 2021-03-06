//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GTMSessionFetcherService, NSString;

@interface GMSPabloClient : NSObject
{
    NSString *_APIKey;
    GMSx_GTMSessionFetcherService *_fetcherService;
}

+ (id)requestWithComponents:(id)arg1 requestSource:(id)arg2;
+ (id)errorFromFailureReason:(id)arg1;
+ (id)errorFromUnderlyingError:(id)arg1 code:(long long)arg2;
@property(readonly, nonatomic) GMSx_GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(readonly, copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
- (void).cxx_destruct;
- (void)fetchRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)photoRequestForMetadata:(id)arg1 maxSize:(struct CGSize)arg2 requestSource:(id)arg3;
- (id)placeLikelihoodListRequestForLocation:(id)arg1 placeFields:(unsigned long long)arg2 requestSource:(id)arg3;
- (id)autocompletePredictionsRequest:(id)arg1 bounds:(id)arg2 boundsMode:(unsigned long long)arg3 filter:(id)arg4 sessionToken:(id)arg5 requestSource:(id)arg6;
- (id)placeDetailsRequest:(id)arg1 placeFields:(unsigned long long)arg2 sessionToken:(id)arg3 requestSource:(id)arg4;
- (id)URLComponentsForPath:(id)arg1 sessionToken:(id)arg2;
- (id)stringForSessionToken:(id)arg1;
- (void)fetchPhotoForMetadata:(id)arg1 fetcherService:(id)arg2 constrainedSize:(struct CGSize)arg3 scale:(double)arg4 requestSource:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)fetchPlaceLikelihoodListForLocation:(id)arg1 placeFields:(unsigned long long)arg2 requestSource:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)fetchAutocompletePredictionsForQuery:(id)arg1 bounds:(id)arg2 boundsMode:(unsigned long long)arg3 filter:(id)arg4 sessionToken:(id)arg5 requestSource:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)fetchPlaceDetailsForPlaceID:(id)arg1 placeFields:(unsigned long long)arg2 sessionToken:(id)arg3 requestSource:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)initWithAPIKey:(id)arg1 fetcherService:(id)arg2;

@end

