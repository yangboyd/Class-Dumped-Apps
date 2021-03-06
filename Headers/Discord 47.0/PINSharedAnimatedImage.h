//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSUUID, PINRemoteLock, UIImage;

@interface PINSharedAnimatedImage : NSObject
{
    PINRemoteLock *_coverImageLock;
    unsigned int _width;
    unsigned int _height;
    unsigned int _bitmapInfo;
    NSArray *_maps;
    NSArray *_completions;
    NSArray *_infoCompletions;
    UIImage *_coverImage;
    NSError *_error;
    unsigned long long _status;
    NSUUID *_UUID;
    float *_durations;
    double _totalDuration;
    unsigned long long _loopCount;
    unsigned long long _frameCount;
    unsigned long long _bitsPerPixel;
}

@property(readonly, nonatomic) unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property(readonly, nonatomic) unsigned long long bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, nonatomic) float *durations; // @synthesize durations=_durations;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property unsigned long long status; // @synthesize status=_status;
@property(retain) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSArray *infoCompletions; // @synthesize infoCompletions=_infoCompletions;
@property(retain, nonatomic) NSArray *completions; // @synthesize completions=_completions;
@property(retain) NSArray *maps; // @synthesize maps=_maps;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setInfoProcessedWithCoverImage:(id)arg1 UUID:(id)arg2 durations:(float *)arg3 totalDuration:(double)arg4 loopCount:(unsigned long long)arg5 frameCount:(unsigned long long)arg6 width:(unsigned int)arg7 height:(unsigned int)arg8 bitsPerPixel:(unsigned long long)arg9 bitmapInfo:(unsigned int)arg10;
- (id)init;

@end

