//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSMQTTMessage;

@interface AWSMQttTxFlow : NSObject
{
    unsigned int _deadline;
    AWSMQTTMessage *_msg;
}

+ (id)flowWithMsg:(id)arg1 deadline:(unsigned int)arg2;
@property unsigned int deadline; // @synthesize deadline=_deadline;
@property(retain) AWSMQTTMessage *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;
- (id)initWithMsg:(id)arg1 deadline:(unsigned int)arg2;

@end

