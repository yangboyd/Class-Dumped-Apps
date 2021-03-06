//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray;
@protocol LPPeerControllerDelegate;

@interface LPPeerController : UIViewController
{
    _Bool _animated;
    int _direction;
    NSArray *_viewControllers;
    UIViewController *_selectedViewController;
    id <LPPeerControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id <LPPeerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) UIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
- (_Bool)isSlideLeftFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)frankExchangeOfViewController:(id)arg1 toViewController:(id)arg2 slideLeft:(_Bool)arg3;
@property(nonatomic) unsigned long long selectedIndex;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithViewControllers:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)removeAsParentViewControllerOnChildren;
- (void)setAsParentViewControllerOnChildren;

@end

