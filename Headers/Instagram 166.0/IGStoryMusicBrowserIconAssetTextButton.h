//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class NSString, UIImageView, UILabel;

@interface IGStoryMusicBrowserIconAssetTextButton : IGBouncyButton
{
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UIImageView *_backgroundView;
    unsigned long long _iconAsset;
    unsigned long long _iconLocation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long iconLocation; // @synthesize iconLocation=_iconLocation;
@property(nonatomic) unsigned long long iconAsset; // @synthesize iconAsset=_iconAsset;
- (void)_updateLabelTitle:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

