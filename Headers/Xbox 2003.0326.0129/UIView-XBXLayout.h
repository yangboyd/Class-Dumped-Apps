//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSNumber, UIActivityIndicatorView;

@interface UIView (XBXLayout)
+ (void)xbxAnimateWithKeyboardNotification:(id)arg1 animations:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)xbxAnimateWithKeyboardNotification:(id)arg1 animations:(CDUnknownBlockType)arg2;
- (_Bool)xbxUsesAutoLayout;
- (void)recursiveSetTranslatesAutoResizeConstraintsToNo;
- (void)xbxScaleForHeight:(float)arg1;
- (void)xbxScaleForWidth:(float)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *xbxActivityIndicator;
- (void)xbxStopActivityIndicator;
- (void)xbxStartActivityIndicator;
- (void)xbxSetOrigin:(struct CGPoint)arg1;
- (void)xbxSetY:(double)arg1;
- (void)xbxSetX:(double)arg1;
- (void)xbxSetSize:(struct CGSize)arg1;
- (void)xbxSetHeight:(double)arg1;
- (void)xbxSetWidth:(double)arg1;
- (_Bool)xbxIsVisible;
- (void)xbxSetHiddenAndRefreshLayout:(_Bool)arg1;
- (void)xbxRemoveAllSubviews;
@property(readonly) double floatRightMargin;
@property(readonly) double floatLeftMargin;
@property(readonly) double floatBottomMargin;
@property(readonly) double floatTopMargin;
@property(nonatomic) double midX;
@property(nonatomic) double midY;
@property(nonatomic) double xbxBottom;
@property(nonatomic) double xbxTop;
@property(nonatomic) double xbxRight;
@property(nonatomic) double xbxLeft;
@property(nonatomic) double maxY;
@property(nonatomic) double maxX;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double y;
@property(nonatomic) double x;
@property(nonatomic) _Bool selfSizes;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *aspectConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property(retain, nonatomic) NSNumber *exemptFromReflow;
@property(retain, nonatomic) NSNumber *rightMargin;
@property(retain, nonatomic) NSNumber *leftMargin;
@property(retain, nonatomic) NSNumber *bottomMargin;
@property(retain, nonatomic) NSNumber *topMargin;
@property(nonatomic) struct CGRect margins;
@end

