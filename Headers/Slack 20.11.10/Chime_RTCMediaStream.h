//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Chime_RTCPeerConnectionFactory, NSArray, NSMutableArray, NSString;

@interface Chime_RTCMediaStream : NSObject
{
    Chime_RTCPeerConnectionFactory *_factory;
    NSMutableArray *_audioTracks;
    NSMutableArray *_videoTracks;
    scoped_refptr_6217ee82 _nativeMediaStream;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFactory:(id)arg1 nativeMediaStream:(scoped_refptr_6217ee82)arg2;
@property(readonly, nonatomic) scoped_refptr_6217ee82 nativeMediaStream;
- (id)description;
- (void)removeVideoTrack:(id)arg1;
- (void)removeAudioTrack:(id)arg1;
- (void)addVideoTrack:(id)arg1;
- (void)addAudioTrack:(id)arg1;
@property(readonly, nonatomic) NSString *streamId;
@property(readonly, nonatomic) NSArray *videoTracks;
@property(readonly, nonatomic) NSArray *audioTracks;
- (id)initWithFactory:(id)arg1 streamId:(id)arg2;

@end

