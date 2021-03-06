//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GBTSideNavManagerInterfaceDelegate-Protocol.h"
#import "GBTThemeable-Protocol.h"

@class NSString, PanelProxy;

@interface PanelViewController : UIViewController <GBTSideNavManagerInterfaceDelegate, GBTThemeable>
{
    PanelProxy *_proxy;
}

+ (void)setSharedPanelViewController:(id)arg1;
+ (void)releaseSharedPanelViewController;
+ (id)sharedPanelViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) PanelProxy *proxy; // @synthesize proxy=_proxy;
- (void)setProxy:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)panelVCDidRotateFromOrientation:(long long)arg1;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)gbt_applyTheme:(id)arg1;
- (id)parentViewControllerForSideViewController;
- (void)dealloc;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setupInitialViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

