//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol GILInteractionMetadata;

@protocol GILSemanticLogger <NSObject>
- (void)logSemanticEventWithID:(int)arg1 sideChannels:(NSArray *)arg2 metadata:(id <GILInteractionMetadata>)arg3;
- (void)logSemanticEventWithID:(int)arg1 metadata:(id <GILInteractionMetadata>)arg2;
- (void)logSemanticEventWithID:(int)arg1 sideChannels:(NSArray *)arg2;
- (void)logSemanticEventWithID:(int)arg1;
@end

