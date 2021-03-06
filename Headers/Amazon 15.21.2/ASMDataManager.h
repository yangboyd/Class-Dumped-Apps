//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSingleton.h"

@class ASMAvailabilityChecker, ASMDataLoader, ASMMenuOverrideManager, ASMMetrics, ASMSmileModeStateCache;

@interface ASMDataManager : AWSingleton
{
    ASMDataLoader *_dataLoader;
    ASMMetrics *_metrics;
    ASMMenuOverrideManager *_menuOverrideManager;
    ASMAvailabilityChecker *_availabilityChecker;
    ASMSmileModeStateCache *_smileModeStateCache;
}

+ (id)sharedInstance;
@property(readonly) ASMSmileModeStateCache *smileModeStateCache; // @synthesize smileModeStateCache=_smileModeStateCache;
@property(readonly) ASMAvailabilityChecker *availabilityChecker; // @synthesize availabilityChecker=_availabilityChecker;
@property(readonly) ASMMenuOverrideManager *menuOverrideManager; // @synthesize menuOverrideManager=_menuOverrideManager;
@property(readonly, nonatomic) ASMMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain) ASMDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)initForTestingWithDataLoader:(id)arg1 withMetrics:(id)arg2 withMenuOverrideManager:(id)arg3 withAvailabilityChecker:(id)arg4;
- (_Bool)p_didMarketplaceChange:(id)arg1;
- (_Bool)p_isUpdateAppStatusCallRequiredForAppStatus:(id)arg1 withNewStatus:(_Bool)arg2;
- (void)p_refreshUIForUpdate;
- (id)p_refreshWithData:(id)arg1 forClass:(Class)arg2;
- (void)p_refreshMenu;
- (void)localizationDidChange:(id)arg1;
- (void)localizationWillChange:(id)arg1;
- (void)moduleContextDidLoad:(id)arg1;
- (void)userSignedOut;
- (void)userSignedIn;
- (void)refreshSmileData;
- (void)refreshWithVerifiedData:(id)arg1 forClass:(Class)arg2;
- (_Bool)setNotificationSubscription:(id)arg1 withVerifiedStatus:(_Bool)arg2;
- (id)enableNotificationSubscription:(id)arg1;
- (void)setSmileModeStatus:(_Bool)arg1 withUpdateReason:(unsigned long long)arg2 withOutOfComplianceCriteria:(id)arg3;
- (id)loadSmileData;
- (id)initWithDataLoader:(id)arg1 withMetrics:(id)arg2 withMenuOverrideManager:(id)arg3 withAvailabilityChecker:(id)arg4;
- (id)init;

@end

