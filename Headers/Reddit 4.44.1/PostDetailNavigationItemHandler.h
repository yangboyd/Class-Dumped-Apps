//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PostActionSheetDelegate-Protocol.h"

@class KeyValueObservation, NSString, PostDetailPresenter, PostDetailViewController, UIBarButtonItem;

@interface PostDetailNavigationItemHandler : NSObject <PostActionSheetDelegate>
{
    UIBarButtonItem *_moreButton;
    UIBarButtonItem *_saveButton;
    PostDetailViewController *_controller;
    PostDetailPresenter *_presenter;
    KeyValueObservation *_postSavedStateObserver;
}

@property(retain, nonatomic) KeyValueObservation *postSavedStateObserver; // @synthesize postSavedStateObserver=_postSavedStateObserver;
@property(nonatomic) __weak PostDetailPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak PostDetailViewController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(readonly, nonatomic) UIBarButtonItem *moreButton; // @synthesize moreButton=_moreButton;
- (void).cxx_destruct;
- (void)didHidePostFromActionSheetViewController:(id)arg1;
- (void)didTapEditPostFlairFromActionSheetViewController:(id)arg1;
- (void)didTapOverflow:(id)arg1;
- (void)didTapSave:(id)arg1;
- (void)updateSaveButtonWithState:(_Bool)arg1;
- (void)observePostSaveStatus;
- (void)dealloc;
- (id)initWithController:(id)arg1 presenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

