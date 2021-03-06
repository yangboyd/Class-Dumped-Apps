//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

@class IGBottomButtonsView, IGBusinessSelectionFlowHeaderView, UIView;

@interface IGBusinessSignUpFlowTableViewController : IGGroupedTableViewController
{
    IGBusinessSelectionFlowHeaderView *_headerView;
    IGBottomButtonsView *_nextButton;
    UIView *_customHeaderView;
}

@property(readonly, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(readonly, nonatomic) IGBottomButtonsView *nextButton; // @synthesize nextButton=_nextButton;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)nextButtonSecondaryOptionClicked:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (id)titleForNextButtonSecondaryOption;
- (id)titleForNextButton;
- (double)tableViewContentHeight;
- (id)headerSubtitle;
- (id)headerTitle;
- (struct UIEdgeInsets)tableViewPaddingInsets;
- (struct CGSize)customHeaderViewSize;
- (id)bottomButtonsView;
- (id)_createNextButton;
- (struct UIEdgeInsets)preferredContentInsets;
- (id)_createHeaderView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

@end

