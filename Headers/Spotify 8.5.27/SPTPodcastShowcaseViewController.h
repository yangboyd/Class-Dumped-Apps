//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEThemeObserver-Protocol.h"

@class SPTPodcastShowcaseView, SPTPodcastTheme;
@protocol SPTPodcastShowcaseViewControllerDelegate;

@interface SPTPodcastShowcaseViewController : UIViewController <GLUEThemeObserver>
{
    id <SPTPodcastShowcaseViewControllerDelegate> _delegate;
    SPTPodcastTheme *_theme;
}

@property(readonly, nonatomic) SPTPodcastTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTPodcastShowcaseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeUpdated:(id)arg1;
- (void)didTapDismissButton:(id)arg1;
- (void)didTapActionButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTPodcastShowcaseView *view; // @dynamic view;

@end

