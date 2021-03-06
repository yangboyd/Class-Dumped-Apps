//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIAppEventsListenerProtocol-Protocol.h"
#import "AMIModule-Protocol.h"

@class AMIModuleContext, ArcusManager, NSMutableArray, NSMutableDictionary, NSString;
@protocol AMILocalization, ANPCXIService, ARTRightToLeftService, ASKWeblabService;

@interface DEXPackardNavModule : NSObject <AMIModule, AMIAppEventsListenerProtocol>
{
    id <ANPCXIService> _cxiService;
    NSMutableArray *_allPackardBars;
    id <ARTRightToLeftService> _rightToLeftService;
    id <ASKWeblabService> _weblabService;
    ArcusManager *_arcusManager;
    NSMutableDictionary *_whitelistConfig;
    NSMutableDictionary *_defaultWhitelistConfig;
    id <AMILocalization> _localizationService;
    AMIModuleContext *_context;
}

+ (_Bool)isDebug;
+ (id)sharedModule;
@property(retain, nonatomic) AMIModuleContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
@property(retain, nonatomic) NSMutableDictionary *defaultWhitelistConfig; // @synthesize defaultWhitelistConfig=_defaultWhitelistConfig;
@property(retain, nonatomic) NSMutableDictionary *whitelistConfig; // @synthesize whitelistConfig=_whitelistConfig;
@property(retain, nonatomic) ArcusManager *arcusManager; // @synthesize arcusManager=_arcusManager;
@property(retain, nonatomic) id <ASKWeblabService> weblabService; // @synthesize weblabService=_weblabService;
@property(retain, nonatomic) id <ARTRightToLeftService> rightToLeftService; // @synthesize rightToLeftService=_rightToLeftService;
@property(retain, nonatomic) NSMutableArray *allPackardBars; // @synthesize allPackardBars=_allPackardBars;
@property(retain, nonatomic) id <ANPCXIService> cxiService; // @synthesize cxiService=_cxiService;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *arcusAppId;
- (id)treatmentForWeblab:(id)arg1 shouldTrigger:(_Bool)arg2;
- (_Bool)featureEnabledForWeblab:(id)arg1 shouldTrigger:(_Bool)arg2;
- (_Bool)isCrossBorderInterstitialEnabled;
- (_Bool)autoGPSFlowWeblabEnabledWithTrigger:(_Bool)arg1;
- (_Bool)glowDCMUseEnabled:(_Bool)arg1;
- (_Bool)jsonExceptionHandlingFixEnabled:(_Bool)arg1;
- (_Bool)packardFixForLabelFetch:(_Bool)arg1;
- (_Bool)gpsUpdateLocationEnabled;
- (_Bool)isPageInWhitelist:(id)arg1;
- (id)getConfigValue:(id)arg1 pageTypeOrNodeString:(id)arg2;
- (id)getConfigValue:(id)arg1;
- (id)appearanceManager;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (void)initWhitelistConfigWithDefault;
- (void)refreshArcusConfig;
- (_Bool)shouldShowGLOWSubnav;
- (void)initialize:(id)arg1;
- (void)appDidFinishStartup;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

