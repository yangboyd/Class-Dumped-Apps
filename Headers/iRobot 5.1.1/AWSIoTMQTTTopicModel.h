//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWSIoTMQTTTopicModel : NSObject
{
    unsigned char _qos;
    NSString *_topic;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _extendedCallback;
}

@property(copy, nonatomic) CDUnknownBlockType extendedCallback; // @synthesize extendedCallback=_extendedCallback;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned char qos; // @synthesize qos=_qos;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;

@end

