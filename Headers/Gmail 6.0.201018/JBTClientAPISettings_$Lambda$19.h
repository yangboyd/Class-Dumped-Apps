//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatDaggerFrozen_Modifier-Protocol.h"

@class JBTCBigTopCommonEnums_Codebase, JBTCBigTopCommonEnums_DeviceFormFactor, JBTCBigTopCommonEnums_DeviceOs, NSString;

@interface JBTClientAPISettings_$Lambda$19 : NSObject <ComGoogleAppsXplatDaggerFrozen_Modifier>
{
    int val$buildChangelist_;
    NSString *val$buildLabel_;
    JBTCBigTopCommonEnums_Codebase *val$codebase_;
    JBTCBigTopCommonEnums_DeviceFormFactor *val$deviceFormFactor_;
    NSString *val$deviceModel_;
    JBTCBigTopCommonEnums_DeviceOs *val$deviceOs_;
    NSString *val$campaignId_;
}

- (void)dealloc;
- (id)modifyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

