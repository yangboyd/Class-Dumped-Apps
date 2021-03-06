//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCDRPCParams, NSString;
@protocol FCDRPCService;

@interface FCDRPCBase : NSObject
{
    _Bool _isAllowedWithoutCredentials;
    FCDRPCParams *_params;
    Class _requestClass;
    Class _responseClass;
    NSString *_methodName;
    NSString *_rpcID;
    unsigned long long _methodType;
    NSString *_httpMethod;
    NSString *_httpURLPattern;
    NSString *_httpBody;
    id <FCDRPCService> _service;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAllowedWithoutCredentials; // @synthesize isAllowedWithoutCredentials=_isAllowedWithoutCredentials;
@property(readonly, nonatomic) __weak id <FCDRPCService> service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *httpBody; // @synthesize httpBody=_httpBody;
@property(readonly, nonatomic) NSString *httpURLPattern; // @synthesize httpURLPattern=_httpURLPattern;
@property(readonly, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(readonly, nonatomic) unsigned long long methodType; // @synthesize methodType=_methodType;
@property(readonly, nonatomic) NSString *rpcID; // @synthesize rpcID=_rpcID;
@property(readonly, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(readonly, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(readonly, nonatomic) Class requestClass; // @synthesize requestClass=_requestClass;
@property(readonly, nonatomic) FCDRPCParams *params; // @synthesize params=_params;
- (id)description;
- (id)initWithRPCParams:(id)arg1;

@end

