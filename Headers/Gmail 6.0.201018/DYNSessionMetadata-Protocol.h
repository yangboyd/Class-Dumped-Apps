//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DYNSessionMetadata <NSObject>
+ (id)withTotalForegroundDurationSeconds:(unsigned int)arg1 sessionLengthSeconds:(unsigned int)arg2 navigationEventCount:(unsigned int)arg3 messageRenderCount:(unsigned int)arg4 foregroundCount:(unsigned int)arg5;
@property(readonly, nonatomic) unsigned int foregroundCount;
@property(readonly, nonatomic) unsigned int messageRenderCount;
@property(readonly, nonatomic) unsigned int navigationEventCount;
@property(readonly, nonatomic) unsigned int sessionLengthSeconds;
@property(readonly, nonatomic) unsigned int totalForegroundDurationSeconds;
@end

