//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIMOBroadCastOperationResponse : NSObject
{
    unsigned long long _status;
    long long _checkCode;
    NSString *_checkMessage;
    NSString *_extraInfo;
}

@property(copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *checkMessage; // @synthesize checkMessage=_checkMessage;
@property(nonatomic) long long checkCode; // @synthesize checkCode=_checkCode;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

