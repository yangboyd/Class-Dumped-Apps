//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchKit/TWSocialPresenceActivity.h>

@class NSString;

@interface TWSocialPresenceActivityPlaying : TWSocialPresenceActivity
{
    unsigned long long _gameId;
    NSString *_gameName;
    NSString *_gameDisplayContext;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *gameDisplayContext; // @synthesize gameDisplayContext=_gameDisplayContext;
@property(copy, nonatomic) NSString *gameName; // @synthesize gameName=_gameName;
@property(nonatomic) unsigned long long gameId; // @synthesize gameId=_gameId;
- (id)description;

@end

