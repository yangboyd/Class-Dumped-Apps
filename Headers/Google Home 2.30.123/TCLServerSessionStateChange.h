//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface TCLServerSessionStateChange : NSObject
{
    NSNumber *_serverSessionState;
    NSNumber *_ringState;
    NSArray *_joinedParticipants;
    NSArray *_leftParticipants;
}

+ (id)serverSessionStateChangeWithServerSessionState:(id)arg1 ringState:(id)arg2 joinedParticipants:(id)arg3 leftParticipants:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *leftParticipants; // @synthesize leftParticipants=_leftParticipants;
@property(readonly, nonatomic) NSArray *joinedParticipants; // @synthesize joinedParticipants=_joinedParticipants;
@property(readonly, nonatomic) NSNumber *ringState; // @synthesize ringState=_ringState;
@property(readonly, nonatomic) NSNumber *serverSessionState; // @synthesize serverSessionState=_serverSessionState;
- (id)description;
- (id)initWithServerSessionState:(id)arg1 ringState:(id)arg2 joinedParticipants:(id)arg3 leftParticipants:(id)arg4;

@end

