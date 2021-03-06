//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTClientProvidedMediaSource-Protocol.h"

@class NSString;
@protocol GBTClient;

@interface MediaSourceCameraRoll : NSObject <JBTClientProvidedMediaSource>
{
    id <GBTClient> _client;
}

- (void).cxx_destruct;
- (void)setUpLocalMediasWithCompletion:(CDUnknownBlockType)arg1;
- (void)getMediasWithInt:(int)arg1 withJBTCallback:(id)arg2;
- (_Bool)hasMore;
- (id)getMediaListType;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

