//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SLKAppLaunchManagerInterface-Protocol.h"

@interface SLKAppLaunchManager : NSObject <SLKAppLaunchManagerInterface>
{
    // Error parsing type: , name: isFirstCall
    // Error parsing type: , name: appLaunchPropertiesBuilder
    // Error parsing type: , name: dependenciesProvider
    // Error parsing type: , name: appDidLaunchCommands
    // Error parsing type: , name: appLifecycleObserver
    // Error parsing type: , name: commandExecutionDelegate
}

- (void).cxx_destruct;
- (id)init;
- (void)registerDelegateCall_applicationWillEnterForeground:(id)arg1;
- (void)registerDelegateCall_application:(id)arg1 performActionForShortcut:(id)arg2 shortcutCompletion:(CDUnknownBlockType)arg3;
- (void)registerDelegateCall_applicationDidFinishLaunching:(id)arg1 options:(id)arg2;
- (id)initWithDependenciesProvider:(id)arg1 executionDelegate:(id)arg2;

@end

