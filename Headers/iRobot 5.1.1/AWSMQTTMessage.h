//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface AWSMQTTMessage : NSObject
{
    unsigned char _type;
    unsigned char _qos;
    _Bool _retainFlag;
    _Bool _isDuplicate;
    NSData *_data;
}

+ (id)pubcompMessageWithMessageId:(unsigned short)arg1;
+ (id)pubrelMessageWithMessageId:(unsigned short)arg1;
+ (id)pubrecMessageWithMessageId:(unsigned short)arg1;
+ (id)pubackMessageWithMessageId:(unsigned short)arg1;
+ (id)publishMessageWithData:(id)arg1 onTopic:(id)arg2 qos:(unsigned char)arg3 msgId:(unsigned short)arg4 retainFlag:(_Bool)arg5 dupFlag:(_Bool)arg6;
+ (id)publishMessageWithData:(id)arg1 onTopic:(id)arg2 retainFlag:(_Bool)arg3;
+ (id)unsubscribeMessageWithMessageId:(unsigned short)arg1 topic:(id)arg2;
+ (id)subscribeMessageWithMessageId:(unsigned short)arg1 topic:(id)arg2 qos:(unsigned char)arg3;
+ (id)disconnectMessage;
+ (id)pingreqMessage;
+ (id)connectMessageWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(long long)arg4 cleanSession:(_Bool)arg5 willTopic:(id)arg6 willMsg:(id)arg7 willQoS:(unsigned char)arg8 willRetain:(_Bool)arg9;
+ (id)connectMessageWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(long long)arg4 cleanSession:(_Bool)arg5;
@property(retain) NSData *data; // @synthesize data=_data;
@property _Bool isDuplicate; // @synthesize isDuplicate=_isDuplicate;
@property _Bool retainFlag; // @synthesize retainFlag=_retainFlag;
@property unsigned char qos; // @synthesize qos=_qos;
@property unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setDupFlag;
- (id)initWithType:(unsigned char)arg1 qos:(unsigned char)arg2 retainFlag:(_Bool)arg3 dupFlag:(_Bool)arg4 data:(id)arg5;
- (id)initWithType:(unsigned char)arg1 qos:(unsigned char)arg2 data:(id)arg3;
- (id)initWithType:(unsigned char)arg1 data:(id)arg2;
- (id)initWithType:(unsigned char)arg1;

@end

