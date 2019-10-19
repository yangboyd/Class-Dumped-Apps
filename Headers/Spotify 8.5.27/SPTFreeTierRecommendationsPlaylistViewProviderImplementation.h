//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierRecommendationsPlaylistViewProvider-Protocol.h"

@class NSString;
@protocol SPTHubsRendererFactory, SPTHugsFactory, SPTOnDemandService, SPTProductState;

@interface SPTFreeTierRecommendationsPlaylistViewProviderImplementation : NSObject <SPTFreeTierRecommendationsPlaylistViewProvider>
{
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <SPTOnDemandService> _onDemandService;
    id <SPTProductState> _productState;
}

@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
- (void).cxx_destruct;
- (id)recommendedPlaylistFooterForURL:(id)arg1 withContext:(id)arg2;
- (id)providePlaylistHubManager;
- (id)initWithHubsRendererFactory:(id)arg1 hugsFactory:(id)arg2 onDemandService:(id)arg3 productState:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

