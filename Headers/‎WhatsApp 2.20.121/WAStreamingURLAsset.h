//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVURLAsset.h>

@class WAStreamingMediaLoader;

@interface WAStreamingURLAsset : AVURLAsset
{
    WAStreamingMediaLoader *_loader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WAStreamingMediaLoader *loader; // @synthesize loader=_loader;
- (void)dealloc;
- (id)initWithURL:(id)arg1 options:(id)arg2 loader:(id)arg3;

@end

