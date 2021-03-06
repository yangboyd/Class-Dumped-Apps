//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserSessionPayload-Protocol.h>

@class NSOrderedSet, NSString, UIApplication;

@interface IGShortcutSettingPayload : NSObject <IGUserSessionPayload>
{
    NSOrderedSet *_activeUsers;
    UIApplication *_application;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSOrderedSet *activeUsers; // @synthesize activeUsers=_activeUsers;
- (id)initWithActiveUsers:(id)arg1 application:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

