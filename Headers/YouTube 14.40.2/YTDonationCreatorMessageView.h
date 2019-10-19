//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTThumbnailMapping.h"

@class NSString, YTDonationsFormattedStringLabel, YTFormattedStringLabel, YTIDonationCreatorMessage, YTImageView;

@interface YTDonationCreatorMessageView : UIView <YTThumbnailMapping>
{
    YTIDonationCreatorMessage *_renderer;
    YTImageView *_avatar;
    YTFormattedStringLabel *_title;
    YTDonationsFormattedStringLabel *_description;
}

- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)thumbnailMappings;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setDescriptionStringLabelDelegate:(id)arg1;
- (id)initWithRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

