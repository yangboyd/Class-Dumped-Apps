//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContactPermissionRequestScope, SCServicesExposer;

@interface SCLegacyContactPermissionRequestEntryPoint : SCEntryPoint
{
    SCContactPermissionRequestScope *_contactPermissionRequestScope;
    SCServicesExposer *_contactPermissionRequestServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *contactPermissionRequestServicesExposer; // @synthesize contactPermissionRequestServicesExposer=_contactPermissionRequestServicesExposer;
@property(nonatomic) __weak SCContactPermissionRequestScope *contactPermissionRequestScope; // @synthesize contactPermissionRequestScope=_contactPermissionRequestScope;
- (void).cxx_destruct;
- (void)begin;

@end

