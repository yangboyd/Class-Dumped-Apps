//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUnauthenticatedScope_SCRegistrationScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_registrationScopeContainer;
}

@property(readonly, nonatomic) SCServicesContainer *registrationScopeContainer; // @synthesize registrationScopeContainer=_registrationScopeContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end

