//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWThemeableView.h>

@class _TtC9TwitchKit16TWThemedImageURL;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch20TWThemeableImageView : TWThemeableView
{
    // Error parsing type: , name: themedImageURL
    // Error parsing type: , name: urlImageView
}

- (void).cxx_destruct;
- (void)reset;
- (void)loadImageAt:(id)arg1 themeManager:(id)arg2;
- (void)applyTheme:(id)arg1;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
@property(nonatomic) long long contentMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 themeManager:(id)arg2;
@property(nonatomic, retain) _TtC9TwitchKit16TWThemedImageURL *themedImageURL; // @synthesize themedImageURL;

@end

