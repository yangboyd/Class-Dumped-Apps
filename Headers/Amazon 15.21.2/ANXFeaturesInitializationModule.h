//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIAppEventsListenerProtocol-Protocol.h"
#import "AMIModule-Protocol.h"

@class AMIModuleContext, NSMutableArray, NSString, WNDModule;
@protocol ANXWeblabTriggerService;

@interface ANXFeaturesInitializationModule : NSObject <AMIModule, AMIAppEventsListenerProtocol>
{
    _Bool _appStartupFinished;
    AMIModuleContext *_context;
    NSMutableArray *_criticalModules;
    NSMutableArray *_modules;
    NSMutableArray *_afterStartupCallbacks;
    id <ANXWeblabTriggerService> _weblabService;
    WNDModule *_wndModule;
}

+ (id)sharedModule;
@property(retain, nonatomic) WNDModule *wndModule; // @synthesize wndModule=_wndModule;
@property(retain, nonatomic) id <ANXWeblabTriggerService> weblabService; // @synthesize weblabService=_weblabService;
@property(retain, nonatomic) NSMutableArray *afterStartupCallbacks; // @synthesize afterStartupCallbacks=_afterStartupCallbacks;
@property(retain, nonatomic) NSMutableArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) NSMutableArray *criticalModules; // @synthesize criticalModules=_criticalModules;
@property(retain, nonatomic) AMIModuleContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool appStartupFinished; // @synthesize appStartupFinished=_appStartupFinished;
- (void).cxx_destruct;
- (void)addAfterAppStartupCallback:(id)arg1;
- (void)appDidFinishStartup;
- (void)startModuleWithContext:(id)arg1;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

