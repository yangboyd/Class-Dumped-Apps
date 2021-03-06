//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ByteRTCEncodingParameters : NSObject
{
    NSNumber *_maxBitrateBps;
    NSNumber *_maxFramerate;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_scaleMode;
    NSNumber *_minPlayoutDelayMs;
    NSNumber *_maxPlayoutDelayMs;
}

@property(retain, nonatomic) NSNumber *maxPlayoutDelayMs; // @synthesize maxPlayoutDelayMs=_maxPlayoutDelayMs;
@property(retain, nonatomic) NSNumber *minPlayoutDelayMs; // @synthesize minPlayoutDelayMs=_minPlayoutDelayMs;
@property(retain, nonatomic) NSNumber *scaleMode; // @synthesize scaleMode=_scaleMode;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *maxFramerate; // @synthesize maxFramerate=_maxFramerate;
@property(retain, nonatomic) NSNumber *maxBitrateBps; // @synthesize maxBitrateBps=_maxBitrateBps;
- (void).cxx_destruct;
- (struct EncodingParameters)nativeParameters;

@end

