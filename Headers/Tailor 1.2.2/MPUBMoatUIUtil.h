//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPUBMoatUIUtil : NSObject
{
}

+ (id)digForWebView:(id)arg1 webViewType:(Class)arg2 allowMultiple:(_Bool)arg3;
+ (id)digForWKWebView:(id)arg1 allowMultiple:(_Bool)arg2;
+ (id)digForUIWebView:(id)arg1 allowMultiple:(_Bool)arg2;
+ (_Bool)containsWebView:(id)arg1;
+ (void)insertIntoArray:(id)arg1 fromArray:(id)arg2 withStartIndex:(int)arg3 withMaxMergedSize:(int)arg4;
+ (id)getSublayers:(id)arg1;
+ (id)getUiHierarchy:(id)arg1;
+ (id)getLayerChain:(id)arg1;
+ (struct CGRect)getRectInWindow:(id)arg1 clipToWindow:(_Bool)arg2;
+ (struct CGRect)getRectInWindow:(id)arg1;
+ (_Bool)isLayerDescendant:(id)arg1 ofLayer:(id)arg2;
+ (id)getViewableState:(id)arg1;
+ (struct CGRect)getRectOnScreen:(struct CGRect)arg1 withLayerChain:(id)arg2;
+ (_Bool)isInvalidRect:(struct CGRect)arg1;
+ (float)getVisibleArea:(id)arg1 withLayerChain:(id)arg2 withHitLayers:(id)arg3;
+ (float)getCoveredArea:(struct CGRect)arg1 withRectsToCheck:(id)arg2;
+ (id)getGroupViewState:(id)arg1;
+ (id)getLayerVisibility:(id)arg1 atPoint:(struct CGPoint)arg2 ofSuperLayer:(id)arg3;
+ (void)respondToAppFocus:(id)arg1;
+ (void)setFocusListener;

@end

