//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWESearchBarPlaceholderDelegate-Protocol.h"

@class AWESearchBar, NSString, UIButton;

@interface AWEDiscoverNavView : UIView <AWESearchBarPlaceholderDelegate>
{
    _Bool _isChildMode;
    UIButton *_scanButton;
    AWESearchBar *_searchBar;
    UIButton *_cancelButton;
    UIButton *_returnButton;
    unsigned long long _positon;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long positon; // @synthesize positon=_positon;
@property(nonatomic) _Bool isChildMode; // @synthesize isChildMode=_isChildMode;
@property(retain, nonatomic) UIButton *returnButton; // @synthesize returnButton=_returnButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) AWESearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIButton *scanButton; // @synthesize scanButton=_scanButton;
- (void)p_trackPlaceholderWordShow:(id)arg1;
- (void)searchBar:(id)arg1 willDisplayPlaceholderAtIndex:(unsigned long long)arg2;
- (void)hideCancelButtonAnimation;
- (void)showCancelButtonAnimation;
- (void)cancelButtonShowImage;
- (void)cancelButtonShowText;
- (void)p_setNormalSearchBarPlaceholder;
- (id)currentActivePlaceholderWordAtIndex:(unsigned long long)arg1;
- (void)updatePlaceholderIfNeeded;
- (void)updateSubViews;
- (void)setupLayout;
- (void)setupUI;
- (void)setupScanButtonPosition;
- (id)initWithFrame:(struct CGRect)arg1 isChildMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

