//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSString, UIViewController, UIWindow;

@interface AWEBindPhoneAlertManager : NSObject <AWEUserMessage>
{
    UIWindow *_window;
    UIWindow *_lastKeyWindow;
    UIViewController *_windowRootViewController;
}

+ (_Bool)shouldShowAlertWithType:(unsigned long long)arg1;
+ (void)showBindPhoneAlertWithType:(unsigned long long)arg1 confirmBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3 presentHandler:(CDUnknownBlockType)arg4;
+ (void)showBindPhoneAlertWithType:(unsigned long long)arg1 confirmBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
+ (_Bool)checkAndShowBindPhoneAlertWithType:(unsigned long long)arg1 confirmBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
+ (void)start;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *windowRootViewController; // @synthesize windowRootViewController=_windowRootViewController;
@property(retain, nonatomic) UIWindow *lastKeyWindow; // @synthesize lastKeyWindow=_lastKeyWindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)didFinishLogout;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

