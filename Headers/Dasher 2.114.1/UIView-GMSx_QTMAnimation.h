//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GMSx_AZRect, GMSx_GMCSRect;

@interface UIView (GMSx_QTMAnimation)
+ (void)GMSx_qtm_addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 curve:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4;
+ (void)GMSx_qtm_transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 curve:(unsigned long long)arg4 options:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)GMSx_qtm_transitionWithView:(id)arg1 duration:(double)arg2 curve:(unsigned long long)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)GMSx_qtm_animateWithDuration:(double)arg1 delay:(double)arg2 curve:(unsigned long long)arg3 usingSpringWithDamping:(double)arg4 initialSpringVelocity:(double)arg5 options:(unsigned long long)arg6 animations:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)GMSx_qtm_animateWithDuration:(double)arg1 delay:(double)arg2 curve:(unsigned long long)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)GMSx_qtm_animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)GMSx_qtm_animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3;
+ (void)GMSx_mdc_animateWithTimingFunction:(id)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (long long)GMSx_mdf_userInterfaceLayoutDirectionForSemanticContentAttribute:(long long)arg1 relativeToLayoutDirection:(long long)arg2;
+ (long long)GMSx_mdf_userInterfaceLayoutDirectionForSemanticContentAttribute:(long long)arg1;
+ (struct UIEdgeInsets)gms_rootViewSafeAreaInsets;
- (id)GMSx_goo_findFirstResponder;
- (void)GMSx_qtm_setAccessibleTextColorForBackgroundColor:(id)arg1;
- (void)GMSx_goo_flipViewForRTL;
- (_Bool)GMSx_goo_shouldRelayoutSubviewsForRTL;
- (void)GMSx_goo_relayoutSubviewsForRTL;
- (id)GMSx_objectConformingToElevationInResponderChain;
- (id)GMSx_objectConformingToOverrideInResponderChain;
@property(readonly, nonatomic) double GMSx_mdc_absoluteElevation;
@property(readonly, nonatomic) double GMSx_mdc_baseElevation;
- (void)GMSx_mdc_elevationDidChangeWithBaseElevation:(double)arg1;
- (void)GMSx_mdc_elevationDidChange;
@property(readonly, nonatomic) long long GMSx_mdf_effectiveUserInterfaceLayoutDirection;
@property(nonatomic, setter=GMSx_mdf_setSemanticContentAttribute:) long long GMSx_mdf_semanticContentAttribute;
@property(nonatomic, setter=GMSx_mdf_setAssociatedSemanticContentAttribute:) long long GMSx_mdf_associatedSemanticContentAttribute;
@property(readonly, nonatomic) struct UIEdgeInsets gms_safeAreaInsets;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double left;
@property(copy, nonatomic, setter=GMSx_az_setFrame:) GMSx_AZRect *GMSx_az_frame;
- (void)GMSx_az_setFrameWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)GMSx_az_useRTL;
- (void)GMSx_az_relayoutSubviewsForRTL;
@property(readonly, nonatomic) double GMSx_gmcs_centerY;
@property(readonly, nonatomic) double GMSx_gmcs_centerX;
@property(readonly, nonatomic) struct CGPoint GMSx_gmcs_center;
@property(readonly, nonatomic) struct CGSize GMSx_gmcs_size;
@property(readonly, nonatomic) struct CGPoint GMSx_gmcs_origin;
@property(readonly, nonatomic) double GMSx_gmcs_height;
@property(readonly, nonatomic) double GMSx_gmcs_width;
@property(readonly, nonatomic) double GMSx_gmcs_bottom;
@property(readonly, nonatomic) double GMSx_gmcs_right;
@property(readonly, nonatomic) double GMSx_gmcs_top;
@property(readonly, nonatomic) double GMSx_gmcs_left;
@property(copy, nonatomic, setter=GMSx_gmcs_setBounds:) GMSx_GMCSRect *GMSx_gmcs_bounds;
@property(copy, nonatomic, setter=GMSx_gmcs_setFrame:) GMSx_GMCSRect *GMSx_gmcs_frame;
- (void)GMSx_gmcs_setFrameWithBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)GMSx_gmcs_preferredSizeConstrainedToSize:(struct CGSize)arg1;
- (void)gms_makeLeadingAndTrailingAnchorsEqualToView:(id)arg1 leadingInset:(double)arg2 trailingInset:(double)arg3;
- (void)gms_makeEdges:(unsigned long long)arg1 equalToView:(id)arg2 insets:(struct UIEdgeInsets)arg3;
- (void)gms_makeEdgesEqualToView:(id)arg1;
- (void)gms_makeBottomEqualToTopOfView:(id)arg1 constant:(double)arg2;
- (void)gms_makeBottomEqualToView:(id)arg1 constant:(double)arg2;
- (void)gms_makeBottomEqualToView:(id)arg1;
- (void)gms_makeTopEqualToBottomOfView:(id)arg1 constant:(double)arg2;
- (void)gms_makeTopEqualToView:(id)arg1 constant:(double)arg2;
- (void)gms_makeTopEqualToView:(id)arg1;
- (void)gms_makeRightEqualToLeftOfView:(id)arg1 constant:(double)arg2;
- (void)gms_makeRightEqualToView:(id)arg1 constant:(double)arg2;
- (void)gms_makeRightEqualToView:(id)arg1;
- (void)gms_makeLeftEqualToRightOfView:(id)arg1 constant:(double)arg2;
- (void)gms_makeLeftEqualToView:(id)arg1 constant:(double)arg2;
- (void)gms_makeLeftEqualToView:(id)arg1;
- (void)gms_makeSizeEqualToSize:(struct CGSize)arg1;
- (void)gms_makeHeightGreaterOrEqualToConstant:(double)arg1;
- (void)gms_makeHeightEqualToConstant:(double)arg1;
- (void)gms_makeHeightEqualToView:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (void)gms_makeHeightEqualToView:(id)arg1;
- (void)gms_makeWidthGreaterOrEqualToConstant:(double)arg1;
- (void)gms_makeWidthEqualToConstant:(double)arg1;
- (void)gms_makeWidthEqualToView:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (void)gms_makeWidthEqualToView:(id)arg1;
- (void)gms_makeCenterEqualToView:(id)arg1;
- (void)gms_makeCenterYEqualToView:(id)arg1;
- (void)gms_makeCenterXEqualToView:(id)arg1;
- (void)gms_addShadowWithColor:(id)arg1 opacity:(float)arg2 radius:(double)arg3 offset:(struct CGSize)arg4;
- (void)gms_addBottomCardShadow;
- (void)gms_addShadow;
- (void)gms_removeShadow;
@end

