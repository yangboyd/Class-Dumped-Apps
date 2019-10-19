//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCOptionalScopeExposer, SCServicesExposer;

@interface SCStartupCompletedEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCServicesExposer *_startupCompletionServicesExposer;
    SCOptionalScopeExposer *_startupCompletedScopeExposer;
}

@property(retain, nonatomic) SCOptionalScopeExposer *startupCompletedScopeExposer; // @synthesize startupCompletedScopeExposer=_startupCompletedScopeExposer;
@property(retain, nonatomic) SCServicesExposer *startupCompletionServicesExposer; // @synthesize startupCompletionServicesExposer=_startupCompletionServicesExposer;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

