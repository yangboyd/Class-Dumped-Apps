//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPlayInteractionBaseElementViewModel.h"

@class AWEPlayInteractionCommentPanelModel, AWEPlayInteractionViewController, NSString;

@interface AWEPlayInteractionCommentElementViewModel : AWEPlayInteractionBaseElementViewModel
{
    AWEPlayInteractionCommentPanelModel *_panelModel;
    NSString *_totolCountChange;
    AWEPlayInteractionViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AWEPlayInteractionViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *totolCountChange; // @synthesize totolCountChange=_totolCountChange;
@property(retain, nonatomic) AWEPlayInteractionCommentPanelModel *panelModel; // @synthesize panelModel=_panelModel;
- (void)onCommentAddNotification:(id)arg1;
- (void)updateDynamicLabel;
- (void)updateTagsView;
- (void)updateCommentCount;
- (void)onCommentTotalCountNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onCommentTotalCountNotification:(id)arg1;
- (void)onCommentDeleteNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onCommentDeleteNotification:(id)arg1;
- (void)onCommentAddNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)alertIfCanNotComment;
- (void)interactor_onCommentButtonClicked:(id)arg1;
- (void)onCommentButtonClicked:(id)arg1;
- (id)init;

@end

