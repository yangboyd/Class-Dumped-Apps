//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ACCAssetImageGeneratorTracker : NSObject
{
    NSMutableArray *_clipDurationArray;
}

+ (id)getSceneOfType:(unsigned long long)arg1;
+ (void)trackAssetImageGeneratorWithType:(unsigned long long)arg1 durations:(id)arg2 extra:(id)arg3;
+ (void)trackAssetImageGeneratorWithType:(unsigned long long)arg1 frames:(long long)arg2 beginTime:(double)arg3 extra:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clipDurationArray; // @synthesize clipDurationArray=_clipDurationArray;

@end

