//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface GNSADSRParams : NSObject <NSCopying>
{
    float _sustainAmplitude;
    double _attackTime;
    double _decayTime;
    double _sustainTime;
    double _releaseTime;
}

@property(nonatomic) float sustainAmplitude; // @synthesize sustainAmplitude=_sustainAmplitude;
@property(nonatomic) double releaseTime; // @synthesize releaseTime=_releaseTime;
@property(nonatomic) double sustainTime; // @synthesize sustainTime=_sustainTime;
@property(nonatomic) double decayTime; // @synthesize decayTime=_decayTime;
@property(nonatomic) double attackTime; // @synthesize attackTime=_attackTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

