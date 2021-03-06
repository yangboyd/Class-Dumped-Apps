//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASMUIUtilities : NSObject
{
}

+ (void)scrollScrollViewToLeadingEdge:(id)arg1;
+ (void)overrideInterfaceStyleOfViewController:(id)arg1 withStyle:(unsigned long long)arg2;
+ (void)drawBorderOnCurrentContextAroundView:(id)arg1 cornerRadius:(double)arg2 borderWidth:(double)arg3 maximumCardWidth:(double)arg4 leftPadding:(double)arg5 rightPadding:(double)arg6 verticalPadding:(double)arg7 shouldDrawTopBorder:(_Bool)arg8 shouldDrawBottomBorder:(_Bool)arg9;
+ (void)executeOnMainThread:(CDUnknownBlockType)arg1;
+ (id)styledTextEntriesFromLabel:(id)arg1 titles:(id)arg2 descriptions:(id)arg3 specialDescription:(id)arg4;
+ (_Bool)isRTL;
+ (void)showSnackbarWithText:(id)arg1 onWindowOfView:(id)arg2;
+ (double)lerpA:(double)arg1 b:(double)arg2 fraction:(double)arg3;
+ (void)constrainView:(id)arg1 centeredInView:(id)arg2;
+ (void)pinAnchorsOfView:(id)arg1 toView:(id)arg2 withInsets:(struct UIEdgeInsets)arg3;
+ (void)pinAnchorsOfView:(id)arg1 toView:(id)arg2;

@end

