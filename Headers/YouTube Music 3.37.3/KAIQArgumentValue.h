//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTCTDeviceId, KAIQFunctionCall, KAIQSimpleValue;

@interface KAIQArgumentValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASTCTDeviceId *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) KAIQFunctionCall *funcall; // @dynamic funcall;
@property(retain, nonatomic) KAIQSimpleValue *simpleValue; // @dynamic simpleValue;
@property(readonly, nonatomic) int valueOneOfCase; // @dynamic valueOneOfCase;

@end

