//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataAdsApiAdsManager-Protocol.h"
#import "ComGoogleAppsXplatStubThrowingStub-Protocol.h"

@class NSString;

@interface ComGoogleAppsBigtopDataAdsApiThrowingStub_AdsManager : NSObject <ComGoogleAppsXplatStubThrowingStub, ComGoogleAppsBigtopDataAdsApiAdsManager>
{
}

- (id)getAppState;
- (void)setAppStateWithComGoogleAppsBigtopDataAdsApiAppState:(id)arg1;
- (id)getTopPromoTransientStateWithComGoogleAppsBigtopDataItemsItemsProto_GetAdTransientStateRequest:(id)arg1;
- (id)getAdTransientStateWithComGoogleAppsBigtopDataItemsItemsProto_GetAdTransientStateRequest:(id)arg1;
- (id)processTopPromoEventRequestWithComGoogleAppsBigtopDataItemsItemsProto_AdEventRequest:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_TopPromoAnnotation:(id)arg2;
- (id)processAdEventRequestWithComGoogleAppsBigtopDataItemsItemsProto_AdEventRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

