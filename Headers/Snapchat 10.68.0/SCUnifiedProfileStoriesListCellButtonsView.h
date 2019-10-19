//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCActionModel, UIImageView;
@protocol SCActionHandling;

@interface SCUnifiedProfileStoriesListCellButtonsView : UIView <SCActionable, SCViewModelConfigurable>
{
    UIImageView *_saveButtonView;
    UIImageView *_deleteButtonView;
    UIView *_saveButtonContainerView;
    UIView *_deleteButtonContainerView;
    SCActionModel *_saveActionModel;
    SCActionModel *_deleteActionModel;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_handleDeleteButtonTapped;
- (void)_handleSaveButtonTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

