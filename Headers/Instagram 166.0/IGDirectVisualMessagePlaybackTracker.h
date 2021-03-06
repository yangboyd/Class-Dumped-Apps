//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectVisualMessagePlaybackLog, NSMutableDictionary;

@interface IGDirectVisualMessagePlaybackTracker : NSObject
{
    NSMutableDictionary *_messageIdToLogArrayMapping;
    IGDirectVisualMessagePlaybackLog *_incompleteLog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGDirectVisualMessagePlaybackLog *incompleteLog; // @synthesize incompleteLog=_incompleteLog;
@property(readonly, nonatomic) NSMutableDictionary *messageIdToLogArrayMapping; // @synthesize messageIdToLogArrayMapping=_messageIdToLogArrayMapping;
- (id)lastPlaybackEndTimeForMessageWithId:(id)arg1;
- (double)timeSpentForMessageWithId:(id)arg1;
- (void)trackPlaybackEndForMessageWithId:(id)arg1 isPendingMessage:(_Bool)arg2;
- (void)trackPlaybackStartForMessageWithId:(id)arg1 isPendingMessage:(_Bool)arg2;
- (id)initPrivate;

@end

