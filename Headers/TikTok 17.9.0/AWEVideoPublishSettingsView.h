//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEVideoPublishSettingsViewModel, CAShapeLayer, NSString, UIButton, UILabel, UITableView;

@interface AWEVideoPublishSettingsView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    AWEVideoPublishSettingsViewModel *_viewModel;
    CDUnknownBlockType _closeBlock;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIView *_contentView;
    CAShapeLayer *_contentMaskLayer;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CAShapeLayer *contentMaskLayer; // @synthesize contentMaskLayer=_contentMaskLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) AWEVideoPublishSettingsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2;
- (id)indexPathsWithIndexSet:(id)arg1;
- (void)reloadData;
- (void)closeButtonClicked:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (void)disappearWithBlock:(CDUnknownBlockType)arg1;
- (void)appearWithBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

