//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContactPermissionRequestScope, SCContactPermissionRequestServices, SCContactPermissionRequestWorkflow;

@interface SCContactPermissionRequestEntryPoint : SCEntryPoint
{
    SCContactPermissionRequestWorkflow *_workflow;
    SCContactPermissionRequestServices *_contactPermissionRequestServices;
    SCContactPermissionRequestScope *_contactPermissionRequestScope;
}

@property(nonatomic) __weak SCContactPermissionRequestScope *contactPermissionRequestScope; // @synthesize contactPermissionRequestScope=_contactPermissionRequestScope;
@property(nonatomic) __weak SCContactPermissionRequestServices *contactPermissionRequestServices; // @synthesize contactPermissionRequestServices=_contactPermissionRequestServices;
- (void).cxx_destruct;
- (void)begin;

@end

