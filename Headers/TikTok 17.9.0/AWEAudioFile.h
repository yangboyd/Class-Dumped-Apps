//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DOUAudioFile-Protocol.h"

@class NSString, NSURL;

@interface AWEAudioFile : NSObject <DOUAudioFile>
{
    NSURL *_URL;
    NSURL *_cachedURL;
    NSString *_cachKey;
}

+ (id)fileWithURL:(id)arg1 cachedURL:(id)arg2;
+ (id)fileWithURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cachKey; // @synthesize cachKey=_cachKey;
@property(readonly, nonatomic) NSURL *cachedURL; // @synthesize cachedURL=_cachedURL;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)audioFileURL;
- (id)initWithURL:(id)arg1 cachedURL:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

