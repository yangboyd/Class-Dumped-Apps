//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCFriendsFeedServices, SCServicesExposer, SCStartupCompleteScope, SCUserSessionScope;

@interface SCFriendsFeedRetryerEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCFriendsFeedServices *_friendsFeedServices;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_feedRetryerServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *feedRetryerServicesExposer; // @synthesize feedRetryerServicesExposer=_feedRetryerServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCFriendsFeedServices *friendsFeedServices; // @synthesize friendsFeedServices=_friendsFeedServices;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end

