//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTShadowView.h"

@protocol RCTSurfaceRootShadowViewDelegate;

@interface RCTSurfaceRootShadowView : RCTShadowView
{
    struct CGSize _intrinsicSize;
    _Bool _isRendered;
    _Bool _isLaidOut;
    int _baseDirection;
    id <RCTSurfaceRootShadowViewDelegate> _delegate;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
}

@property(nonatomic) int baseDirection; // @synthesize baseDirection=_baseDirection;
@property(nonatomic) __weak id <RCTSurfaceRootShadowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize intrinsicSize;
- (void)setIntrinsicSize:(struct CGSize)arg1;
- (void)setMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2;
- (void)layoutWithAffectedShadowViews:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (id)init;

@end

