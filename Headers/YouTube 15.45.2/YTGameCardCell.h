//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCardCell.h"

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTSubscribeSwitchContainer-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTGameCardView, YTIGameCardRenderer, YTNotificationMultiToggleButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch;
@protocol YTResponder;

@interface YTGameCardCell : YTCollectionViewCardCell <YTThumbnailMapping, YTCollectionViewCellProtocol, YTSubscribeSwitchContainer>
{
    YTIGameCardRenderer *_renderer;
    YTGameCardView *_gameCardView;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)setGameCardDelegate:(id)arg1;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (id)entry;
- (void)setEntry:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

