//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUILabel, NSLayoutConstraint, NSOperationQueue, UIColor;
@protocol VideoMetadataEntityProtocol;

@interface NFUIVideoMetadataView : UIView
{
    _Bool _disableAvailableUntilForDisplayPage;
    _Bool _centerContent;
    _Bool _stackRating;
    double _labelFontSize;
    double _labelFontWeight;
    long long _labelMarginSpacerCount;
    UIColor *_textColor;
    UIColor *_highlightColor;
    double _metadataViewTopConstant;
    double _metadataViewHeightConstant;
    NFUILabel *_metadataLabel;
    UIView *_contentView;
    NSLayoutConstraint *_constrMetaHeight;
    NSLayoutConstraint *_constrMetadataViewTop;
    NFUILabel *_thumbMatchLabel;
    unsigned long long _ratingState;
    id <VideoMetadataEntityProtocol> _entity;
    NSOperationQueue *_animationQueue;
}

@property(retain, nonatomic) NSOperationQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(retain, nonatomic) id <VideoMetadataEntityProtocol> entity; // @synthesize entity=_entity;
@property(nonatomic) unsigned long long ratingState; // @synthesize ratingState=_ratingState;
@property(retain, nonatomic) NFUILabel *thumbMatchLabel; // @synthesize thumbMatchLabel=_thumbMatchLabel;
@property(nonatomic) __weak NSLayoutConstraint *constrMetadataViewTop; // @synthesize constrMetadataViewTop=_constrMetadataViewTop;
@property(nonatomic) __weak NSLayoutConstraint *constrMetaHeight; // @synthesize constrMetaHeight=_constrMetaHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NFUILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(nonatomic) _Bool stackRating; // @synthesize stackRating=_stackRating;
@property(nonatomic) _Bool centerContent; // @synthesize centerContent=_centerContent;
@property(nonatomic) double metadataViewHeightConstant; // @synthesize metadataViewHeightConstant=_metadataViewHeightConstant;
@property(nonatomic) double metadataViewTopConstant; // @synthesize metadataViewTopConstant=_metadataViewTopConstant;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long labelMarginSpacerCount; // @synthesize labelMarginSpacerCount=_labelMarginSpacerCount;
@property(nonatomic) double labelFontWeight; // @synthesize labelFontWeight=_labelFontWeight;
@property(nonatomic) double labelFontSize; // @synthesize labelFontSize=_labelFontSize;
@property(nonatomic) _Bool disableAvailableUntilForDisplayPage; // @synthesize disableAvailableUntilForDisplayPage=_disableAvailableUntilForDisplayPage;
- (void).cxx_destruct;
- (id)labelMarginString;
- (void)addAnimationExecutionBlock:(CDUnknownBlockType)arg1;
- (void)setLabelFont;
- (void)prepareForInterfaceBuilder;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (void)updateWithEntity:(id)arg1;
- (_Bool)showNewRating;
- (void)configureThumbRatingForEntity:(id)arg1;
- (void)setThumbMatchRating:(long long)arg1 withEntity:(id)arg2;
- (id)accessibilityStringForThumbRating:(long long)arg1 andEntity:(id)arg2;
- (id)stringForThumbRating:(long long)arg1 andEntity:(id)arg2;
- (void)alphaFrameAnimationForThumbRating:(long long)arg1;
- (void)slideBounceAnimationForThumbRating:(long long)arg1;
- (void)thumbRatingDidChange:(long long)arg1;
- (void)updateLayoutFrames;
- (void)layoutSubviews;
- (double)ratingHeightForRatingState;
- (double)ratingWidthForRatingState;
- (void)hideViewUsingConstraints:(_Bool)arg1;
- (void)initSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

