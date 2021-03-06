//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VASForceOrientationViewController.h>

@class UIViewController, VASMRAIDCloseButton;
@protocol VASMRAIDViewControllerDelegate;

@interface VASMRAIDViewController : VASForceOrientationViewController
{
    _Bool _immersiveEnabled;
    UIViewController *_mraidPresentingController;
    id <VASMRAIDViewControllerDelegate> _delegate;
    VASMRAIDCloseButton *_closeButton;
}

+ (id)logger;
- (void).cxx_destruct;
@property(retain, nonatomic) VASMRAIDCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic, getter=isImmersiveEnabled) _Bool immersiveEnabled; // @synthesize immersiveEnabled=_immersiveEnabled;
@property(nonatomic) __weak id <VASMRAIDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *mraidPresentingController; // @synthesize mraidPresentingController=_mraidPresentingController;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)close;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithOrientationProperties:(id)arg1;

@end

