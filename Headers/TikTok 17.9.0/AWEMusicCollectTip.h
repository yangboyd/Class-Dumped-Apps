//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEBubbleAnchor-Protocol.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface AWEMusicCollectTip : UIView <AWEBubbleAnchor>
{
    unsigned long long _anchorType;
    UIImageView *_imgView;
    UILabel *_tipLabel;
    UIImage *_backgroundImg;
    UIImageView *_bgView;
    unsigned long long _defaultNumberOfLines;
    double _defaultMaxTextWidth;
    double _spaceBetweenImgAndLabel;
    struct CGSize _defaultMinSize;
    struct CGSize _defaultMaxSize;
    struct UIEdgeInsets _margin;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize defaultMaxSize; // @synthesize defaultMaxSize=_defaultMaxSize;
@property(nonatomic) struct CGSize defaultMinSize; // @synthesize defaultMinSize=_defaultMinSize;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) double spaceBetweenImgAndLabel; // @synthesize spaceBetweenImgAndLabel=_spaceBetweenImgAndLabel;
@property(nonatomic) double defaultMaxTextWidth; // @synthesize defaultMaxTextWidth=_defaultMaxTextWidth;
@property(nonatomic) unsigned long long defaultNumberOfLines; // @synthesize defaultNumberOfLines=_defaultNumberOfLines;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImage *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) unsigned long long anchorType; // @synthesize anchorType=_anchorType;
- (void)drawStrokeIfNeeded;
- (struct CGPoint)anchorPositionRelatedToLeftTop;
- (struct CGPoint)anchorPointForType:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGPoint anchorPointWithoutShadow;
@property(readonly, nonatomic) struct CGPoint anchorPointWithShadow;
- (struct CGSize)caculateSizeForCurrentState;
- (void)resize:(struct CGSize)arg1;
- (void)setupTipLabel:(id)arg1 font:(id)arg2 color:(id)arg3;
- (void)setupTipImage:(id)arg1 size:(struct CGSize)arg2 mode:(long long)arg3;
- (void)loadDefault:(_Bool)arg1 tipImgSize:(struct CGSize)arg2 margin:(struct UIEdgeInsets)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithTipImg:(id)arg1 tipImgSize:(struct CGSize)arg2 tipText:(id)arg3 tipTextFont:(id)arg4 tipTextColor:(id)arg5 margin:(struct UIEdgeInsets)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

