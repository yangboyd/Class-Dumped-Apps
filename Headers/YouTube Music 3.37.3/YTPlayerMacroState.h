//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTVSSControllerState;

@interface YTPlayerMacroState : NSObject
{
    int _playerVisibility;
    NSString *_CPN;
    NSString *_videoID;
    double _mediaTime;
    NSString *_eventLabel;
    YTVSSControllerState *_VSSState;
    struct CGSize _playerSize;
}

@property(readonly, nonatomic) YTVSSControllerState *VSSState; // @synthesize VSSState=_VSSState;
@property(readonly, nonatomic) NSString *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(readonly, nonatomic) int playerVisibility; // @synthesize playerVisibility=_playerVisibility;
@property(readonly, nonatomic) struct CGSize playerSize; // @synthesize playerSize=_playerSize;
@property(readonly, nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
- (void).cxx_destruct;
- (id)initWithCPN:(id)arg1 videoID:(id)arg2 mediaTime:(double)arg3 playerSize:(struct CGSize)arg4 playerVisibility:(int)arg5 eventLabel:(id)arg6 VSSState:(id)arg7;

@end

