//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIModule-Protocol.h"

@class AMIModuleContext, NSString;
@protocol AMILocalization, AMIWeblabBridgeService;

@interface NexusIOSClientModule : NSObject <AMIModule>
{
    AMIModuleContext *_context;
    id <AMIWeblabBridgeService> _weblabBridge;
    id <AMILocalization> _localizationService;
}

@property(nonatomic) __weak id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
@property(nonatomic) __weak id <AMIWeblabBridgeService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
@property(retain, nonatomic) AMIModuleContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (void)logThroughDCMMetricCounterWithName:(id)arg1;
- (void)performValidationOnLogger:(id)arg1;
- (void)startModuleWithContext:(id)arg1;
- (void)saveAssignmentToUserDefaults;
- (_Bool)shouldEnableNexusMetricsCollecting:(id)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

