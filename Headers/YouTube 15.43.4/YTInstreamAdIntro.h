//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInstreamAd.h>

@class YTPlayerResponse;

@interface YTInstreamAdIntro : YTBaseInstreamAd
{
    YTPlayerResponse *_playerResponse;
}

- (void).cxx_destruct;
- (_Bool)isPlayable;
- (_Bool)isSurvey;
- (_Bool)isVideo;
- (id)YouTubeVideoID;
- (int)adType;
- (id)adPlayerData;
- (id)adPlayerResponse;
- (id)initWithPlayerResponse:(id)arg1;

@end

