//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGContentWarningProgressManagerListener-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>

@class CAShapeLayer, IGCommentOffense, IGCoreTextView, NSString, UIButton, UIProgressView;
@protocol IGContentWarningIndicatorCellDelegate;

@interface IGContentWarningIndicatorCell : UICollectionViewCell <IGCoreTextLinkHandler, IGContentWarningProgressManagerListener>
{
    IGCoreTextView *_warningCoreTextView;
    UIButton *_undoButton;
    UIProgressView *_progressView;
    IGCommentOffense *_offenseComment;
    CAShapeLayer *_topDividerShape;
    unsigned long long _layoutStyle;
    id <IGContentWarningIndicatorCellDelegate> _delegate;
}

+ (struct CGSize)sizeForWarningStyledString:(id)arg1 undoText:(id)arg2 containerWidth:(double)arg3 layoutStyle:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGContentWarningIndicatorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentWarningProgressManagerDidUpdateToProgress:(double)arg1;
- (void)_didTapUndoButton;
- (void)_setupTopDivider;
- (void)_setUpProgressBarColor;
- (void)_updateProgressViewTransform;
- (void)_setupProgressBar;
- (void)_setupUndoButton;
- (void)_setupWarningCoreText;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)prepareForReuse;
- (void)configureWithStyledString:(id)arg1 undoText:(id)arg2 layoutSyle:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

