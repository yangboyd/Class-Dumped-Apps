//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTExpandableCell.h>

#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class MDCInkTouchController, MDCInkView, NSString, UIView, YTISlimOwnerRenderer, YTSlimVideoOwnerView, YTTouchFeedbackController;
@protocol YTResponder;

@interface YTSlimOwnerCell : YTExpandableCell <UIGestureRecognizerDelegate, YTThumbnailMapping, MDCInkTouchControllerDelegate, YTCollectionViewCellProtocol, YTResponder>
{
    YTISlimOwnerRenderer *_entry;
    MDCInkView *_inkView;
    MDCInkTouchController *_inkTouchController;
    YTTouchFeedbackController *_touchFeedbackController;
    UIView *_videoOwnerViewTopSeparator;
    UIView *_videoOwnerViewBottomSeparator;
    long long _pageStyle;
    id <YTResponder> _parentResponder;
    YTSlimVideoOwnerView *_videoOwnerView;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTSlimVideoOwnerView *videoOwnerView; // @synthesize videoOwnerView=_videoOwnerView;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)pageStyleDidChange:(long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)thumbnailMappings;
- (id)accessibilityElements;
- (id)inkTouchController:(id)arg1 inkViewAtTouchLocation:(struct CGPoint)arg2;
- (void)removeReelChannelAvatarTarget;
- (void)setReelChannelAvatarTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareForReuse;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFitsWithPlainStyle:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsWithBoxStyle:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

