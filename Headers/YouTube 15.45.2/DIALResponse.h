//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface DIALResponse : NSObject
{
    _Bool _stoppable;
    _Bool _castSupported;
    long long _status;
    NSString *_instanceURLString;
    NSDictionary *_additionalData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *additionalData; // @synthesize additionalData=_additionalData;
@property(nonatomic, getter=isCastSupported) _Bool castSupported; // @synthesize castSupported=_castSupported;
@property(copy, nonatomic) NSString *instanceURLString; // @synthesize instanceURLString=_instanceURLString;
@property(nonatomic, getter=isStoppable) _Bool stoppable; // @synthesize stoppable=_stoppable;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *passiveAuthCode;
@property(readonly, nonatomic) NSString *passiveSessionID;
@property(readonly, nonatomic) NSString *signInSessionID;
@property(readonly, nonatomic) NSString *deviceAuthCode;
@property(readonly, nonatomic) NSDate *smartRemoteRequestTime;
@property(readonly, nonatomic, getter=isInAppDIAL) _Bool inAppDIAL;
@property(readonly, nonatomic) NSString *theme;
@property(readonly, nonatomic) NSString *screenID;

@end

