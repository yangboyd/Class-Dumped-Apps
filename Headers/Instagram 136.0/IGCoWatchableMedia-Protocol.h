//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGUser, NSString;

@protocol IGCoWatchableMedia <NSObject>
@property(readonly, nonatomic) unsigned long long mediaProductType;
@property(readonly, nonatomic) long long contentSource;
@property(readonly, nonatomic) _Bool supportsVideoControls;
@property(readonly, nonatomic) _Bool hasAudio;
@property(readonly, nonatomic) IGUser *owner;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, nonatomic) long long mediaType;
@end

