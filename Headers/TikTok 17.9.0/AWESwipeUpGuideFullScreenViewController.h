//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESwipeUpGuideViewControllerProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class LOTAnimationView, NSString, UILabel, UIScrollView, UITableView;

@interface AWESwipeUpGuideFullScreenViewController : UIViewController <UIScrollViewDelegate, AWESwipeUpGuideViewControllerProtocol>
{
    _Bool _isPresentCompleted;
    _Bool _hasFinishedSwipeUp;
    UILabel *_mainLabel;
    UIScrollView *_scrollView;
    UITableView *_tableView;
    LOTAnimationView *_imageView;
    double _lastContentOffset;
    UILabel *_secondaryLabel;
    struct CGPoint _originOffSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(nonatomic) _Bool hasFinishedSwipeUp; // @synthesize hasFinishedSwipeUp=_hasFinishedSwipeUp;
@property(nonatomic) _Bool isPresentCompleted; // @synthesize isPresentCompleted=_isPresentCompleted;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) LOTAnimationView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct CGPoint originOffSet; // @synthesize originOffSet=_originOffSet;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (_Bool)ifKindOfCardOrAlert:(id)arg1;
- (_Bool)shouldUpdateSecondaryLabel;
- (void)updateMainLabel;
- (_Bool)shouldUpdateSupplimentaryLabel;
- (void)_appDidBecomeActive;
- (void)dismissWithGestureByScrollView:(id)arg1;
- (void)dismiss;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissSwipeUpGuideManager;
- (void)showSwipeUpGuideOnTableView:(id)arg1;
- (_Bool)isRecommendedFeed;
- (void)animateSwipeUpInfoLabelIfNeeded;
- (void)setupUI;
- (void)registerNotifications;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableGuideEnhance;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

