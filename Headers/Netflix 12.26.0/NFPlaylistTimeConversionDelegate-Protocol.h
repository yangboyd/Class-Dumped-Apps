//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@protocol NFPlaylistPlayer;

@protocol NFPlaylistTimeConversionDelegate <NSObject>
- (CDStruct_aa637a14)convertToPlaylistPositionForPlayer:(id <NFPlaylistPlayer>)arg1 playlistOffset:(double)arg2;
- (double)convertToPresentableTimeForPlayer:(id <NFPlaylistPlayer>)arg1 playlistPosition:(CDStruct_aa637a14)arg2;
- (double)presentableDurationForPlayer:(id <NFPlaylistPlayer>)arg1;
@end

