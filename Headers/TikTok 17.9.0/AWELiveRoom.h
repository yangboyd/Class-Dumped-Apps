//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWELiveNearbyTV, NSNumber;

@interface AWELiveRoom : AWEBaseApiModel
{
    _Bool _isAudioLive;
    NSNumber *_roomID;
    NSNumber *_userCount;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_interactiveEnabled;
    AWELiveNearbyTV *_nearbyTV;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) AWELiveNearbyTV *nearbyTV; // @synthesize nearbyTV=_nearbyTV;
@property(retain, nonatomic) NSNumber *interactiveEnabled; // @synthesize interactiveEnabled=_interactiveEnabled;
@property(nonatomic) _Bool isAudioLive; // @synthesize isAudioLive=_isAudioLive;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *userCount; // @synthesize userCount=_userCount;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;

@end

