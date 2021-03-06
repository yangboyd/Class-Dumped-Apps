//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SCSIncomingCollectionViewCell.h>

@class NSLayoutConstraint, NSString, NSURL, SCServiceCloud, UIColor, UIFont, UIImage, UIImageView, UILabel;
@protocol SCSChatHyperLinkPreviewViewCellDelegate;

@interface SCSChatHyperLinkPreviewViewCell : SCSIncomingCollectionViewCell
{
    _Bool _centerImage;
    UIImage *_previewImage;
    NSString *_previewDescriptionString;
    NSString *_previewTitleString;
    NSString *_previewURLString;
    UIImage *_favIconImage;
    NSURL *_url;
    UIFont *_titleFont;
    UIFont *_descriptionFont;
    UIFont *_urlFont;
    UIColor *_contrastPrimaryColor;
    UIColor *_contrastSecondaryColor;
    UIColor *_brandPrimaryColor;
    id <SCSChatHyperLinkPreviewViewCellDelegate> _delegate;
    UIImageView *_previewImageView;
    UILabel *_previewTitle;
    UILabel *_previewDescription;
    UILabel *_previewURL;
    UIImageView *_rightArrowImageView;
    UIImageView *_favIconImageView;
    SCServiceCloud *_serviceCloud;
    NSLayoutConstraint *_previewImageHeightConstraint;
    NSLayoutConstraint *_previewTitleHeightConstaint;
    NSLayoutConstraint *_previewDescriptionHeightConstaint;
    NSLayoutConstraint *_previewURLHeightConstraint;
    NSLayoutConstraint *_previewURLLeadingAnchorConstraint;
    NSLayoutConstraint *_previewTitleTrailingConstraint;
    NSLayoutConstraint *_previewDescriptionTrailingConstraint;
    NSLayoutConstraint *_previewURLTrailingConstraint;
    NSLayoutConstraint *_rightArrowTopAnchorConstraint;
}

+ (double)getHeight:(id)arg1;
+ (void)setMaxWidth:(double)arg1;
+ (double)urlLabelMaxHeight;
+ (double)descriptionLabelMaxHeight;
+ (double)titleLabelMaxHeight;
+ (double)maxUrlLabelWidth;
+ (double)maxLabelWidth;
+ (double)getLabelSpacingForLabelsTitle:(id)arg1 description:(id)arg2;
+ (struct CGSize)expectedLabelSizeforString:(id)arg1 maxHeight:(double)arg2 maxWidth:(double)arg3 font:(id)arg4;
@property(retain, nonatomic) NSLayoutConstraint *rightArrowTopAnchorConstraint; // @synthesize rightArrowTopAnchorConstraint=_rightArrowTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *previewURLTrailingConstraint; // @synthesize previewURLTrailingConstraint=_previewURLTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *previewDescriptionTrailingConstraint; // @synthesize previewDescriptionTrailingConstraint=_previewDescriptionTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *previewTitleTrailingConstraint; // @synthesize previewTitleTrailingConstraint=_previewTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *previewURLLeadingAnchorConstraint; // @synthesize previewURLLeadingAnchorConstraint=_previewURLLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *previewURLHeightConstraint; // @synthesize previewURLHeightConstraint=_previewURLHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *previewDescriptionHeightConstaint; // @synthesize previewDescriptionHeightConstaint=_previewDescriptionHeightConstaint;
@property(retain, nonatomic) NSLayoutConstraint *previewTitleHeightConstaint; // @synthesize previewTitleHeightConstaint=_previewTitleHeightConstaint;
@property(retain, nonatomic) NSLayoutConstraint *previewImageHeightConstraint; // @synthesize previewImageHeightConstraint=_previewImageHeightConstraint;
@property(retain, nonatomic) SCServiceCloud *serviceCloud; // @synthesize serviceCloud=_serviceCloud;
@property(retain, nonatomic) UIImageView *favIconImageView; // @synthesize favIconImageView=_favIconImageView;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) UILabel *previewURL; // @synthesize previewURL=_previewURL;
@property(retain, nonatomic) UILabel *previewDescription; // @synthesize previewDescription=_previewDescription;
@property(retain, nonatomic) UILabel *previewTitle; // @synthesize previewTitle=_previewTitle;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(nonatomic) __weak id <SCSChatHyperLinkPreviewViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIImage *favIconImage; // @synthesize favIconImage=_favIconImage;
@property(retain, nonatomic) NSString *previewURLString; // @synthesize previewURLString=_previewURLString;
@property(retain, nonatomic) NSString *previewTitleString; // @synthesize previewTitleString=_previewTitleString;
@property(retain, nonatomic) NSString *previewDescriptionString; // @synthesize previewDescriptionString=_previewDescriptionString;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *brandPrimaryColor; // @synthesize brandPrimaryColor=_brandPrimaryColor;
@property(retain, nonatomic) UIColor *contrastSecondaryColor; // @synthesize contrastSecondaryColor=_contrastSecondaryColor;
@property(retain, nonatomic) UIColor *contrastPrimaryColor; // @synthesize contrastPrimaryColor=_contrastPrimaryColor;
@property(retain, nonatomic) UIFont *urlFont; // @synthesize urlFont=_urlFont;
@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool centerImage; // @synthesize centerImage=_centerImage;
- (void)adjustViewSizeAndConstraints;
- (void)setupMyViews;
- (void)handleTap:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setupViews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)applyAppearanceSelectors;
- (void)prepareForReuse;

@end

