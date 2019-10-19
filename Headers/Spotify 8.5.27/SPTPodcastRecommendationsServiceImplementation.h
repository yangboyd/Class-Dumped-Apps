//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRecommendationsService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTFeatureFlaggingService, SPTGLUEService, SPTHubFrameworkService, SPTPodcastRecommendationsViewProvider, SPTSessionService;

@interface SPTPodcastRecommendationsServiceImplementation : NSObject <SPTPodcastRecommendationsService>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTPodcastRecommendationsViewProvider> _recommendationsViewProvider;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPodcastRecommendationsViewProvider> recommendationsViewProvider; // @synthesize recommendationsViewProvider=_recommendationsViewProvider;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideRecommendationsViewProvider;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

