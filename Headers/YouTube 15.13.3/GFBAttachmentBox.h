//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/SUPCheckboxDelegate-Protocol.h>

@class MDCCard, MDCInkTouchController, NSLayoutConstraint, NSString, SUPCheckbox, UIButton, UIImage, UIImageView, UILabel;
@protocol GFBAttachmentBoxDelegate;

@interface GFBAttachmentBox : UIView <SUPCheckboxDelegate>
{
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_leftPaddingConstraint;
    NSLayoutConstraint *_rightPaddingConstraint;
    NSLayoutConstraint *_topPaddingConstraint;
    NSLayoutConstraint *_bottomPaddingConstraint;
    MDCCard *_container;
    MDCInkTouchController *_inkController;
    UIButton *_previewSection;
    UIView *_labels;
    SUPCheckbox *_toggleButton;
    UILabel *_titleLabel;
    UILabel *_previewTextLabel;
    UIImageView *_thumbnail;
    NSString *_titleText;
    NSString *_previewText;
    UIImage *_previewImage;
    id <GFBAttachmentBoxDelegate> _delegate;
    struct UIEdgeInsets _padding;
}

+ (id)scaleAndCropScreenshotImage:(id)arg1;
@property(nonatomic) __weak id <GFBAttachmentBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic, setter=updatePreviewImage:) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic, setter=updatePreviewText:) NSString *previewText; // @synthesize previewText=_previewText;
@property(retain, nonatomic, setter=updateTitle:) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)didTapPreviewButton:(id)arg1;
- (void)didTapCheckbox:(id)arg1 checked:(_Bool)arg2;
- (void)setWidth:(double)arg1;
@property(nonatomic) _Bool checked;
- (void)setUpConstraintsInLabelsSection;
- (void)setUpConstraintsInPreviewSection;
- (void)setUpConstraints;
- (void)setUpSubViews;
- (id)initWithTitle:(id)arg1 previewText:(id)arg2 previewImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

