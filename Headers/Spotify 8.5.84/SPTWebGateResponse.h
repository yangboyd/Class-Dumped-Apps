//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface SPTWebGateResponse : NSObject
{
    long long _status;
    NSDictionary *_headers;
    NSData *_body;
}

+ (id)responseFromCppResponse:(const struct Response *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)initFromCppResponse:(const struct Response *)arg1;

@end

