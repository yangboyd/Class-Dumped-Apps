//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LCInteractRtcClientParams : NSObject
{
    long long _width;
    long long _height;
    long long _fps;
    long long _bitrate;
}

+ (struct LCVideoProfile)checkParams:(id)arg1 PlayMode:(long long)arg2 withResult:(_Bool *)arg3;
+ (id)createRtcClientParamsWithConfiguration:(id)arg1;
@property(readonly, nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) long long fps; // @synthesize fps=_fps;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
- (struct LCVideoProfile)rtcClientParams;
- (id)initWithVideoProfile:(struct LCVideoProfile)arg1;

@end

