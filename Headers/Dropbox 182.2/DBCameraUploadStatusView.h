//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "DBUploadStatusContentViewProtocol-Protocol.h"

@class NSString, UIImageView, UILabel, UIProgressView, UIStackView, UIView;
@protocol DBCameraUploadStatusViewDelegate, DBContentViewObject;

@interface DBCameraUploadStatusView : UIControl <DBUploadStatusContentViewProtocol>
{
    UIStackView *_contentStackView;
    UILabel *_remainingLabel;
    UILabel *_accessoryLabel;
    UIImageView *_accessoryIconView;
    UIStackView *_titlesStackView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIView *_progressViewSpacerView;
    UIProgressView *_progressView;
    UIImageView *_iconView;
    UIImageView *_thumbView;
    UIView *_highlightedBackgroundView;
    UIImageView *_disclosureArrowView;
    UIView *_topBorder;
    UIView *_bottomBorder;
    id <DBContentViewObject> _contentViewObject;
    id <DBCameraUploadStatusViewDelegate> _delegate;
    struct CGSize _thumbSize;
}

@property(nonatomic) __weak id <DBCameraUploadStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(readonly, nonatomic) id <DBContentViewObject> contentViewObject; // @synthesize contentViewObject=_contentViewObject;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (_Bool)isAccessibilityElement;
- (void)db_didTapView;
- (void)db_refreshView;
- (void)db_updateHighlight;
- (void)db_setupViews;
- (void)db_installConstraints;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)db_createViews;
- (void)contentViewObjectDidUpdate;
- (void)unbindFromContentViewObject;
- (void)bindToContentViewObject:(id)arg1;
- (void)showTopBorder:(_Bool)arg1;
- (double)currentHeightNeededForWidth:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) _Bool isPretendingToNotBeAnAccessibilityElement;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(readonly) Class superclass;

@end

