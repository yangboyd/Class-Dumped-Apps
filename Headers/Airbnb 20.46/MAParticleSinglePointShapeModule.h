//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAParticleShapeModule-Protocol.h"

@class NSString;

@interface MAParticleSinglePointShapeModule : NSObject <MAParticleShapeModule>
{
    struct SinglePointParticleShape *_singlePointShape;
}

- (_Bool)isRatioEnable;
- (float *)getPoint;
- (void)dealloc;
- (id)initWithShapeX:(float)arg1 Y:(float)arg2 Z:(float)arg3 useRatio:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

