//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVCaptureSession, NSDictionary, UIColor, UILabel;

@interface GWACameraView : UIView
{
    struct CGRect _cardRectForCameraBufferLandscape;
    UILabel *_instructionsLabel;
    NSDictionary *_outlineLayers;
    _Bool _shouldShowCreditCardNumberHint;
    unsigned long long _highlightedEdges;
    UIColor *_highlightColor;
    struct CGRect _cardBounds;
}

+ (id)instanceWithFrame:(struct CGRect)arg1 cardBoundsLandscape:(struct CGRect)arg2;
+ (Class)layerClass;
@property(readonly, nonatomic) struct CGRect cardBounds; // @synthesize cardBounds=_cardBounds;
@property(nonatomic) _Bool shouldShowCreditCardNumberHint; // @synthesize shouldShowCreditCardNumberHint=_shouldShowCreditCardNumberHint;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) unsigned long long highlightedEdges; // @synthesize highlightedEdges=_highlightedEdges;
- (void).cxx_destruct;
- (void)dealloc;
- (id)outlineLayers;
- (void)createOutlineWithCardRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (struct CGRect)cardRectForCardRectCameraBufferPortrait:(struct CGRect)arg1 viewRect:(struct CGRect)arg2 sessionSize:(struct CGSize)arg3;
- (struct CGRect)panRectForCardRect:(struct CGRect)arg1;
- (id)cardOverlayForCardRect:(struct CGRect)arg1 viewRect:(struct CGRect)arg2;
- (void)setOrientation:(long long)arg1;
@property(retain, nonatomic) AVCaptureSession *session;
- (id)initWithFrame:(struct CGRect)arg1 cardBoundsLandscape:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

