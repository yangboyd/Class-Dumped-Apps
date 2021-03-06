//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, YTIGhostChipRenderer, YTImageView, YTTimedAction;
@protocol YTResponder;

@interface YTGhostChipCell : YTCollectionViewCell <YTPageStyling, YTCollectionViewCellProtocol>
{
    YTIGhostChipRenderer *_entry;
    YTImageView *_thumbnailView;
    YTTimedAction *_delayShimmerTimer;
    _Bool _isShimmering;
    long long _pageStyle;
    id <YTResponder> _parentResponder;
}

+ (void)pulsateAlphaOfViews:(id)arg1 withDelay:(double)arg2 fadeOutDuration:(double)arg3 fadeInDuration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)doShimmerWithDelay:(double)arg1;
- (void)doShimmer;
- (void)stopShimmer;
- (void)startShimmerWithDelay:(double)arg1;
- (void)prepareForReuse;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

