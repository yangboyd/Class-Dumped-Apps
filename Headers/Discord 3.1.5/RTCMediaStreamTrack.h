//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RTCMediaStreamTrack : NSObject
{
    scoped_refptr_7d7e84a9 _nativeTrack;
    long long _type;
}

+ (id)stringForState:(long long)arg1;
+ (long long)trackStateForNativeState:(int)arg1;
+ (int)nativeTrackStateForState:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqualToTrack:(id)arg1;
- (id)initWithNativeTrack:(scoped_refptr_7d7e84a9)arg1;
- (id)initWithNativeTrack:(scoped_refptr_7d7e84a9)arg1 type:(long long)arg2;
@property(readonly, nonatomic) scoped_refptr_7d7e84a9 nativeTrack;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) long long readyState;
@property(nonatomic) _Bool isEnabled;
@property(readonly, nonatomic) NSString *trackId;
@property(readonly, nonatomic) NSString *kind;

@end

