//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface _TtC7NordVPN18RootViewController : UIViewController
{
    // Error parsing type: , name: mapContainerView
    // Error parsing type: , name: mapShadowView
    // Error parsing type: , name: reachability
    // Error parsing type: , name: dimmingView
    // Error parsing type: , name: connectionStatusBar
    // Error parsing type: , name: mapViewController
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onVPNProtocolChange;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIView *mapShadowView; // @synthesize mapShadowView;
@property(nonatomic) __weak UIView *mapContainerView; // @synthesize mapContainerView;

@end

