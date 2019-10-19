//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKPlaybackSession, NSArray;

@interface GCKMultizoneStatus : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_devices;
    GCKPlaybackSession *_playbackSession;
    NSArray *_multichannelDevices;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *multichannelDevices; // @synthesize multichannelDevices=_multichannelDevices;
@property(retain, nonatomic) GCKPlaybackSession *playbackSession; // @synthesize playbackSession=_playbackSession;
@property(readonly, copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithDevices:(id)arg1 playbackSession:(id)arg2 multichannelDevices:(id)arg3;
- (id)initWithDevices:(id)arg1;

@end

