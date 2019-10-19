//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGLUEService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTHugsFactoryImplementation;
@protocol GLUETheme, SPTDebugService, SPTNetworkService;

@interface SPTGLUEServiceImplementation : NSObject <SPTGLUEService, SPTService>
{
    id <SPTDebugService> _debugService;
    id <SPTNetworkService> _networkFeature;
    id <GLUETheme> _theme;
    SPTHugsFactoryImplementation *_hubsRendererFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTHugsFactoryImplementation *hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
- (void).cxx_destruct;
- (id)provideHugsFactory;
- (id)provideImageLoaderFactory;
- (id)provideTheme;
- (void)loadHubsRendererIntegration;
- (void)loadStyling;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

