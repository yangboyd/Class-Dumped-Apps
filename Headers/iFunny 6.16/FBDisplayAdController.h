//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBDisplayAdAdapterControllerDelegate-Protocol.h>

@class FBAdExperienceConfig, FBAdExtraHint, FBApplicationInterfaceOrientationProvider, FBDisplayAdAdapterController, NSString;
@protocol FBAdFunnel, FBDisplayAdControllerDelegate;

@interface FBDisplayAdController : NSObject <FBDisplayAdAdapterControllerDelegate>
{
    _Bool _initialized;
    _Bool _loaded;
    _Bool _started;
    id <FBDisplayAdControllerDelegate> _delegate;
    FBAdExtraHint *_extraHint;
    FBAdExperienceConfig *_adExperienceConfig;
    NSString *_placementID;
    long long _placementType;
    NSString *_bidPayload;
    FBApplicationInterfaceOrientationProvider *_interfaceOrientationProvider;
    FBDisplayAdAdapterController *_adapterController;
    double _requestTime;
    id <FBAdFunnel> _funnel;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBAdFunnel> funnel; // @synthesize funnel=_funnel;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) FBDisplayAdAdapterController *adapterController; // @synthesize adapterController=_adapterController;
@property(retain, nonatomic) FBApplicationInterfaceOrientationProvider *interfaceOrientationProvider; // @synthesize interfaceOrientationProvider=_interfaceOrientationProvider;
@property(copy, nonatomic) NSString *bidPayload; // @synthesize bidPayload=_bidPayload;
@property(nonatomic) long long placementType; // @synthesize placementType=_placementType;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(copy, nonatomic) FBAdExperienceConfig *adExperienceConfig; // @synthesize adExperienceConfig=_adExperienceConfig;
@property(retain, nonatomic) FBAdExtraHint *extraHint; // @synthesize extraHint=_extraHint;
@property(nonatomic) __weak id <FBDisplayAdControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadedAdDidClickWithAdapter:(id)arg1 withURL:(id)arg2 playerHandles:(_Bool)arg3;
- (void)adAdapterControllerDidTimeout:(id)arg1;
- (void)adAdapterControllerAdRequestSuccessful:(id)arg1 requestId:(id)arg2;
- (void)loadDidFailWithAdapter:(id)arg1 atAdRequestStage:(_Bool)arg2 withError:(id)arg3;
- (void)adWithAdapter:(id)arg1 performAction:(unsigned long long)arg2;
- (id)logger;
- (void)startListeningToInterfaceOrientationChanges;
- (void)adapter:(id)arg1 didFailWithError:(id)arg2;
- (void)adapterDidLoad:(id)arg1;
- (void)adapterServerRewardFailed:(id)arg1;
- (void)adapterServerRewardSuccess:(id)arg1;
- (void)notifyAdVideoComplete;
- (void)notifyAdUserClose;
- (void)notifyAdClickThruWithURL:(id)arg1 playerHandles:(_Bool)arg2;
- (void)notifyAdError:(id)arg1;
- (void)notifyAdStopped;
- (void)notifyAdImpression;
- (void)notifyAdViewPresented;
- (void)notifyAdLoaded;
- (_Bool)adExpired;
- (CDStruct_1b6d18a9)adapterDuration;
- (id)getPlacementDefinition;
- (void)unregisterView;
- (void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2;
- (_Bool)passRewardData:(id)arg1;
- (void)refresh;
- (_Bool)startAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (void)startAdapterController:(id)arg1 environment:(id)arg2 rewardData:(id)arg3;
- (void)checkInitialization;
- (void)loadAdWithTemplateID:(long long)arg1 adSize:(struct FBAdSize)arg2 adProvider:(id)arg3 rewardData:(id)arg4 bidPayload:(id)arg5 funnel:(id)arg6;
- (void)loadAdWithTemplateID:(long long)arg1 adSize:(struct FBAdSize)arg2 adProvider:(id)arg3 bidPayload:(id)arg4 funnel:(id)arg5;
- (void)loadAdWithTemplateID:(long long)arg1 adSize:(struct FBAdSize)arg2 rewardData:(id)arg3 bidPayload:(id)arg4 funnel:(id)arg5;
- (void)loadAdWithTemplateID:(long long)arg1 adSize:(struct FBAdSize)arg2 bidPayload:(id)arg3 funnel:(id)arg4;
- (id)initWithPlacementId:(id)arg1 placementType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

