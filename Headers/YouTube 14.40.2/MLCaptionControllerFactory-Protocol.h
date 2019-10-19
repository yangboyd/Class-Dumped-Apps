//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe, MLVideo, YTIPlayerResponse;

@protocol MLCaptionControllerFactory <NSObject>
+ (id)new;
+ (id)alloc;
@property(nonatomic) __weak GIMMe *gimme;
- (id <MLCaptionController>)captionControllerForVideo:(MLVideo *)arg1 delegate:(id <MLCaptionControllerDelegate>)arg2 playerCaptionDelegate:(id <MLPlayerCaptionProtocol>)arg3 externalPlaybackActive:(_Bool)arg4;
- (id <MLCaptionController>)captionControllerForPlayerData:(YTIPlayerResponse *)arg1 delegate:(id <MLCaptionControllerDelegate>)arg2 playerCaptionDelegate:(id <MLPlayerCaptionProtocol>)arg3 externalPlaybackActive:(_Bool)arg4;
@end

