//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTCommerceRPCDecodedErrorData : NSObject
{
    int _statusCode;
    NSString *_decodedErrorString;
}

+ (int)statusCodeFromStatusString:(id)arg1;
+ (int)decodeJSONError:(id)arg1 description:(id *)arg2;
+ (int)decodeProtoError:(id)arg1 description:(id *)arg2;
+ (int)decodeError:(id)arg1 description:(id *)arg2;
@property(readonly, nonatomic) NSString *decodedErrorString; // @synthesize decodedErrorString=_decodedErrorString;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isPermanentError;
- (id)initWithError:(id)arg1;

@end

