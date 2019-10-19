//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubFrameworkService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTHubsRendererFactoryImplementation;
@protocol CosmosFeature, SPContextMenuFeature, SPTContainerService, SPTGLUEService, SPTNetworkService, SPTPerformanceMetricsService, SPTPlayerFeature, SPTSessionService, SPTShareFeature, SPTURIDispatchService, SPTUserBehaviourInstrumentationService;

@interface SPTHubFrameworkServiceImplementation : NSObject <SPTService, SPTHubFrameworkService>
{
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkService;
    id <SPTPlayerFeature> _playerService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTContainerService> _containerService;
    id <SPTSessionService> _sessionService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTUserBehaviourInstrumentationService> _ubiService;
    id <SPTShareFeature> _shareService;
    SPTHubsRendererFactoryImplementation *_hubsRendererFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTHubsRendererFactoryImplementation *hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(nonatomic) __weak id <SPTShareFeature> shareService; // @synthesize shareService=_shareService;
@property(nonatomic) __weak id <SPTUserBehaviourInstrumentationService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
- (id)provideHubsEventFactory;
- (id)provideHubsRendererFactory;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

