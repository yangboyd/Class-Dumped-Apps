//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/CMRAutomationConnectionPreferencesNavigation-Protocol.h>

@class NSString;

@interface CMRAutomationConnectionPreferencesNavigationCppProxy : NSObject <CMRAutomationConnectionPreferencesNavigation>
{
    struct Handle<std::__1::shared_ptr<core::AutomationConnectionPreferencesNavigation>, std::__1::shared_ptr<core::AutomationConnectionPreferencesNavigation>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const shared_ptr_c7ba5eef *)cppRef;
- (id)initWithCpp:(const shared_ptr_c7ba5eef *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

