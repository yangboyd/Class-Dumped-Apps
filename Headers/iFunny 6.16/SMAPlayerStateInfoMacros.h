//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SMAPlayerStateInfoMacros : NSObject
{
    _Bool _isMuted;
    NSString *_adPlayHead;
    NSString *_adServingId;
    NSURL *_assetURL;
}

@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(copy, nonatomic) NSString *adServingId; // @synthesize adServingId=_adServingId;
@property(copy, nonatomic) NSString *adPlayHead; // @synthesize adPlayHead=_adPlayHead;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *podSequence;
@property(readonly, nonatomic) NSString *contentUri;
@property(readonly, nonatomic) NSString *contentId;
@property(readonly, nonatomic) NSString *assetUri;
@property(readonly, nonatomic) NSString *playerSize;
@property(readonly, nonatomic) NSString *inventoryState;
@property(readonly, nonatomic) NSString *playerState;

@end

