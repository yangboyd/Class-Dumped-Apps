//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastUIEpisodeImageCardRelativeStyle.h"

@protocol GLUETheme;

@interface SPTPodcastUIEpisodeImageCardMediumRelativeStyle : SPTPodcastUIEpisodeImageCardRelativeStyle
{
    id <GLUETheme> _theme;
}

+ (struct CGSize)componentSizeForWidth:(double)arg1 theme:(id)arg2 horizontalSizeClass:(long long)arg3;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)initWithTheme:(id)arg1 viewSize:(struct CGSize)arg2;

@end

