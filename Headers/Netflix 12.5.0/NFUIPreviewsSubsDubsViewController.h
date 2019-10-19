//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSOrderedSet, NSString, UIButton, UILabel, UITableView, UIView;
@protocol NFUIPlayer, UIViewControllerTransitioningDelegate;

@interface NFUIPreviewsSubsDubsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <UIViewControllerTransitioningDelegate> _transitioningDelegate;
    id <NFUIPlayer> _player;
    CDUnknownBlockType _dismissCompletion;
    UIView *_contentContainer;
    UILabel *_audioLabel;
    UILabel *_subtitlesLabel;
    UIButton *_closeButton;
    UITableView *_audioTableView;
    UITableView *_subtitlesTableView;
    NSLayoutConstraint *_contentContainerHeight;
    NSLayoutConstraint *_contentContainerTopSpacing;
    NSOrderedSet *_audioOptions;
    NSOrderedSet *_subtitleOptions;
}

+ (id)previewsSubsDubsViewControllerForPlayer:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSOrderedSet *subtitleOptions; // @synthesize subtitleOptions=_subtitleOptions;
@property(retain, nonatomic) NSOrderedSet *audioOptions; // @synthesize audioOptions=_audioOptions;
@property(nonatomic) __weak NSLayoutConstraint *contentContainerTopSpacing; // @synthesize contentContainerTopSpacing=_contentContainerTopSpacing;
@property(nonatomic) __weak NSLayoutConstraint *contentContainerHeight; // @synthesize contentContainerHeight=_contentContainerHeight;
@property(nonatomic) __weak UITableView *subtitlesTableView; // @synthesize subtitlesTableView=_subtitlesTableView;
@property(nonatomic) __weak UITableView *audioTableView; // @synthesize audioTableView=_audioTableView;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UILabel *subtitlesLabel; // @synthesize subtitlesLabel=_subtitlesLabel;
@property(nonatomic) __weak UILabel *audioLabel; // @synthesize audioLabel=_audioLabel;
@property(nonatomic) __weak UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletion; // @synthesize dismissCompletion=_dismissCompletion;
@property(nonatomic) __weak id <NFUIPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
- (void).cxx_destruct;
- (void)tappedShimAction:(id)arg1;
- (void)closeButtonAction:(id)arg1;
- (void)dismiss;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

