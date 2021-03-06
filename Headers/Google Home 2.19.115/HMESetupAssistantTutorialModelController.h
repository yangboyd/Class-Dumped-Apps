//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESetupAssistantTutorialModelController-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol GCAConfigurationFlags, GHCAppDataService, HMETAGContainer;

@interface HMESetupAssistantTutorialModelController : NSObject <HMESetupAssistantTutorialModelController>
{
    id <HMETAGContainer> _tagContainer;
    NSMutableDictionary *_models;
    id <GHCAppDataService> _service;
    NSMutableDictionary *_foyerModels;
    id <GCAConfigurationFlags> _experimentFlags;
}

@property(readonly, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
@property(readonly, nonatomic) NSMutableDictionary *foyerModels; // @synthesize foyerModels=_foyerModels;
@property(readonly, nonatomic) id <GHCAppDataService> service; // @synthesize service=_service;
@property(readonly, nonatomic) NSMutableDictionary *models; // @synthesize models=_models;
@property(readonly, nonatomic) id <HMETAGContainer> tagContainer; // @synthesize tagContainer=_tagContainer;
- (void).cxx_destruct;
- (id)learnFlowsForLanguage:(id)arg1;
- (id)learnFlowModelForDeviceID:(id)arg1;
- (id)learnFlowsForLanguage:(id)arg1 linkedDevices:(id)arg2 device:(id)arg3 linkedAudioApplications:(id)arg4 roomTypeID:(id)arg5;
- (void)preloadLearnFlowsForLanguage:(id)arg1 deviceID:(id)arg2;
- (id)initWithTAGContainer:(id)arg1 service:(id)arg2 experimentFlags:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

