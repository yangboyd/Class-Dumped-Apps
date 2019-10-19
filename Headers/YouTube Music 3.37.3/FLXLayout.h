//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class FLXNode, NSMutableArray;

@interface FLXLayout : GPBMessage
{
}

+ (id)descriptor;
+ (id)layoutFromBundle:(id)arg1 filename:(id)arg2 variant:(id)arg3;
+ (id)layoutFromBundle:(id)arg1 filename:(id)arg2;
+ (_Bool)layoutCachingEnabled;
+ (void)setLayoutCachingEnabled:(_Bool)arg1;
+ (id)RTLLayoutDelegate;
+ (void)setRTLLayoutDelegate:(id)arg1;
+ (long long)RTLLayoutPolicy;
+ (void)setRTLLayoutPolicy:(long long)arg1;
+ (id)flexGenServerURL;
+ (void)setFlexGenServerURL:(id)arg1;
@property(retain, nonatomic) FLXNode *wrapper;
- (int)effectiveAlignItemWithAlignItem:(int)arg1 container:(id)arg2;
- (struct CGSize)intrinsicContentSizeOfNode:(id)arg1;
- (_Bool)setPreferredMaxLayoutWidth:(float)arg1 forView:(id)arg2;
- (void)clearPreferredWidths;
- (float)shrinkTotalForContainer:(id)arg1;
- (float)growTotalForContainer:(id)arg1;
- (float)crossAxisFreeSpaceForContainer:(id)arg1 item:(id)arg2;
- (struct FLXAxisFactor)crossAxisFactorForDirection:(int)arg1;
- (float)mainAxisFreeSpaceForContainer:(id)arg1;
- (struct FLXAxisFactor)mainAxisFactorForDirection:(int)arg1;
- (struct FLXPoint)mainAxisStartForContainer:(id)arg1 containerStyle:(id)arg2;
- (void)alignItems:(id)arg1;
- (void)justifyContent:(id)arg1;
- (void)layoutCrossAxisForContainer:(id)arg1 style:(id)arg2;
- (void)layoutMainAxisForContainer:(id)arg1 style:(id)arg2;
- (void)layoutAbsolutePostionsForContainer:(id)arg1;
- (void)layoutContainer:(id)arg1 forOrientation:(long long)arg2;
- (struct CGRect)unionOfChildFramesForNode:(id)arg1;
- (struct CGSize)unionOfChildSizesForNode:(id)arg1 direction:(int)arg2;
- (void)calculateSizingForAdjustedHeightsOnly:(_Bool)arg1;
- (void)resetWrapper;
- (void)initializeWrapperWithSize:(struct CGSize)arg1;
- (void)initializeNodeStylesWithVariant:(id)arg1;
- (id)namedStyleForNode:(id)arg1 variant:(id)arg2;
- (void)apply;
- (void)flatten;
- (struct CGRect)extent;
- (void)restoreRTLPolicy:(long long)arg1;
- (long long)overrideRTLPolicy;
- (void)layoutWithSize:(struct CGSize)arg1;
- (void)layout;
- (void)bindTo:(id)arg1;
@property(nonatomic) long long RTLLayoutPolicy;
@property(nonatomic, getter=isFlat) _Bool flat;

// Remaining properties
@property(nonatomic) _Bool hasNode; // @dynamic hasNode;
@property(retain, nonatomic) FLXNode *node; // @dynamic node;
@property(retain, nonatomic) NSMutableArray *styleArray; // @dynamic styleArray;
@property(readonly, nonatomic) unsigned long long styleArray_Count; // @dynamic styleArray_Count;

@end

