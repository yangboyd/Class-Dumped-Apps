//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriter.h>

@class NSMutableDictionary;

@interface IESHookAssetWriter : AVAssetWriter
{
    NSMutableDictionary *_observers;
}

@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;

@end

