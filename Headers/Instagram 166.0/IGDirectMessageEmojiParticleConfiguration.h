//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectMessageEmojiParticleConfiguration : NSObject
{
    CDUnknownBlockType _configurator;
    CDUnknownBlockType _delayUntilNextEvent;
    unsigned long long _numParticles;
    long long _framesPerSecond;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(readonly, nonatomic) unsigned long long numParticles; // @synthesize numParticles=_numParticles;
@property(readonly, nonatomic) CDUnknownBlockType delayUntilNextEvent; // @synthesize delayUntilNextEvent=_delayUntilNextEvent;
@property(readonly, nonatomic) CDUnknownBlockType configurator; // @synthesize configurator=_configurator;
- (id)initWithConfigurator:(CDUnknownBlockType)arg1 delayUntilNextEvent:(CDUnknownBlockType)arg2 numParticles:(unsigned long long)arg3 framesPerSecond:(long long)arg4;

@end

