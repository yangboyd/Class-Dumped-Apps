//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXAppStartStore, NSString, NSUserDefaults;
@protocol AMILocalization, AMIWeblabBridgeService, ANXMetricsService, ASKWeblabService;

@interface CXIWeblabMetricsLogger : NSObject
{
    NSUserDefaults *_amiUserDefaults;
    ANXAppStartStore *_fileStore;
    id <ANXMetricsService> _metricsService;
    id <AMIWeblabBridgeService> _weblabService;
    id <ASKWeblabService> _shopKitWeblabService;
    id <AMILocalization> _localizationService;
    NSUserDefaults *_standardUserDefaults;
    NSString *_currentMarketplace;
    NSString *_stdValueBeforeMarketplaceChange;
    NSString *_amiValueBeforeMarketplaceChange;
}

@property(retain, nonatomic) NSString *amiValueBeforeMarketplaceChange; // @synthesize amiValueBeforeMarketplaceChange=_amiValueBeforeMarketplaceChange;
@property(retain, nonatomic) NSString *stdValueBeforeMarketplaceChange; // @synthesize stdValueBeforeMarketplaceChange=_stdValueBeforeMarketplaceChange;
@property(retain, nonatomic) NSString *currentMarketplace; // @synthesize currentMarketplace=_currentMarketplace;
@property(retain, nonatomic) NSUserDefaults *standardUserDefaults; // @synthesize standardUserDefaults=_standardUserDefaults;
@property(retain, nonatomic) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
@property(retain, nonatomic) id <ASKWeblabService> shopKitWeblabService; // @synthesize shopKitWeblabService=_shopKitWeblabService;
@property(retain, nonatomic) id <AMIWeblabBridgeService> weblabService; // @synthesize weblabService=_weblabService;
@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) ANXAppStartStore *fileStore; // @synthesize fileStore=_fileStore;
@property(retain, nonatomic) NSUserDefaults *amiUserDefaults; // @synthesize amiUserDefaults=_amiUserDefaults;
- (void).cxx_destruct;
- (_Bool)t1LossLoggingEnabled;
- (void)logT1Loss;
- (void)saveCXIWeblabSyncState;
- (void)runDataIntegrityTests;
- (id)cxiTreatmentInFileStore;
- (id)cxiTreatmentInAMIDefaults;
- (id)cxiTreatmentInStandardDefaults;
- (id)cxiWeblabKeyForCurrentMarketplace;
- (void)logAppLaunchRefmarker:(id)arg1;
- (void)logRefmarker:(id)arg1;
- (void)didChangeMarketplace;
- (void)logCXIWeblabStatusAtAppStart;
- (void)logAppLaunchEvent;
- (_Bool)isAppFirstLaunch;
- (void)savePostFirstLaunchState;
- (id)init;

@end

