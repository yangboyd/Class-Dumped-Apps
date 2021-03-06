//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface AbstractRenoEvent : NSObject
{
    NSString *_messageType;
    NSString *_eventType;
    NSString *_renoId;
    NSNumber *_videoId;
    NSDictionary *_payload;
}

+ (id)eventFromPayload:(id)arg1;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
@property(readonly, nonatomic) NSString *renoId; // @synthesize renoId=_renoId;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (void)runWithBackgroundStart:(_Bool)arg1 objectContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)numberForPayloadKeyPath:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

