//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEFeedAnchorBaseConfig.h"

@class AWEAnimatedMarkView, AWEI18nAnchorModel;

@interface AWEFeedAnchorDonationStickerConfig : AWEFeedAnchorBaseConfig
{
    AWEAnimatedMarkView *_donationButton;
    AWEI18nAnchorModel *_anchorModel;
    AWEI18nAnchorModel *_i18nAnchor;
}

+ (_Bool)hasAnchorViewDataWithAwemeModelForFeed:(id)arg1 extraInfo:(id)arg2;
+ (id)anchorType;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEI18nAnchorModel *i18nAnchor; // @synthesize i18nAnchor=_i18nAnchor;
@property(retain, nonatomic) AWEI18nAnchorModel *anchorModel; // @synthesize anchorModel=_anchorModel;
@property(retain, nonatomic) AWEAnimatedMarkView *donationButton; // @synthesize donationButton=_donationButton;
- (CDUnknownBlockType)layoutWithAwemeModel:(id)arg1 commonLayoutInfo:(id)arg2;
- (void)updateWithAwemeModel:(id)arg1;
- (id)anchorViewWithModel:(id)arg1;

@end

