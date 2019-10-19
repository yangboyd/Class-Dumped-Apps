//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

@class NSMapTable;

@interface DCDPortalViewManager : RCTViewManager
{
    long long _nextId;
    NSMapTable *_views;
}

+ (id)propConfig_portal;
+ (const struct RCTMethodInfo *)__rct_export__680;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)set_portal:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)viewWithId:(id)arg1;
- (void)unregisterView:(id)arg1;
- (long long)registerView:(id)arg1;
- (id)view;
- (id)shadowView;
- (void)invalidate;
- (id)init;

@end

