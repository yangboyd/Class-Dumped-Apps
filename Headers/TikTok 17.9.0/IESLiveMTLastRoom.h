//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface IESLiveMTLastRoom : NSObject
{
    NSDictionary *_lastRoomContext;
    NSNumber *_exitTime;
    NSNumber *_liveDurationTime;
    NSNumber *_roomID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSNumber *liveDurationTime; // @synthesize liveDurationTime=_liveDurationTime;
@property(retain, nonatomic) NSNumber *exitTime; // @synthesize exitTime=_exitTime;
@property(retain, nonatomic) NSDictionary *lastRoomContext; // @synthesize lastRoomContext=_lastRoomContext;
- (_Bool)isNeed;

@end

