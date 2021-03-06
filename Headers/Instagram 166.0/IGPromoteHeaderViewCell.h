//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextNonLinkHandler-Protocol.h>

@class IGCoreTextView, IGPromoteHeaderViewModel, NSString, UIView;
@protocol IGPromoteHeaderViewCellDelegate;

@interface IGPromoteHeaderViewCell : UICollectionViewCell <IGCoreTextNonLinkHandler, IGCoreTextLinkHandler>
{
    IGCoreTextView *_titleView;
    IGCoreTextView *_subtitleView;
    UIView *_separatorView;
    IGPromoteHeaderViewModel *_viewModel;
    id <IGPromoteHeaderViewCellDelegate> _delegate;
}

+ (double)heightThatFitsWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteHeaderViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) IGPromoteHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

