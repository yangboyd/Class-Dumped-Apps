//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDPCommonJSBridgeModule-Protocol.h"

@class BDPIndicatorView, NSString, UIViewController;

@interface BDPJSBindingUIWidgetModule : NSObject <BDPCommonJSBridgeModule>
{
    UIViewController *_controller;
    BDPIndicatorView *_toastView;
}

+ (id)methodLookup;
+ (void)bootstrapLaunch;
@property(nonatomic) __weak BDPIndicatorView *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)showActionSheet:(id)arg1;
- (id)showModal:(id)arg1;
- (id)hideToast;
- (id)showToast:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

